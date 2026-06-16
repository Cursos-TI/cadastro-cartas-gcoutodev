#include <stdio.h>

int main() {
    char estado1;
    char codigo1[5];
    char nome1[50];
    long populacao1;
    double area1;
    double pib1;
    int pontosTuristicos1;

    char estado2;
    char codigo2[5];
    char nome2[50];
    long populacao2;
    double area2;
    double pib2;
    int pontosTuristicos2;

    printf("=== Carta 1 ===\n");

    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Codigo: ");
    scanf("%4s", codigo1);  // sem & e com limite

    printf("Nome da cidade: ");
    scanf(" %49[^\n]", nome1);  // sem & e com limite

    printf("Populacao: ");
    scanf("%ld", &populacao1);  // %ld para long

    printf("Area: ");
    scanf("%lf", &area1);  // %lf para double

    printf("PIB: ");
    scanf("%lf", &pib1);

    printf("Pontos Turisticos: ");
    scanf("%i", &pontosTuristicos1);

    printf("\n=== Carta 2 ===\n");

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Codigo: ");
    scanf("%4s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %49[^\n]", nome2);

    printf("Populacao: ");
    scanf("%ld", &populacao2);

    printf("Area: ");
    scanf("%lf", &area2);

    printf("PIB: ");
    scanf("%lf", &pib2);

    printf("Pontos Turisticos: ");
    scanf("%i", &pontosTuristicos2);

    return 0;
}