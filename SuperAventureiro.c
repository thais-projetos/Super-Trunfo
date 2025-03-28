#include <stdio.h>

// Desafio super trunfo nivel aventureiro 

int main() {
    //Carta 1
    char estado1 = 'A';
    char codigo1[] = "A01";
    char nomeCidade1[] = "Curitiba";
    int populacao1 = 1963726;
    float area1 = 435.04;
    float pib1 = 96.72 * 1000000000; // PIB em reais
    int pontosTuristicos1 = 20;
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;
    
    //Carta 2
    char estado2 = 'B';
    char codigo2[] = "B02";
    char nomeCidade2[] = "Belo Horizonte";
    int populacao2 = 2521564;
    float area2 = 331.40;
    float pib2 = 120.50 * 1000000000; // PIB em reais
    int pontosTuristicos2 = 25;
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;
    
    // Informações Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    
    // Informações Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    
    return 0;
}