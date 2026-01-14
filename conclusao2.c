#include <stdio.h>

// Desafio Super Trunfo - Países
// Cadastro das cartas + cálculos (densidade e PIB per capita)
// Nível novato: comparar UM atributo com if/if-else (escolhido no código)
// Nível aventureiro: menu interativo com switch para escolher o atributo e comparar (com if-else aninhado)
// Nível mestre (final): escolher DOIS atributos diferentes, menu dinâmico, somar atributos e decidir vencedor,
//                       tratar empates, usar operador ternário em partes da lógica.

int main() {

    // ===================== CARTA 1 =====================

    // Área para definição das variáveis
    char estado1;
    int cidade1;
    char nomeCidade1[60];
    unsigned long int populacao1;   // população como unsigned long int
    float area1;
    float pib1;                     // PIB em bilhões
    int pontosTuristicos1;

    float densidadePopulacional1;
    float pibPerCapita1;

    // (mestre antigo) novas variáveis
    float inversoDensidade1;
    float superPoder1;

    // Área para entrada de dados
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Digite a letra do estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o numero da cidade (1 a 4): ");
    scanf("%d", &cidade1);

    printf("Digite o nome da cidade: ");
    scanf(" %59[^\n]", nomeCidade1);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);

    printf("Digite a area (ex: 123.45): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes, ex: 987.65): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Área de cálculos
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0f) / (float)populacao1;

    // (mestre antigo) inverso da densidade e super poder
    inversoDensidade1 = 1.0f / densidadePopulacional1;

    superPoder1 =
        (float)populacao1 +
        area1 +
        pib1 +
        (float)pontosTuristicos1 +
        pibPerCapita1 +
        inversoDensidade1;

    // Área para exibição dos dados
    printf("\n============================\n");
    printf("        CARTA 1\n");
    printf("============================\n");

    printf("Codigo da carta: %c%02d\n", estado1, cidade1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);


    // ===================== CARTA 2 =====================

    // Área para definição das variáveis
    char estado2;
    int cidade2;
    char nomeCidade2[60];
    unsigned long int populacao2;   // população como unsigned long int
    float area2;
    float pib2;                     // PIB em bilhões
    int pontosTuristicos2;

    float densidadePopulacional2;
    float pibPerCapita2;

    // (mestre antigo) novas variáveis
    float inversoDensidade2;
    float superPoder2;

    // Área para entrada de dados
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Digite a letra do estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o numero da cidade (1 a 4): ");
    scanf("%d", &cidade2);

    printf("Digite o nome da cidade: ");
    scanf(" %59[^\n]", nomeCidade2);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);

    printf("Digite a area (ex: 123.45): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes, ex: 987.65): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Área de cálculos
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / (float)populacao2;

    // (mestre antigo) inverso da densidade e super poder
    inversoDensidade2 = 1.0f / densidadePopulacional2;

    superPoder2 =
        (float)populacao2 +
        area2 +
        pib2 +
        (float)pontosTuristicos2 +
        pibPerCapita2 +
        inversoDensidade2;

    // Área para exibição dos dados
    printf("\n============================\n");
    printf("        CARTA 2\n");
    printf("============================\n");

    printf("Codigo da carta: %c%02d\n", estado2, cidade2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);


    // ===================== COMPARACAO (NIVEL NOVATO) =====================
    // Comparar APENAS UM atributo (escolhido diretamente no código)
    // Atributo escolhido: POPULACAO (maior vence)

    printf("\n============================\n");
    printf("Comparacao de cartas (Atributo: Populacao)\n");
    printf("============================\n");

    printf("\nCarta 1 - %s (%c%02d): %lu\n", nomeCidade1, estado1, cidade1, populacao1);
    printf("Carta 2 - %s (%c%02d): %lu\n", nomeCidade2, estado2, cidade2, populacao2);

    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }


    // ===================== COMPARACOES (NIVEL MESTRE ANTIGO) =====================
    // Exibir 1 para verdadeiro (Carta 1 vence) e 0 para falso (Carta 2 vence)

    printf("\n============================\n");
    printf("   Comparacao de Cartas (por atributo)\n");
    printf("============================\n");

    // Para todos (exceto densidade): maior vence -> Carta 1 vence = 1, senão 0
    printf("Populacao: Carta 1 venceu (%d)\n", (populacao1 > populacao2));
    printf("Area: Carta 1 venceu (%d)\n", (area1 > area2));
    printf("PIB: Carta 1 venceu (%d)\n", (pib1 > pib2));
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2));

    // Densidade: menor vence
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", (densidadePopulacional1 < densidadePopulacional2));

    printf("PIB per Capita: Carta 1 venceu (%d)\n", (pibPerCapita1 > pibPerCapita2));
    printf("Super Poder: Carta 1 venceu (%d)\n", (superPoder1 > superPoder2));


    // ===================== MENU INTERATIVO (NIVEL AVENTUREIRO) =====================
    // Menu com switch para escolher atributo; comparação com if/else (aninhado)

    int opcao;

    printf("\n============================\n");
    printf("      MENU DE COMPARACAO\n");
    printf("============================\n");
    printf("Compare entre as duas cartas:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Escolha uma opcao (1 a 5): ");
    scanf("%d", &opcao);

    printf("\n============================\n");
    printf("Resultado da comparacao\n");
    printf("============================\n");
    printf("Carta 1: %s\n", nomeCidade1);
    printf("Carta 2: %s\n", nomeCidade2);

    switch (opcao) {
        case 1:
            printf("\nAtributo: Populacao\n");
            printf("Carta 1 (%s): %lu\n", nomeCidade1, populacao1);
            printf("Carta 2 (%s): %lu\n", nomeCidade2, populacao2);

            if (populacao1 > populacao2) {
                printf("Vencedora: Carta 1 (%s)\n", nomeCidade1);
            } else {
                if (populacao2 > populacao1) {
                    printf("Vencedora: Carta 2 (%s)\n", nomeCidade2);
                } else {
                    printf("Empate!\n");
                }
            }
            break;

        case 2:
            printf("\nAtributo: Area\n");
            printf("Carta 1 (%s): %.2f\n", nomeCidade1, area1);
            printf("Carta 2 (%s): %.2f\n", nomeCidade2, area2);

            if (area1 > area2) {
                printf("Vencedora: Carta 1 (%s)\n", nomeCidade1);
            } else {
                if (area2 > area1) {
                    printf("Vencedora: Carta 2 (%s)\n", nomeCidade2);
                } else {
                    printf("Empate!\n");
                }
            }
            break;

        case 3:
            printf("\nAtributo: PIB (em bilhoes)\n");
            printf("Carta 1 (%s): %.2f\n", nomeCidade1, pib1);
            printf("Carta 2 (%s): %.2f\n", nomeCidade2, pib2);

            if (pib1 > pib2) {
                printf("Vencedora: Carta 1 (%s)\n", nomeCidade1);
            } else {
                if (pib2 > pib1) {
                    printf("Vencedora: Carta 2 (%s)\n", nomeCidade2);
                } else {
                    printf("Empate!\n");
                }
            }
            break;

        case 4:
            printf("\nAtributo: Pontos Turisticos\n");
            printf("Carta 1 (%s): %d\n", nomeCidade1, pontosTuristicos1);
            printf("Carta 2 (%s): %d\n", nomeCidade2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Vencedora: Carta 1 (%s)\n", nomeCidade1);
            } else {
                if (pontosTuristicos2 > pontosTuristicos1) {
                    printf("Vencedora: Carta 2 (%s)\n", nomeCidade2);
                } else {
                    printf("Empate!\n");
                }
            }
            break;

        case 5:
            printf("\nAtributo: Densidade Demografica (menor vence)\n");
            printf("Carta 1 (%s): %.2f\n", nomeCidade1, densidadePopulacional1);
            printf("Carta 2 (%s): %.2f\n", nomeCidade2, densidadePopulacional2);

            // Regra invertida: menor densidade vence
            if (densidadePopulacional1 < densidadePopulacional2) {
                printf("Vencedora: Carta 1 (%s)\n", nomeCidade1);
            } else {
                if (densidadePopulacional2 < densidadePopulacional1) {
                    printf("Vencedora: Carta 2 (%s)\n", nomeCidade2);
                } else {
                    printf("Empate!\n");
                }
            }
            break;

        default:
            printf("\nOpcao invalida! Escolha um numero de 1 a 5.\n");
            break;
    }


    // ===================== NIVEL MESTRE FINAL (2 ATRIBUTOS) =====================
    // - escolher 2 atributos NUMERICOS diferentes (menu dinamico)
    // - comparar cada atributo (densidade: menor vence; demais: maior vence)
    // - somar os 2 atributos para cada carta e decidir vencedor
    // - tratar empate na soma
    // - usar operador ternario (ex.: vencedor pela soma)

    int atributo1, atributo2;
    float valorA1_c1 = 0.0f, valorA1_c2 = 0.0f;
    float valorA2_c1 = 0.0f, valorA2_c2 = 0.0f;
    float soma1 = 0.0f, soma2 = 0.0f;

    char nomeAttr1[40];
    char nomeAttr2[40];

    printf("\n============================\n");
    printf("   NIVEL MESTRE (2 ATRIBUTOS)\n");
    printf("============================\n");
    printf("Escolha DOIS atributos diferentes para comparar.\n");
    printf("A regra geral: maior vence. Para Densidade, menor vence.\n\n");

    // Menu 1 (fixo)
    printf("Menu - Escolha o 1o atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Digite sua escolha (1 a 5): ");
    scanf("%d", &atributo1);

    // Menu 2 (dinâmico: não mostra o atributo escolhido no 1)
    printf("\nMenu - Escolha o 2o atributo (diferente do 1o):\n");
    if (atributo1 != 1) printf("1 - Populacao\n");
    if (atributo1 != 2) printf("2 - Area\n");
    if (atributo1 != 3) printf("3 - PIB\n");
    if (atributo1 != 4) printf("4 - Pontos Turisticos\n");
    if (atributo1 != 5) printf("5 - Densidade Demografica\n");
    printf("Digite sua escolha: ");
    scanf("%d", &atributo2);

    // Garantir que não escolheu o mesmo atributo duas vezes
    if (atributo2 == atributo1) {
        printf("\nErro: voce nao pode escolher o mesmo atributo duas vezes.\n");
        printf("Execute o programa novamente e escolha atributos diferentes.\n");
        return 0;
    }

    // --------- Função "manual" para obter valor e nome do atributo 1 (via switch) ---------
    switch (atributo1) {
        case 1:
            sprintf(nomeAttr1, "Populacao");
            valorA1_c1 = (float)populacao1;
            valorA1_c2 = (float)populacao2;
            break;
        case 2:
            sprintf(nomeAttr1, "Area");
            valorA1_c1 = area1;
            valorA1_c2 = area2;
            break;
        case 3:
            sprintf(nomeAttr1, "PIB");
            valorA1_c1 = pib1;
            valorA1_c2 = pib2;
            break;
        case 4:
            sprintf(nomeAttr1, "Pontos Turisticos");
            valorA1_c1 = (float)pontosTuristicos1;
            valorA1_c2 = (float)pontosTuristicos2;
            break;
        case 5:
            sprintf(nomeAttr1, "Densidade Demografica");
            valorA1_c1 = densidadePopulacional1;
            valorA1_c2 = densidadePopulacional2;
            break;
        default:
            printf("\nErro: 1o atributo invalido.\n");
            return 0;
    }

    // --------- Obter valor e nome do atributo 2 (via switch) ---------
    switch (atributo2) {
        case 1:
            sprintf(nomeAttr2, "Populacao");
            valorA2_c1 = (float)populacao1;
            valorA2_c2 = (float)populacao2;
            break;
        case 2:
            sprintf(nomeAttr2, "Area");
            valorA2_c1 = area1;
            valorA2_c2 = area2;
            break;
        case 3:
            sprintf(nomeAttr2, "PIB");
            valorA2_c1 = pib1;
            valorA2_c2 = pib2;
            break;
        case 4:
            sprintf(nomeAttr2, "Pontos Turisticos");
            valorA2_c1 = (float)pontosTuristicos1;
            valorA2_c2 = (float)pontosTuristicos2;
            break;
        case 5:
            sprintf(nomeAttr2, "Densidade Demografica");
            valorA2_c1 = densidadePopulacional1;
            valorA2_c2 = densidadePopulacional2;
            break;
        default:
            printf("\nErro: 2o atributo invalido.\n");
            return 0;
    }

    // --------- Comparar atributo 1 (densidade: menor vence; demais: maior vence) ---------
    printf("\n============================\n");
    printf("Comparacao FINAL - 2 atributos\n");
    printf("============================\n");
    printf("Carta 1: %s\n", nomeCidade1);
    printf("Carta 2: %s\n", nomeCidade2);

    printf("\nAtributo 1: %s\n", nomeAttr1);
    printf("Carta 1 (%s): %.2f\n", nomeCidade1, valorA1_c1);
    printf("Carta 2 (%s): %.2f\n", nomeCidade2, valorA1_c2);

    if (atributo1 == 5) {
        // densidade: menor vence
        if (valorA1_c1 < valorA1_c2) {
            printf("Vencedora no Atributo 1: Carta 1 (%s)\n", nomeCidade1);
        } else if (valorA1_c2 < valorA1_c1) {
            printf("Vencedora no Atributo 1: Carta 2 (%s)\n", nomeCidade2);
        } else {
            printf("Vencedora no Atributo 1: Empate!\n");
        }
    } else {
        // demais: maior vence
        if (valorA1_c1 > valorA1_c2) {
            printf("Vencedora no Atributo 1: Carta 1 (%s)\n", nomeCidade1);
        } else if (valorA1_c2 > valorA1_c1) {
            printf("Vencedora no Atributo 1: Carta 2 (%s)\n", nomeCidade2);
        } else {
            printf("Vencedora no Atributo 1: Empate!\n");
        }
    }

    // --------- Comparar atributo 2 (densidade: menor vence; demais: maior vence) ---------
    printf("\nAtributo 2: %s\n", nomeAttr2);
    printf("Carta 1 (%s): %.2f\n", nomeCidade1, valorA2_c1);
    printf("Carta 2 (%s): %.2f\n", nomeCidade2, valorA2_c2);

    if (atributo2 == 5) {
        // densidade: menor vence
        if (valorA2_c1 < valorA2_c2) {
            printf("Vencedora no Atributo 2: Carta 1 (%s)\n", nomeCidade1);
        } else if (valorA2_c2 < valorA2_c1) {
            printf("Vencedora no Atributo 2: Carta 2 (%s)\n", nomeCidade2);
        } else {
            printf("Vencedora no Atributo 2: Empate!\n");
        }
    } else {
        // demais: maior vence
        if (valorA2_c1 > valorA2_c2) {
            printf("Vencedora no Atributo 2: Carta 1 (%s)\n", nomeCidade1);
        } else if (valorA2_c2 > valorA2_c1) {
            printf("Vencedora no Atributo 2: Carta 2 (%s)\n", nomeCidade2);
        } else {
            printf("Vencedora no Atributo 2: Empate!\n");
        }
    }

    // --------- Soma dos dois atributos e decisão final ---------
    soma1 = valorA1_c1 + valorA2_c1;
    soma2 = valorA1_c2 + valorA2_c2;

    printf("\n----------------------------\n");
    printf("Soma dos atributos\n");
    printf("----------------------------\n");
    printf("Carta 1 (%s): %.2f\n", nomeCidade1, soma1);
    printf("Carta 2 (%s): %.2f\n", nomeCidade2, soma2);

    // Operador ternário para decidir resultado final com base na soma
    // (a mensagem final ainda precisa tratar empate)
    printf("\nResultado Final: ");
    (soma1 > soma2) ? printf("Carta 1 (%s) venceu!\n", nomeCidade1)
                    : (soma2 > soma1) ? printf("Carta 2 (%s) venceu!\n", nomeCidade2)
                                      : printf("Empate!\n");

    return 0;
}
