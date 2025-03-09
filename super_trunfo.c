#include <stdio.h>

int main() {
    // Desafio Cartas Super Trunfo
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    
    printf("Desafio Cartas Super Trunfo\n\n");
    printf("Bem-vindo ao Super Trunfo!!\n\n");
    printf("Informe os dados da primeira carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf(" %s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %s", nomeCidade1);
    printf("População: ");
    scanf(" %d", &populacao1);
    printf("Área (em km²): ");
    scanf(" %f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    printf("\nInforme os dados da segunda carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: B02): ");
    scanf(" %s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %s", nomeCidade2);
    printf("População: ");
    scanf(" %d", &populacao2);
    printf("Área (em km²): ");
    scanf(" %f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    
    // Desafio Lógica Super Trunfo
    char estado3[] = "SP";
    char cidade3[] = "São Paulo";
    char codigo3[] = "SP-001";
    int populacao3 = 11050000;
    float area3 = 1521.11;
    float pib3 = 700000;
    int pontos_turisticos3 = 500;

    char estado4[] = "MG";
    char cidade4[] = "Belo Horizonte";
    char codigo4[] = "MG-001";
    int populacao4 = 4000000;
    float area4 = 1182.3;
    float pib4 = 500000;
    int pontos_turisticos4 = 300;

    float densidade_populacional3 = populacao3 / area3;
    float pib_per_capita3 = pib3 / populacao3;
    
    float densidade_populacional4 = populacao4 / area4;
    float pib_per_capita4 = pib4 / populacao4;
    
    printf("\n\nDesafio Lógica Super Trunfo!!\n\n");
    printf("Comparação de cartas (Atributo: População):\n");
    printf("\nCarta 1 - %s (%s): %d\n", cidade3, estado3, populacao3);
    printf("Carta 2 - %s (%s): %d\n", cidade4, estado4, populacao4);

    if (populacao3 > populacao4) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade3);
    } else if (populacao4 > populacao3) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade4);
    } else {
        printf("\nResultado: Empate entre as cartas!\n");
    }

    return 0;
}
