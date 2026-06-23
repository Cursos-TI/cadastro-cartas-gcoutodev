#include <stdio.h>

int main() {
    char estado1;
    char codigo1[5];
    char nome1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float PibPerCapita1;
    float superPoder1;
    int resPopulacao;
    int resArea;
    int resPib;
    int resPontosTuristicos;
    int resDensidade;
    int resPibPerCapita;
    int resSuperPoder;


    char estado2;
    char codigo2[5];
    char nome2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float PibPerCapita2;
    float superPoder2;
   

    //Carta 1

    printf("Carta 1\n");

    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos Turisticos: ");
    scanf("%i", &pontosTuristicos1);

    //Densidade1/ pib per1

    densidadePopulacional1 = (float)populacao1 / area1;
    PibPerCapita1 = (float)(pib1 * 1000000000.0) / populacao1;

   
    printf("Densidade Populacional: %.2f\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f\n", PibPerCapita1);

    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + PibPerCapita1 + (1.0f / densidadePopulacional1);

    //Carta 2
    
    printf("\nCarta 2\n");

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos Turisticos: ");
    scanf("%i", &pontosTuristicos2);

    //densidade2/ Pib per2

    densidadePopulacional2 = (float)populacao2 / area2;
    PibPerCapita2 = (float)(pib2 * 1000000000.0) / populacao2;
    
    printf("Densidade Populacional: %.2f\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f\n", PibPerCapita2);
    
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + PibPerCapita2 + (1.0f / densidadePopulacional2);

    resPopulacao = (populacao1 > populacao2);
    resArea = (area1 > area2);
    resPib = (pib1 > pib2);
    resPontosTuristicos = (pontosTuristicos1 > pontosTuristicos2);
    resDensidade = (densidadePopulacional1 < densidadePopulacional2);
    resPibPerCapita = (PibPerCapita1 > PibPerCapita2);
    resSuperPoder = (superPoder1 > superPoder2);
 
    printf("\nComparacao de Cartas:\n");
printf("Populacao: Carta %d venceu (%d)\n", resPopulacao ? 1 : 2, resPopulacao);
printf("Area: Carta %d venceu (%d)\n", resArea ? 1 : 2, resArea);
printf("PIB: Carta %d venceu (%d)\n", resPib ? 1 : 2, resPib);
printf("Pontos Turisticos: Carta %d venceu (%d)\n", resPontosTuristicos ? 1 : 2, resPontosTuristicos);
printf("Densidade Populacional: Carta %d venceu (%d)\n", resDensidade ? 1 : 2, resDensidade);
printf("PIB per Capita: Carta %d venceu (%d)\n", resPibPerCapita ? 1 : 2, resPibPerCapita);
printf("Super Poder: Carta %d venceu (%d)\n", resSuperPoder ? 1 : 2, resSuperPoder);
 
return 0;
}