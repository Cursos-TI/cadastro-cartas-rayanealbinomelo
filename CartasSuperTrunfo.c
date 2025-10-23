#include <stdio.h> //Biblioteca padrão de entrada e saída

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() { // declaração de variáveis
char estado1, estado2; // Armazena a inicial do estado da carta
char codigo1[4], codigo2[4]; // Armazena o código da carta
char cidade1[50], cidade2[50]; // Armazena o nome da cidade
int habitantes1, habitantes2; // Número de habitantes da cidade
float area1, area2; // Área da cidade em km²
float pib1, pib2; // PIB da cidade em bilhões
int pontos1, pontos2; // Número de pontos turísticos da cidade

printf("Cadastro da Carta 1: \n"); // Cadastrando a carta 1

printf("Digite a inicial de um estado de (A-H):  \n");
scanf(" %c", &estado1);

printf("Digite um código para a carta (ex:A01):  \n");
scanf("%s", codigo1);

printf("Digite o nome de uma cidade (sem espaços):  \n");
scanf("%s", cidade1);

printf("Digite quantos habitantes a cidade possui: \n");
scanf("%d", &habitantes1);

printf("Digite a área (km²) total da cidade: \n");
scanf("%f", &area1);

printf("Digite o PIB total da cidade (em bilhões): \n");
scanf("%f", &pib1);

printf("Digite o número de Pontos Turísticos que a cidade possui: \n");
scanf("%d", &pontos1);

printf("***Dados da Carta1***\n"); // Exibindo dados da Carta 1

printf("Estado: %c\n", estado1);
printf("Código da cidade: %s\n", codigo1);
printf("Nome da cidade:%s\n", cidade1);
printf("População:%d \n", habitantes1);
printf("Área: %.2f (km²)\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Número de Pontos Turísticos: %d \n", pontos1);

printf("Cadastro da Carta 2 \n"); // Cadastrando a Carta 2

printf("Digite a inicial de um estado de (A-H): \n"); 
scanf(" %c", &estado2); 

printf("Digite um código para a carta (ex:A01): \n");
scanf("%s", codigo2); 

printf("Digite o nome de uma cidade (sem espaços): \n");
scanf("%s", cidade2);

printf("Digite quantos habitantes a cidade possui: \n");
scanf("%d", &habitantes2);

printf("Digite a área (km²) total da cidade: \n");
scanf("%f", &area2);

printf("Digite o PIB total da cidade (em bilhões): \n");
scanf("%f", &pib2);

printf("Digite o número de Pontos Turísticos que a cidade possui: \n");
scanf("%d", &pontos2);

printf("***Dados da Carta 2***: \n"); // Exibindo dados da Carta 2

printf("Estado: %c \n", estado2);
printf("Código: %s \n", codigo2);
printf("Nome da cidade: %s \n",cidade2);
printf("População: %d \n", habitantes2);
printf("Área: %.2f (km²) \n", area2);
printf("PIB: %.2f bilhões de reais \n", pib2);
printf("Número de Pontos Turísticos: %d \n", pontos2);

return 0; // Finalizando o programa




}