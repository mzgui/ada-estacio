#include <stdio.h>

int main() {
    // Declaração de variáveis para a Carta 1
    char estado1;
    char codigo1[4];           // Ex: A01 (3 caracteres + '\0')
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração de variáveis para a Carta 2
    char estado2;
    char codigo2[4];           // Ex: B02 (3 caracteres + '\0')
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Declaração de variáveis para a Carta 3
    char estado3;
    char codigo3[4];
    char nomeCidade3[50];
    int populacao3;
    float area3;
    float pib3;
    int pontosTuristicos3;

    // Declaração de variáveis para a Carta 4
    char estado4;
    char codigo4[4];
    char nomeCidade4[50];
    int populacao4;
    float area4;
    float pib4;
    int pontosTuristicos4;

    // Declaração de variáveis para a Carta 5
    char estado5;
    char codigo5[4];
    char nomeCidade5[50];
    int populacao5;
    float area5;
    float pib5;
    int pontosTuristicos5;

    // Declaração de variáveis para a Carta 6
    char estado6;
    char codigo6[4];
    char nomeCidade6[50];
    int populacao6;
    float area6;
    float pib6;
    int pontosTuristicos6;

    // Declaração de variáveis para a Carta 7
    char estado7;
    char codigo7[4];
    char nomeCidade7[50];
    int populacao7;
    float area7;
    float pib7;
    int pontosTuristicos7;

    // Entrada de dados da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Entrada de dados da Carta 3
    printf("\n=== Cadastro da Carta 3 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado3);

    printf("Codigo da Carta (ex: C03): ");
    scanf("%s", codigo3);

    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade3);

    printf("Populacao: ");
    scanf("%d", &populacao3);

    printf("Area (km²): ");
    scanf("%f", &area3);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib3);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos3);

    // Entrada de dados da Carta 4
    printf("\n=== Cadastro da Carta 4 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado4);

    printf("Codigo da Carta (ex: D04): ");
    scanf("%s", codigo4);

    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade4);

    printf("Populacao: ");
    scanf("%d", &populacao4);

    printf("Area (km²): ");
    scanf("%f", &area4);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib4);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos4);

    // Entrada de dados da Carta 5
    printf("\n=== Cadastro da Carta 5 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado5);

    printf("Codigo da Carta (ex: E01): ");
    scanf("%s", codigo5);

    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade5);

    printf("Populacao: ");
    scanf("%d", &populacao5);

    printf("Area (km²): ");
    scanf("%f", &area5);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib5);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos5);

    // Entrada de dados da Carta 6
    printf("\n=== Cadastro da Carta 6 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado6);

    printf("Codigo da Carta (ex: F02): ");
    scanf("%s", codigo6);

    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade6);

    printf("Populacao: ");
    scanf("%d", &populacao6);

    printf("Area (km²): ");
    scanf("%f", &area6);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib6);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos6);

    // Entrada de dados da Carta 7
    printf("\n=== Cadastro da Carta 7 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado7);

    printf("Codigo da Carta (ex: G03): ");
    scanf("%s", codigo7);

    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade7);

    printf("Populacao: ");
    scanf("%d", &populacao7);

    printf("Area (km²): ");
    scanf("%f", &area7);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib7);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos7);

    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    // Exibição dos dados da Carta 3
    printf("\nCarta 3:\n");
    printf("Estado: %c\n", estado3);
    printf("Codigo: %s\n", codigo3);
    printf("Nome da Cidade: %s\n", nomeCidade3);
    printf("Populacao: %d\n", populacao3);
    printf("Area: %.2f km²\n", area3);
    printf("PIB: %.2f bilhoes de reais\n", pib3);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos3);

    // Exibição dos dados da Carta 4
    printf("\nCarta 4:\n");
    printf("Estado: %c\n", estado4);
    printf("Codigo: %s\n", codigo4);
    printf("Nome da Cidade: %s\n", nomeCidade4);
    printf("Populacao: %d\n", populacao4);
    printf("Area: %.2f km²\n", area4);
    printf("PIB: %.2f bilhoes de reais\n", pib4);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos4);

    // Exibição dos dados da Carta 5
    printf("\nCarta 5:\n");
    printf("Estado: %c\n", estado5);
    printf("Codigo: %s\n", codigo5);
    printf("Nome da Cidade: %s\n", nomeCidade5);
    printf("Populacao: %d\n", populacao5);
    printf("Area: %.2f km²\n", area5);
    printf("PIB: %.2f bilhoes de reais\n", pib5);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos5);

    // Exibição dos dados da Carta 6
    printf("\nCarta 6:\n");
    printf("Estado: %c\n", estado6);
    printf("Codigo: %s\n", codigo6);
    printf("Nome da Cidade: %s\n", nomeCidade6);
    printf("Populacao: %d\n", populacao6);
    printf("Area: %.2f km²\n", area6);
    printf("PIB: %.2f bilhoes de reais\n", pib6);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos6);

    // Exibição dos dados da Carta 7
    printf("\nCarta 7:\n");
    printf("Estado: %c\n", estado7);
    printf("Codigo: %s\n", codigo7);
    printf("Nome da Cidade: %s\n", nomeCidade7);
    printf("Populacao: %d\n", populacao7);
    printf("Area: %.2f km²\n", area7);
    printf("PIB: %.2f bilhoes de reais\n", pib7);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos7);

    return 0;
}