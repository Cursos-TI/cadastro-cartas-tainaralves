#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado;
  char codigoCarta [20], nomeCidade [50];
  int populacao, pontosTuristicos;
  float area, PIB;

  char estado2;
  char codigoCarta2 [20], nomeCidade2 [50];
  int populacao2, pontosTuristicos2;
  float area2, PIB2;

  // Área para entrada de dados
  printf("Carta 1: \n");
  printf("Digite a letra do Estado: ");
  scanf(" %c", &estado);
    
  printf("Digite o Código da Carta: ");
  scanf("%s", codigoCarta);

  printf("Digite o Nome da Cidade: ");
  scanf("%s", nomeCidade);

  printf("Digite a população da cidade: ");
  scanf("%d", &populacao);

  printf("Digite a área da cidade: ");
  scanf("%f", &area);

  printf("Digite o PIB da cidade: ");
  scanf("%f", &PIB);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontosTuristicos);

  printf("Carta 2: \n");
  printf("Digite a letra do Estado: ");
  scanf(" %c", &estado2);
    
  printf("Digite o Código da Carta: ");
  scanf("%s", codigoCarta2);

  printf("Digite o Nome da Cidade: ");
  scanf("%s", nomeCidade2);

  printf("Digite a população da cidade: ");
  scanf("%d", &populacao2);

  printf("Digite a área da cidade: ");
  scanf("%f", &area2);

  printf("Digite o PIB da cidade: ");
  scanf("%f", &PIB2);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontosTuristicos2);

  // Área para exibição dos dados da cidade
  printf("Carta 1: \n");
  printf("Estado: %c \n", estado);
  printf("Código: %s \n", codigoCarta);
  printf("Nome da Cidade: %s \n", nomeCidade);
  printf("População: %d \n", populacao);
  printf("Área: %.2f km² \n", area);
  printf("PIB: %.2f bilhões de reais \n", PIB);
  printf("Números de Pontos Turísticos: %d \n", pontosTuristicos);

  printf("Carta 2: \n");
  printf("Estado: %c \n", estado2);
  printf("Código: %s \n", codigoCarta2);
  printf("Nome da Cidade: %s \n", nomeCidade2);
  printf("População: %d \n", populacao2);
  printf("Área: %.2f km² \n", area2);
  printf("PIB: %.2f bilhões de reais \n", PIB2);
  printf("Números de Pontos Turísticos: %d \n", pontosTuristicos2);

return 0;
} 
