#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    unsigned long int habitantes1, habitantes2;
    float area1, area2;
    float pib1, pib2; 
    int pontos1, pontos2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    int opcao; 

    //CADASTRO CARTA 1
    printf("Cadastro da Carta 1:\n");
    printf("Digite a inicial de um estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade (sem espaços): ");
    scanf("%s", cidade1);
    printf("Digite a população: ");
    scanf("%lu", &habitantes1);
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB total (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);

    densidade1 = (float)habitantes1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / (float)habitantes1;

    //CADASTRO CARTA 2
    printf("\nCadastro da Carta 2:\n");
    printf("Digite a inicial de um estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade (sem espaços): ");
    scanf("%s", cidade2);
    printf("Digite a população: ");
    scanf("%lu", &habitantes2);
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB total (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);

    densidade2 = (float)habitantes2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / (float)habitantes2;

    //MENU DE COMPARAÇÃO
    printf("\n*** MENU DE COMPARAÇÃO ***\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    printf("\n*** Resultado da Comparação ***\n");

    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %lu habitantes\n", cidade1, habitantes1);
            printf("%s: %lu habitantes\n", cidade2, habitantes2);

            if (habitantes1 > habitantes2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (habitantes2 > habitantes1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2:
            printf("Atributo: Área (km²)\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);

            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (area2 > area1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:
            printf("Atributo: PIB (em bilhões)\n");
            printf("%s: %.2f bilhões\n", cidade1, pib1);
            printf("%s: %.2f bilhões\n", cidade2, pib2);

            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (pib2 > pib1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos\n", cidade1, pontos1);
            printf("%s: %d pontos\n", cidade2, pontos2);

            if (pontos1 > pontos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (pontos2 > pontos1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:
            printf("Atributo: Densidade Populacional (hab/km²)\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidade1);
            printf("%s: %.2f hab/km²\n", cidade2, densidade2);

            if (densidade1 < densidade2) {
                printf("Resultado: Carta 1 (%s) venceu! (menor densidade)\n", cidade1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: Carta 2 (%s) venceu! (menor densidade)\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 6:
            printf("Atributo: PIB per Capita\n");
            printf("%s: R$ %.2f\n", cidade1, pibPerCapita1);
            printf("%s: R$ %.2f\n", cidade2, pibPerCapita2);

            if (pibPerCapita1 > pibPerCapita2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (pibPerCapita2 > pibPerCapita1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Escolha um número de 1 a 6.\n");
            break;
    }
    
    //COMPARAÇÃO AVANÇADA
    int atributo1, atributo2;

    printf("\n*** MENU DE COMPARAÇÃO AVANÇADA ***\n");
    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    scanf("%d", &atributo1);

    if (atributo1 < 1 || atributo1 > 6) {
        printf("Opção inválida!\n");
        return 0;
    }

    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");

    for (int i = 1; i <= 6; i++) {
        if (i != atributo1) {
            switch (i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turísticos\n"); break;
                case 5: printf("5 - Densidade Populacional\n"); break;
                case 6: printf("6 - PIB per Capita\n"); break;
            }
        }
    }

    scanf("%d", &atributo2);

    if (atributo2 < 1 || atributo2 > 6 || atributo2 == atributo1) {
        printf("Opção inválida!\n");
        return 0;
    }

    printf("\n=== RESULTADO DA COMPARAÇÃO ===\n");

    float valor1_carta1, valor1_carta2;
    float valor2_carta1, valor2_carta2;

    switch (atributo1) {
        case 1: valor1_carta1 = habitantes1; valor1_carta2 = habitantes2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = pontos1; valor1_carta2 = pontos2; break;
        case 5: valor1_carta1 = densidade1; valor1_carta2 = densidade2; break;
        case 6: valor1_carta1 = pibPerCapita1; valor1_carta2 = pibPerCapita2; break;
    }

    switch (atributo2) {
        case 1: valor2_carta1 = habitantes1; valor2_carta2 = habitantes2; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: valor2_carta1 = pontos1; valor2_carta2 = pontos2; break;
        case 5: valor2_carta1 = densidade1; valor2_carta2 = densidade2; break;
        case 6: valor2_carta1 = pibPerCapita1; valor2_carta2 = pibPerCapita2; break;
    }

    float soma1 = 0, soma2 = 0;

    //Atributo 1
    int vencedor1;
    if (atributo1 == 5) {
        vencedor1 = (valor1_carta1 < valor1_carta2) ? 1 : (valor1_carta2 < valor1_carta1 ? 2 : 0);
    } else {
        vencedor1 = (valor1_carta1 > valor1_carta2) ? 1 : (valor1_carta2 > valor1_carta1 ? 2 : 0);
    }

    // Atributo 2
    int vencedor2;
    if (atributo2 == 5) {
        vencedor2 = (valor2_carta1 < valor2_carta2) ? 1 : (valor2_carta2 < valor2_carta1 ? 2 : 0);
    } else {
        vencedor2 = (valor2_carta1 > valor2_carta2) ? 1 : (valor2_carta2 > valor2_carta1 ? 2 : 0);
    }

    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;

    //Mostrar resultados
    printf("\nCarta 1 (%s): %.2f + %.2f = %.2f\n", cidade1, valor1_carta1, valor2_carta1, soma1);
    printf("Carta 2 (%s): %.2f + %.2f = %.2f\n", cidade2, valor1_carta2, valor2_carta2, soma2);

    printf("\n=== VENCEDOR FINAL ===\n");

    if (soma1 > soma2) {
        printf("Carta 1 (%s) venceu!\n", cidade1);
    } else if (soma2 > soma1) {
        printf("Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Empate!\n");
    }
} 
