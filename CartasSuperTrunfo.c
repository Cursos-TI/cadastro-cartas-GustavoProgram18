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

return 0;
} 
