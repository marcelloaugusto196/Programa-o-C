#include <stdio.h>

int main() {
    // Carta 1 - Valparaíso de Goiás
    char estado1[] = "Goiás";
    char codigo1[] = "A1";
    char nomeCidade1[] = "Valparaíso de Goiás";
    int populacao1 = 200000;
    float area1 = 60000.00;
    float pib1 = 3000000.00; // em reais
    int pontosTuristicos1 = 30;

    // Carta 2 - Cidade Ocidental
    char estado2[] = "Goiás";
    char codigo2[] = "A2";
    char nomeCidade2[] = "Cidade Ocidental";
    int populacao2 = 90000;
    float area2 = 400000.00;
    float pib2 = 1000000.00; // em reais
    int pontosTuristicos2 = 20;

    // Carta 1
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;

    // Carta 2
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;

    // Exibição da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita1);

    // Exibição da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;

    printf("Novo commit\n");
}