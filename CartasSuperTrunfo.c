#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado1;
int cidade1;
char nomeCidade[60];
long int populacao1;
float area1;
float pib1;
int pontosturisticos1;

  // Área para entrada de dados

printf("=== Cadastro da Carta 1 ===\n");

printf(" A ");
scanf(" %c", &estado1);

printf(" 1 ");
scanf(" %d", &cidade1);

printf(" Santo Domingo - Republica Dominicana ");
scanf(" %59[^\n]", nomeCidade1);
  // Área para exibição dos dados da cidade

return 0;
} 
