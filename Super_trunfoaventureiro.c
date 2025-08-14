#include <stdio.h>
#include <stdlib.h>

int main() {
    char Estado1[20], Estado2[20];
    char Codigo1[20], Codigo2[20];
    char NomedaCidade1[20], NomedaCidade2[20];
    int Populacao1, Populacao2;
    float Area1, Area2;
    float PIB1, PIB2;
    int NumerodePontosTuristicos1, NumerodePontosTuristicos2;
    float DensidadePopulacional1, DensidadePopulacional2;
    float PIBperCapita1, PIBperCapita2;

    // Carta 1
    printf("Desafio Super Trunfo! \n  ");
    printf("    (Carta 1)\n\n");

    printf("Digite o Estado: ");
    scanf(" %19[^\n]", Estado1);

    printf("Digite o Código: ");
    scanf(" %19[^\n]", Codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %19[^\n]", NomedaCidade1);

    printf("Digite a População: ");
    scanf("%d", &Populacao1);

    printf("Digite a Área (km²): ");
    scanf("%f", &Area1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &PIB1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &NumerodePontosTuristicos1);

    system("clear"); // use "cls" no Windows

    // Carta 2
    printf("Desafio Super Trunfo! \n  ");
    printf("    (Carta 2)\n\n");

    printf("Digite o Estado: ");
    scanf(" %19[^\n]", Estado2);

    printf("Digite o Código: ");
    scanf(" %19[^\n]", Codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %19[^\n]", NomedaCidade2);

    printf("Digite a População: ");
    scanf("%d", &Populacao2);

    printf("Digite a Área (km²): ");
    scanf("%f", &Area2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &PIB2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &NumerodePontosTuristicos2);

    system("clear");

    // Cálculos
    DensidadePopulacional1 = Populacao1 / Area1;
    DensidadePopulacional2 = Populacao2 / Area2;

    PIBperCapita1 = PIB1 * 1000000000 / Populacao1; // PIB em reais
    PIBperCapita2 = PIB2 * 1000000000 / Populacao2;

    // Carta 1
    printf("\n--- Informações da Carta 1 ---\n");
    printf("Estado: %s\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Cidade: %s\n", NomedaCidade1);
    printf("População: %d hab\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões R$\n", PIB1);
    printf("Pontos Turísticos: %d\n", NumerodePontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional1);
    printf("PIB per Capita: %.2f R$\n", PIBperCapita1);

    // Carta 2
    printf("\n--- Informações da Carta 2 ---\n");
    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Cidade: %s\n", NomedaCidade2);
    printf("População: %d hab\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões R$\n", PIB2);
    printf("Pontos Turísticos: %d\n", NumerodePontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional2);
    printf("PIB per Capita: %.2f R$\n", PIBperCapita2);

    return 0;
}