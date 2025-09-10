/*
 * DESAFIO - NÍVEL NOVATO: Movimentando as Peças do Xadrez
 * 
 * Este programa simula o movimento de três peças de xadrez:
 * - Torre: movimento horizontal/vertical usando estrutura FOR
 * - Bispo: movimento diagonal usando estrutura WHILE  
 * - Rainha: movimento em qualquer direção usando estrutura DO-WHILE
 * 
 * Autor: Guilher Martinez
 * Tema: 4 - Estruturas de Repetição em C
 * Data: Setembro 2025
 */

#include <stdio.h>

int main() {
    // Definição das constantes de movimento conforme especificação
    const int CASAS_TORRE = 5;    // Torre: 5 casas para a direita
    const int CASAS_BISPO = 5;    // Bispo: 5 casas diagonal (cima-direita)
    const int CASAS_RAINHA = 8;   // Rainha: 8 casas para a esquerda
    
    // Variáveis de controle para as estruturas de repetição
    int i;              // Contador para estrutura FOR (Torre)
    int contador_while; // Contador para estrutura WHILE (Bispo)
    int contador_do;    // Contador para estrutura DO-WHILE (Rainha)
    
    printf("=== SIMULAÇÃO DE MOVIMENTO DAS PEÇAS DE XADREZ ===\n\n");
    
    /*
     * ========================================
     * TORRE - Movimento usando estrutura FOR
     * ========================================
     * A Torre move-se em linha reta (horizontal/vertical)
     * Movimento: 5 casas para a DIREITA
     */
    printf("TORRE:\n");
    
    // Estrutura FOR para simular movimento da Torre
    for (i = 1; i <= CASAS_TORRE; i++) {
        printf("Direita\n");
    }
    
    printf("\n");
    
    /*
     * ========================================
     * BISPO - Movimento usando estrutura WHILE
     * ========================================
     * O Bispo move-se na diagonal
     * Movimento: 5 casas na diagonal CIMA-DIREITA
     */
    printf("BISPO:\n");
    
    // Inicialização da variável de controle para WHILE
    contador_while = 1;
    
    // Estrutura WHILE para simular movimento do Bispo
    while (contador_while <= CASAS_BISPO) {
        printf("Cima ");
        printf("Direita\n");
        contador_while++;
    }
    
    printf("\n");
    
    /*
     * ========================================
     * RAINHA - Movimento usando estrutura DO-WHILE
     * ========================================
     * A Rainha move-se em qualquer direção
     * Movimento: 8 casas para a ESQUERDA
     */
    printf("RAINHA:\n");
    
    // Inicialização da variável de controle para DO-WHILE
    contador_do = 1;
    
    // Estrutura DO-WHILE para simular movimento da Rainha
    do {
        printf("Esquerda\n");
        contador_do++;
    } while (contador_do <= CASAS_RAINHA);
    
    return 0;
}
