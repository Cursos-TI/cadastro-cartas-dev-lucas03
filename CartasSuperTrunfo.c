#include <stdio.h>

int main() {
  
//Variáveis da primeira carta.
  char estado[20];
  char codigo[50];
  char cidade[50];
  int populacao;
  float area;
  float pib;
  int turismo;

//Variáveis da segunda carta.  
  char estado2[20];
  char codigo2[50];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int turismo2;

//Leitura dos dados da primeira carta.
  printf("Estado: \n", estado);
  scanf("%s", estado);

  printf("Código do estado: \n", codigo);
  scanf("%s", codigo);

  printf("Cidade: \n", cidade);
  scanf("%s", cidade);

  printf("População: \n", populacao);
  scanf("%d", &populacao);

  printf("Área: \n", area);
  scanf("%f", &area);

  printf("PIB: \n", pib);
  scanf("%f", &pib);

  printf("Pontos turísticos: \n", turismo);
  scanf("%d", &turismo);

//Impressão dos dados da primeira carta.
  printf("Carta 1:\n");

  printf("\nEstado: %s\n", estado);
  printf("Código do Estado: %s\n", codigo);
  printf("Cidade: %s\n", cidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f bilhões de reais\n", pib);
  printf("Pontos turísticos: %d\n", turismo);

// Leitura dos dados da segunda carta.
  printf("\nEstado: \n", estado2);
  scanf("%s", estado2);

  printf("Código do estado: \n", codigo2);
  scanf("%s", codigo2);

  printf("Cidade: \n", cidade2);
  scanf("%s", cidade2);

  printf("População: \n", populacao2);
  scanf("%d", &populacao2);

  printf("Área: \n", area2);
  scanf("%f", &area2);

  printf("PIB: \n", pib2);
  scanf("%f", &pib2);

  printf("Pontos turísticos: \n", turismo2);
  scanf("%d", &turismo2);

//Impressão dos dados da segunda carta.  
  printf("\nCarta 2:\n");

  printf("\nEstado: %s\n", estado2);
  printf("Código do Estado: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Pontos turísticos: %d", turismo2);




return 0;
}
