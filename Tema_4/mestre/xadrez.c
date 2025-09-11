/*
 * DESAFIO - NÍVEL MESTRE: Movimentos Complexos do Xadrez
 * 
 * Este programa implementa movimentos avançados das peças de xadrez usando:
 * - Torre: função recursiva
 * - Bispo: função recursiva + loops aninhados
 * - Rainha: função recursiva  
 * - Cavalo: loops complexos com múltiplas variáveis e controle de fluxo
 * 
 * Autor: Guilher Martinez
 * Tema: 4 - Estruturas de Repetição em C
 * Data: Setembro 2025
 */

#include <stdio.h>

// Constantes globais para movimentação das peças
const int CASAS_TORRE = 5;           // Torre: 5 casas para a direita
const int CASAS_BISPO = 5;           // Bispo: 5 casas diagonal (cima-direita)
const int CASAS_RAINHA = 8;          // Rainha: 8 casas para a esquerda
const int CASAS_CAVALO_CIMA = 2;     // Cavalo: 2 casas para cima
const int CASAS_CAVALO_DIREITA = 1;  // Cavalo: 1 casa para a direita

/*
 * FUNÇÃO RECURSIVA: Movimento da Torre
 * Implementa movimento horizontal/vertical usando recursividade
 * Parâmetros: casas_restantes - número de casas ainda por mover
 */
void mover_torre_recursivo(int casas_restantes) {
    // Caso base: se não há mais casas para mover, encerra a recursão
    if (casas_restantes <= 0) {
        return;
    }
    
    // Imprime o movimento atual
    printf("Direita\n");
    
    // Chamada recursiva com uma casa a menos
    mover_torre_recursivo(casas_restantes - 1);
}

/*
 * FUNÇÃO RECURSIVA: Movimento do Bispo
 * Implementa movimento diagonal usando recursividade
 * Parâmetros: casas_restantes - número de casas ainda por mover
 */
void mover_bispo_recursivo(int casas_restantes) {
    // Caso base: se não há mais casas para mover, encerra a recursão
    if (casas_restantes <= 0) {
        return;
    }
    
    // Imprime o movimento diagonal atual
    printf("Cima Direita\n");
    
    // Chamada recursiva com uma casa a menos
    mover_bispo_recursivo(casas_restantes - 1);
}

/*
 * FUNÇÃO RECURSIVA: Movimento da Rainha
 * Implementa movimento em qualquer direção usando recursividade
 * Parâmetros: casas_restantes - número de casas ainda por mover
 */
void mover_rainha_recursivo(int casas_restantes) {
    // Caso base: se não há mais casas para mover, encerra a recursão
    if (casas_restantes <= 0) {
        return;
    }
    
    // Imprime o movimento atual
    printf("Esquerda\n");
    
    // Chamada recursiva com uma casa a menos
    mover_rainha_recursivo(casas_restantes - 1);
}

/*
 * FUNÇÃO: Movimento do Bispo com Loops Aninhados
 * Implementa movimento diagonal usando loops aninhados
 * Loop externo: controla movimento vertical
 * Loop interno: controla movimento horizontal
 */
void mover_bispo_loops_aninhados() {
    int movimento_vertical, movimento_horizontal;
    
    // Loop externo: controla o movimento vertical (cima)
    for (movimento_vertical = 1; movimento_vertical <= CASAS_BISPO; movimento_vertical++) {
        
        // Loop interno: controla o movimento horizontal (direita)
        for (movimento_horizontal = 1; movimento_horizontal <= 1; movimento_horizontal++) {
            printf("Cima Direita\n");
        }
    }
}

/*
 * FUNÇÃO: Movimento Complexo do Cavalo
 * Implementa movimento em "L" usando loops aninhados com múltiplas variáveis
 * e controle de fluxo avançado (continue e break)
 */
void mover_cavalo_complexo() {
    int i, j, k;
    int movimentos_realizados = 0;
    int etapa = 1; // Controla qual etapa do movimento em "L" está sendo executada
    
    // Loop principal com múltiplas variáveis de controle
    for (i = 1; i <= 10; i++) { // Loop com limite maior para demonstrar controle de fluxo
        
        // Primeira etapa: movimento para cima (2 casas)
        if (etapa == 1) {
            for (j = 1; j <= CASAS_CAVALO_CIMA; j++) {
                printf("Cima\n");
                movimentos_realizados++;
                
                // Controle de fluxo: se completou movimento vertical, passa para próxima etapa
                if (j == CASAS_CAVALO_CIMA) {
                    etapa = 2;
                    break; // Sai do loop interno
                }
            }
            continue; // Continua para próxima iteração do loop principal
        }
        
        // Segunda etapa: movimento para a direita (1 casa)
        if (etapa == 2) {
            for (k = 1; k <= CASAS_CAVALO_DIREITA; k++) {
                printf("Direita\n");
                movimentos_realizados++;
                
                // Controle de fluxo: se completou movimento horizontal, finaliza
                if (k == CASAS_CAVALO_DIREITA) {
                    etapa = 3; // Marca como finalizado
                    break; // Sai do loop interno
                }
            }
        }
        
        // Condição de parada: se completou o movimento em "L", sai do loop principal
        if (etapa == 3) {
            break;
        }
    }
}

/*
 * FUNÇÃO PRINCIPAL
 * Coordena a execução de todos os movimentos das peças
 */
int main() {
    printf("=== SIMULACAO AVANCADA DE MOVIMENTO DAS PECAS DE XADREZ ===\n\n");
    
    /*
     * ========================================
     * TORRE - Movimento com Recursividade
     * ========================================
     */
    printf("TORRE (Recursividade):\n");
    mover_torre_recursivo(CASAS_TORRE);
    printf("\n");
    
    /*
     * ========================================
     * BISPO - Movimento com Recursividade
     * ========================================
     */
    printf("BISPO (Recursividade):\n");
    mover_bispo_recursivo(CASAS_BISPO);
    printf("\n");
    
    /*
     * ========================================
     * BISPO - Movimento com Loops Aninhados
     * ========================================
     */
    printf("BISPO (Loops Aninhados):\n");
    mover_bispo_loops_aninhados();
    printf("\n");
    
    /*
     * ========================================
     * RAINHA - Movimento com Recursividade
     * ========================================
     */
    printf("RAINHA (Recursividade):\n");
    mover_rainha_recursivo(CASAS_RAINHA);
    printf("\n");
    
    /*
     * ========================================
     * CAVALO - Movimento Complexo
     * ========================================
     */
    printf("CAVALO (Loops Complexos):\n");
    mover_cavalo_complexo();
    printf("\n");
    return 0;
}