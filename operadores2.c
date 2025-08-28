#include <stdio.h>

typedef struct {
    char estado[50];
    char codigo[10];
    char nome[100];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;
} Carta;

// Função para preencher carta com dados já definidos
void preencherCarta(Carta *carta, const char estado[], const char codigo[], const char nome[],
                    unsigned long int populacao, float area, float pib, int pontos_turisticos) {
    // Copiando os dados para a struct
    snprintf(carta->estado, sizeof(carta->estado), "%s", estado);
    snprintf(carta->codigo, sizeof(carta->codigo), "%s", codigo);
    snprintf(carta->nome, sizeof(carta->nome), "%s", nome);
    carta->populacao = populacao;
    carta->area = area;
    carta->pib = pib;
    carta->pontos_turisticos = pontos_turisticos;

    // Cálculos
    carta->densidade_populacional = carta->populacao / carta->area;
    carta->pib_per_capita = carta->pib / carta->populacao;

    float inverso_densidade = 1.0 / carta->densidade_populacional;
    carta->super_poder = (float)carta->populacao + carta->area + carta->pib +
                         carta->pontos_turisticos + carta->pib_per_capita + inverso_densidade;
}

// Função para comparar dois valores float (maior ou menor vence)
int comparar(float a, float b, int maior_vence) {
    if (maior_vence)
        return a > b ? 1 : 0;
    else
        return a < b ? 1 : 0;
}

// Função para exibir os resultados da comparação
void compararCartas(Carta c1, Carta c2) {
    printf("\nComparação de Cartas:\n");

    printf("População: Carta 1 venceu (%d)\n", comparar((float)c1.populacao, (float)c2.populacao, 1));
    printf("Área: Carta 1 venceu (%d)\n", comparar(c1.area, c2.area, 1));
    printf("PIB: Carta 1 venceu (%d)\n", comparar(c1.pib, c2.pib, 1));
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", comparar((float)c1.pontos_turisticos, (float)c2.pontos_turisticos, 1));
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", comparar(c1.densidade_populacional, c2.densidade_populacional, 0));
    printf("PIB per Capita: Carta 1 venceu (%d)\n", comparar(c1.pib_per_capita, c2.pib_per_capita, 1));
    printf("Super Poder: Carta 1 venceu (%d)\n", comparar(c1.super_poder, c2.super_poder, 1));
}

// Função para exibir os dados de uma carta
void exibirCarta(Carta carta, int numero) {
    printf("\nCarta %d:\n", numero);
    printf("Estado: %s\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nome);
    printf("População: %lu\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f reais\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n", carta.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta.densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", carta.pib_per_capita);
    printf("Super Poder: %.2f\n", carta.super_poder);
}

int main() {
    Carta carta1, carta2;

    // Dados da Carta 1 - Valparaíso de Goiás
    preencherCarta(&carta1, "Goiás", "A1", "Valparaíso de Goiás", 200000, 60000.00, 3000000.00, 30);

    // Dados da Carta 2 - Cidade Ocidental
    preencherCarta(&carta2, "Goiás", "A2", "Cidade Ocidental", 90000, 400000.00, 1000000.00, 20);

    // Exibir os dados das cartas
    exibirCarta(carta1, 1);
    exibirCarta(carta2, 2);

    // Comparar e exibir os resultados
    compararCartas(carta1, carta2);

    return 0;
}

