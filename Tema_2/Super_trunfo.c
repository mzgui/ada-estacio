#include <stdio.h>
#include <string.h>

int main() {
    // Declaração de variáveis para a Carta 1
    char estado1[3];           // Ex: PR, SP (2 caracteres + '\0')
    char codigo1[4];           // Ex: A01 (3 caracteres + '\0')
    char nomeCidade1[50];
    unsigned long int populacao1;  // Mudança para unsigned long int
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    // Declaração de variáveis para a Carta 2
    char estado2[3];           // Ex: PR, SP (2 caracteres + '\0')
    char codigo2[4];           // Ex: B02 (3 caracteres + '\0')
    char nomeCidade2[50];
    unsigned long int populacao2;  // Mudança para unsigned long int
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    // Variáveis para comparação
    int vencePopulacao;
    int venceArea;
    int vencePib;
    int vencePontosTuristicos;
    int venceDensidade;
    int vencePibPerCapita;
    int venceSuperPoder;

    // Entrada de dados da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (ex: PR, SP, RJ): ");
    scanf("%s", estado1);
    while (getchar() != '\n');  // Limpa o buffer após o estado

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);
    while (getchar() != '\n');  // Limpa o buffer após o scanf do código

    printf("Nome da Cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    // Remove o \n do final se existir
    if (nomeCidade1[strlen(nomeCidade1) - 1] == '\n') {
        nomeCidade1[strlen(nomeCidade1) - 1] = '\0';
    }

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da Carta 1
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 / (float)populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + (1.0f / densidadePopulacional1) + pibPerCapita1;

    // Entrada de dados da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (ex: PR, SP, RJ): ");
    scanf("%s", estado2);
    while (getchar() != '\n');  // Limpa o buffer após o estado

    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);
    while (getchar() != '\n');  // Limpa o buffer após o scanf do código

    printf("Nome da Cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    // Remove o \n do final se existir
    if (nomeCidade2[strlen(nomeCidade2) - 1] == '\n') {
        nomeCidade2[strlen(nomeCidade2) - 1] = '\0';
    }

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da Carta 2
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / (float)populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + (1.0f / densidadePopulacional2) + pibPerCapita2;

    // Comparações (1 se Carta 1 vence, 0 se Carta 2 vence)
    vencePopulacao = populacao1 > populacao2;
    venceArea = area1 > area2;
    vencePib = pib1 > pib2;
    vencePontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
    venceDensidade = densidadePopulacional1 < densidadePopulacional2;  // Menor densidade vence
    vencePibPerCapita = pibPerCapita1 > pibPerCapita2;
    venceSuperPoder = superPoder1 > superPoder2;

    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.6f bilhoes per capita\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.6f bilhoes per capita\n", pibPerCapita2);
    printf("Super Trunfo: %.2f\n", superPoder2);

    // Exibição dos resultados da comparação
    printf("\nComparacao de Cartas:\n");
    printf("Populacao: Carta %d venceu (%d)\n", vencePopulacao ? 1 : 2, vencePopulacao);
    printf("Area: Carta %d venceu (%d)\n", venceArea ? 1 : 2, venceArea);
    printf("PIB: Carta %d venceu (%d)\n", vencePib ? 1 : 2, vencePib);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", vencePontosTuristicos ? 1 : 2, vencePontosTuristicos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", venceDensidade ? 1 : 2, venceDensidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", vencePibPerCapita ? 1 : 2, vencePibPerCapita);
    printf("Super Trunfo: Carta %d venceu (%d)\n", venceSuperPoder ? 1 : 2, venceSuperPoder);

    return 0;
}
