#include <stdio.h>
int main() {

    // DADOS DA CARTA 1
    char estado1, codigo1[4], nome1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;
    float densidade1, percapita1, super1;

    // DADOS DA CARTA 2
    char estado2, codigo2[4], nome2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;
    float densidade2, percapita2, super2;

    // CARTA 1
    printf("Cadastro da Carta 1:\n");

    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nome1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontos1);

    // CALCULOS CARTA 1
    densidade1 = populacao1 / area1;
    percapita1 = (pib1 * 1000000000.0) / populacao1;
    super1 = populacao1 + area1 + pib1 + pontos1 + percapita1 + (1.0 / densidade1);


    //CARTA 2
    printf("\nCadastro da Carta 2:\n");

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nome2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontos2);

    // CALCULOS CARTA 2
    densidade2 = populacao2 / area2;
    percapita2 = (pib2 * 1000000000.0) / populacao2;
    super2 = populacao2 + area2 + pib2 + pontos2 + percapita2 + (1.0 / densidade2);


    // COMPARAÇÕES
    printf("\n\*****Comparacao das Cartas****\n");

    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);

    // Densidade (menor vence)
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);

    printf("PIB per Capita: Carta 1 venceu (%d)\n", percapita1 > percapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super1 > super2);

    return 0;
}
