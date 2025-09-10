#include <stdio.h>

/*
 * SUPER TRUNFO - NÍVEL NOVATO
 * Desafio: Comparando Cartas do Super Trunfo
 * 
 * Este programa implementa a lógica básica de comparação entre duas cartas
 * do jogo Super Trunfo, utilizando apenas um atributo para determinar o vencedor.
 * 
 * Funcionalidades:
 * - Cadastro de duas cartas de cidades
 * - Cálculo automático de densidade populacional e PIB per capita
 * - Comparação baseada em um atributo pré-definido
 * - Exibição clara do resultado da comparação
 */

int main() {
    // Declaração de variáveis para a Carta 1
    char estado1[3];           // Estado da cidade (ex: "SP", "RJ")
    char codigo1[4];           // Código da carta (ex: "A01")
    char nomeCidade1[50];      // Nome da cidade
    int populacao1;            // População da cidade
    float area1;               // Área em km²
    float pib1;                // PIB em bilhões de reais
    int pontosTuristicos1;     // Número de pontos turísticos
    float densidadePopulacional1;  // Densidade populacional (calculada)
    float pibPerCapita1;       // PIB per capita (calculado)

    // Declaração de variáveis para a Carta 2
    char estado2[3];           // Estado da cidade (ex: "SP", "RJ")
    char codigo2[4];           // Código da carta (ex: "B02")
    char nomeCidade2[50];      // Nome da cidade
    int populacao2;            // População da cidade
    float area2;               // Área em km²
    float pib2;                // PIB em bilhões de reais
    int pontosTuristicos2;     // Número de pontos turísticos
    float densidadePopulacional2;  // Densidade populacional (calculada)
    float pibPerCapita2;       // PIB per capita (calculado)

    printf("=== SUPER TRUNFO - NÍVEL NOVATO ===\n");
    printf("Comparação de Cartas de Cidades Brasileiras\n\n");

    // ==================== CADASTRO DA CARTA 1 ====================
    printf("=== Cadastro da Carta 1 ===\n");
    
    printf("Estado (ex: SP, RJ, MG): ");
    scanf("%s", estado1);
    
    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Nome da cidade: ");
    scanf("%s", nomeCidade1);
    
    printf("População: ");
    scanf("%d", &populacao1);
    
    printf("Área (km²): ");
    scanf("%f", &area1);
    
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos automáticos para a Carta 1
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 / (float)populacao1;

    // ==================== CADASTRO DA CARTA 2 ====================
    printf("\n=== Cadastro da Carta 2 ===\n");
    
    printf("Estado (ex: SP, RJ, MG): ");
    scanf("%s", estado2);
    
    printf("Código da carta (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Nome da cidade: ");
    scanf("%s", nomeCidade2);
    
    printf("População: ");
    scanf("%d", &populacao2);
    
    printf("Área (km²): ");
    scanf("%f", &area2);
    
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos automáticos para a Carta 2
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / (float)populacao2;

    // ==================== EXIBIÇÃO DOS DADOS ====================
    printf("\n");
    printf("==================================================\n");
    printf("=== DADOS CADASTRADOS ===\n");
    printf("==================================================\n");

    // Exibição da Carta 1
    printf("CARTA 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per capita: %.6f bilhões per capita\n", pibPerCapita1);

    printf("\n");

    // Exibição da Carta 2
    printf("CARTA 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per capita: %.6f bilhões per capita\n", pibPerCapita2);

    // ==================== COMPARAÇÃO DE CARTAS ====================
    printf("\n");
    printf("============================================================\n");
    printf("=== COMPARAÇÃO DE CARTAS ===\n");
    printf("============================================================\n");

    /*
     * ATRIBUTO ESCOLHIDO PARA COMPARAÇÃO: POPULAÇÃO
     * 
     * Neste nível novato, escolhemos comparar apenas a POPULAÇÃO das cidades.
     * Critério: A carta com MAIOR população vence.
     * 
     * Você pode alterar este código para comparar outros atributos:
     * - Para Área, PIB, Pontos Turísticos, PIB per capita: maior valor vence
     * - Para Densidade Populacional: menor valor vence (melhor qualidade de vida)
     */

    printf("Atributo de comparação: POPULAÇÃO\n");
    printf("Critério: Maior população vence\n\n");

    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%s): %d habitantes\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d habitantes\n", nomeCidade2, estado2, populacao2);

    // Lógica de comparação usando estruturas if-else
    if (populacao1 > populacao2) {
        printf("\nRESULTADO: Carta 1 (%s) venceu!\n", nomeCidade1);
        printf("   %s tem %d habitantes a mais que %s\n", 
               nomeCidade1, populacao1 - populacao2, nomeCidade2);
    } 
    else if (populacao2 > populacao1) {
        printf("\nRESULTADO: Carta 2 (%s) venceu!\n", nomeCidade2);
        printf("   %s tem %d habitantes a mais que %s\n", 
               nomeCidade2, populacao2 - populacao1, nomeCidade1);
    } 
    else {
        printf("\nRESULTADO: Empate!\n");
        printf("   Ambas as cidades têm exatamente %d habitantes\n", populacao1);
    }

    // ==================== INFORMAÇÕES ADICIONAIS ====================
    printf("\n");
    printf("============================================================\n");
    printf("=== INFORMAÇÕES ADICIONAIS ===\n");
    printf("============================================================\n");

    printf("Outros dados para análise:\n\n");
    
    printf("DENSIDADE POPULACIONAL:\n");
    printf("  %s: %.2f hab/km²\n", nomeCidade1, densidadePopulacional1);
    printf("  %s: %.2f hab/km²\n", nomeCidade2, densidadePopulacional2);
    if (densidadePopulacional1 < densidadePopulacional2) {
        printf("  → %s tem menor densidade (melhor qualidade de vida)\n", nomeCidade1);
    } else if (densidadePopulacional2 < densidadePopulacional1) {
        printf("  → %s tem menor densidade (melhor qualidade de vida)\n", nomeCidade2);
    } else {
        printf("  → Ambas têm a mesma densidade populacional\n");
    }

    printf("\nPIB PER CAPITA:\n");
    printf("  %s: %.6f bilhões per capita\n", nomeCidade1, pibPerCapita1);
    printf("  %s: %.6f bilhões per capita\n", nomeCidade2, pibPerCapita2);
    if (pibPerCapita1 > pibPerCapita2) {
        printf("  → %s tem maior PIB per capita (maior renda individual)\n", nomeCidade1);
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("  → %s tem maior PIB per capita (maior renda individual)\n", nomeCidade2);
    } else {
        printf("  → Ambas têm o mesmo PIB per capita\n");
    }
    return 0;
}
