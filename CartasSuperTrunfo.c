#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades

char estado1;
int cidade1;
char nomeCidade1[60];
long int populacao1;
float area1;
float pib1;
int pontosTuristicos1;

  // Área para entrada de dados

printf("=== Cadastro da Carta 1 ===\n");

printf("Digite a letra do estado (A a H): ");
scanf(" %c", &estado1);

printf("Digite o numero da cidade (1 a 4): ");
scanf("%d", &cidade1);

printf("Digite o nome da cidade: ");
scanf(" %59[^\n]", nomeCidade1);

printf("Digite a populacao: ");
scanf("%ld", &populacao1);

printf("Digite a area (ex: 123.45): ");
scanf("%f", &area1);

printf("Digite o PIB (ex: 987.65): ");
scanf("%f", &pib1);

printf("Digite o numero de pontos turisticos: ");
scanf("%d", &pontosTuristicos1);
     
  // Área para exibição dos dados da cidade

printf("\n============================\n");
printf("        CARTA 1\n");
printf("============================\n");

printf("Codigo da carta: %c%02d\n", estado1, cidade1);
printf("Cidade: %s\n", nomeCidade1);
printf("Populacao: %ld\n", populacao1);
printf("Area: %.2f\n", area1);
printf("PIB: %.2f\n", pib1);
printf("Pontos Turisticos: %d\n", pontosTuristicos1);
 
  // Área para definição das variáveis para armazenar as propriedades das cidades

char estado2;
int cidade2;
char nomeCidade2[60];
long int populacao2;
float area2;
float pib2;
int pontosTuristicos2;

  // Área para entrada de dados

printf("=== Cadastro da Carta 2 ===\n");

printf("Digite a letra do estado (A a H): ");
scanf(" %c", &estado2);

printf("Digite o numero da cidade (1 a 4): ");
scanf("%d", &cidade2);

printf("Digite o nome da cidade: ");
scanf(" %59[^\n]", nomeCidade2);

printf("Digite a populacao: ");
scanf("%ld", &populacao2);

printf("Digite a area (ex: 123.45): ");
scanf("%f", &area2);

printf("Digite o PIB (ex: 987.65): ");
scanf("%f", &pib2);

printf("Digite o numero de pontos turisticos: ");
scanf("%d", &pontosTuristicos2);
     
  // Área para exibição dos dados da cidade

printf("\n============================\n");
printf("        CARTA 2\n");
printf("============================\n");

printf("Codigo da carta: %c%02d\n", estado2, cidade2);
printf("Cidade: %s\n", nomeCidade2);
printf("Populacao: %ld\n", populacao2);
printf("Area: %.2f\n", area2);
printf("PIB: %.2f\n", pib2);
printf("Pontos Turisticos: %d\n", pontosTuristicos2);

return 0;
}      