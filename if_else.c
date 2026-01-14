#include <stdio.h>

// Desafio Super Trunfo - Países
// Cadastro das cartas + cálculos (densidade e PIB per capita)
// Nível novato: comparar UM atributo com if/if-else (escolhido no código)

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

    // (mestre) novas variáveis
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

    // (mestre) inverso da densidade e super poder
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

    // (mestre) novas variáveis
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

    // (mestre) inverso da densidade e super poder
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


    // ===================== COMPARACOES (NIVEL MESTRE) =====================
    // Exibir 1 para verdadeiro (Carta 1 vence) e 0 para falso (Carta 2 vence)
    // Obs.: empates aparecem como 0 (pois usa > ou <), 

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

    return 0;
}


