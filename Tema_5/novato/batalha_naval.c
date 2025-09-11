/*
 * DESAFIO - NÍVEL NOVATO: Posicionando Navios no Tabuleiro
 * 
 * Este programa implementa a base de um jogo de Batalha Naval:
 * - Representa um tabuleiro 10x10 usando matriz bidimensional
 * - Posiciona dois navios: um horizontal e outro vertical
 * - Exibe o tabuleiro com os navios posicionados
 * - Utiliza vetores para representar os navios
 * 
 * Autor: Guilher Martinez
 * Tema: 5 - Arrays e Matrizes em C
 * Data: Setembro 2025
 */

#include <stdio.h>

// Constantes para configuração do jogo
#define TAMANHO_TABULEIRO 10    // Tabuleiro 10x10
#define TAMANHO_NAVIO 3         // Cada navio ocupa 3 posições
#define AGUA 0                  // Valor que representa água
#define NAVIO 3                 // Valor que representa parte do navio

/*
 * FUNÇÃO: Inicializar Tabuleiro
 * Preenche toda a matriz do tabuleiro com água (valor 0)
 * Parâmetros: tabuleiro - matriz bidimensional 10x10
 */
void inicializar_tabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    int linha, coluna;
    
    // Loop aninhado para percorrer toda a matriz
    for (linha = 0; linha < TAMANHO_TABULEIRO; linha++) {
        for (coluna = 0; coluna < TAMANHO_TABULEIRO; coluna++) {
            tabuleiro[linha][coluna] = AGUA; // Inicializa com água
        }
    }
}

/*
 * FUNÇÃO: Validar Posicionamento
 * Verifica se o navio pode ser posicionado sem sair dos limites ou sobrepor
 * Parâmetros: tabuleiro, linha_inicial, coluna_inicial, eh_horizontal
 * Retorna: 1 se válido, 0 se inválido
 */
int validar_posicionamento(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], 
                          int linha_inicial, int coluna_inicial, int eh_horizontal) {
    int i;
    
    // Verifica se o navio horizontal cabe no tabuleiro
    if (eh_horizontal) {
        // Verifica limite horizontal
        if (coluna_inicial + TAMANHO_NAVIO > TAMANHO_TABULEIRO) {
            return 0; // Não cabe horizontalmente
        }
        
        // Verifica sobreposição horizontal
        for (i = 0; i < TAMANHO_NAVIO; i++) {
            if (tabuleiro[linha_inicial][coluna_inicial + i] != AGUA) {
                return 0; // Há sobreposição
            }
        }
    }
    // Verifica se o navio vertical cabe no tabuleiro
    else {
        // Verifica limite vertical
        if (linha_inicial + TAMANHO_NAVIO > TAMANHO_TABULEIRO) {
            return 0; // Não cabe verticalmente
        }
        
        // Verifica sobreposição vertical
        for (i = 0; i < TAMANHO_NAVIO; i++) {
            if (tabuleiro[linha_inicial + i][coluna_inicial] != AGUA) {
                return 0; // Há sobreposição
            }
        }
    }
    
    return 1; // Posicionamento válido
}

/*
 * FUNÇÃO: Posicionar Navio
 * Coloca um navio no tabuleiro na posição e orientação especificadas
 * Parâmetros: tabuleiro, vetor_navio, linha_inicial, coluna_inicial, eh_horizontal
 */
void posicionar_navio(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO],
                     int vetor_navio[TAMANHO_NAVIO],
                     int linha_inicial, int coluna_inicial, int eh_horizontal) {
    int i;
    
    // Inicializa o vetor do navio com o valor padrão
    for (i = 0; i < TAMANHO_NAVIO; i++) {
        vetor_navio[i] = NAVIO;
    }
    
    // Posiciona o navio horizontalmente
    if (eh_horizontal) {
        for (i = 0; i < TAMANHO_NAVIO; i++) {
            tabuleiro[linha_inicial][coluna_inicial + i] = vetor_navio[i];
        }
    }
    // Posiciona o navio verticalmente
    else {
        for (i = 0; i < TAMANHO_NAVIO; i++) {
            tabuleiro[linha_inicial + i][coluna_inicial] = vetor_navio[i];
        }
    }
}

/*
 * FUNÇÃO: Exibir Tabuleiro
 * Mostra o estado atual do tabuleiro no console
 * Parâmetros: tabuleiro - matriz bidimensional 10x10
 */
void exibir_tabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    int linha, coluna;
    
    printf("\n=== TABULEIRO DE BATALHA NAVAL ===\n\n");
    
    // Cabeçalho com números das colunas
    printf("   ");
    for (coluna = 0; coluna < TAMANHO_TABULEIRO; coluna++) {
        printf("%2d ", coluna);
    }
    printf("\n");
    
    // Linha separadora
    printf("   ");
    for (coluna = 0; coluna < TAMANHO_TABULEIRO; coluna++) {
        printf("---");
    }
    printf("\n");
    
    // Exibe cada linha do tabuleiro
    for (linha = 0; linha < TAMANHO_TABULEIRO; linha++) {
        printf("%2d|", linha); // Número da linha
        
        for (coluna = 0; coluna < TAMANHO_TABULEIRO; coluna++) {
            printf("%2d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }
    
    printf("\nLegenda: 0 = Água, 3 = Navio\n");
}

/*
 * FUNÇÃO PRINCIPAL
 * Coordena a execução do programa de posicionamento de navios
 */
int main() {
    // Declaração da matriz do tabuleiro
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
    
    // Declaração dos vetores dos navios
    int navio_horizontal[TAMANHO_NAVIO];
    int navio_vertical[TAMANHO_NAVIO];
    
    // Coordenadas predefinidas para os navios
    int linha_navio_horizontal = 2;    // Navio horizontal na linha 2
    int coluna_navio_horizontal = 1;   // Começando na coluna 1
    int linha_navio_vertical = 5;      // Navio vertical começando na linha 5
    int coluna_navio_vertical = 7;     // Na coluna 7
    
    printf("=== BATALHA NAVAL - POSICIONAMENTO DE NAVIOS ===\n");
    printf("Tabuleiro: %dx%d\n", TAMANHO_TABULEIRO, TAMANHO_TABULEIRO);
    printf("Tamanho dos navios: %d posições\n", TAMANHO_NAVIO);
    printf("Navios a posicionar: 2 (1 horizontal + 1 vertical)\n");
    
    // Etapa 1: Inicializar o tabuleiro
    printf("\nEtapa 1: Inicializando tabuleiro...\n");
    inicializar_tabuleiro(tabuleiro);
    printf("Tabuleiro inicializado com sucesso!\n");
    
    // Etapa 2: Validar e posicionar navio horizontal
    printf("\nEtapa 2: Posicionando navio horizontal...\n");
    printf("Coordenadas: linha %d, coluna %d\n", linha_navio_horizontal, coluna_navio_horizontal);
    
    if (validar_posicionamento(tabuleiro, linha_navio_horizontal, coluna_navio_horizontal, 1)) {
        posicionar_navio(tabuleiro, navio_horizontal, linha_navio_horizontal, coluna_navio_horizontal, 1);
        printf("Navio horizontal posicionado com sucesso!\n");
    } else {
        printf("ERRO: Não foi possível posicionar o navio horizontal!\n");
        return 1;
    }
    
    // Etapa 3: Validar e posicionar navio vertical
    printf("\nEtapa 3: Posicionando navio vertical...\n");
    printf("Coordenadas: linha %d, coluna %d\n", linha_navio_vertical, coluna_navio_vertical);
    
    if (validar_posicionamento(tabuleiro, linha_navio_vertical, coluna_navio_vertical, 0)) {
        posicionar_navio(tabuleiro, navio_vertical, linha_navio_vertical, coluna_navio_vertical, 0);
        printf("Navio vertical posicionado com sucesso!\n");
    } else {
        printf("ERRO: Não foi possível posicionar o navio vertical!\n");
        return 1;
    }
    
    // Etapa 4: Exibir o resultado final
    printf("\nEtapa 4: Exibindo tabuleiro final...\n");
    exibir_tabuleiro(tabuleiro);
    
    // Informações adicionais sobre os navios
    printf("\n=== INFORMAÇÕES DOS NAVIOS ===\n");
    printf("Navio Horizontal:\n");
    printf("  Posição: Linha %d, Colunas %d a %d\n", 
           linha_navio_horizontal, coluna_navio_horizontal, 
           coluna_navio_horizontal + TAMANHO_NAVIO - 1);
    printf("  Vetor: [");
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        printf("%d", navio_horizontal[i]);
        if (i < TAMANHO_NAVIO - 1) printf(", ");
    }
    printf("]\n");
    
    printf("\nNavio Vertical:\n");
    printf("  Posição: Linhas %d a %d, Coluna %d\n",
           linha_navio_vertical, linha_navio_vertical + TAMANHO_NAVIO - 1,
           coluna_navio_vertical);
    printf("  Vetor: [");
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        printf("%d", navio_vertical[i]);
        if (i < TAMANHO_NAVIO - 1) printf(", ");
    }
    printf("]\n");
    
    printf("\n=== POSICIONAMENTO CONCLUÍDO COM SUCESSO! ===\n");
    
    return 0;
}