/*
 * DESAFIO - NÍVEL AVENTUREIRO: Tabuleiro Completo e Navios Diagonais
 * 
 * Este programa implementa uma versão avançada do jogo de Batalha Naval:
 * - Representa um tabuleiro 10x10 usando matriz bidimensional
 * - Posiciona quatro navios: 2 horizontais/verticais + 2 diagonais
 * - Valida posicionamento incluindo casos diagonais
 * - Exibe o tabuleiro completo com todos os navios
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
#define TOTAL_NAVIOS 4          // Total de navios no jogo

// Enumeração para tipos de orientação dos navios
typedef enum {
    HORIZONTAL = 0,
    VERTICAL = 1,
    DIAGONAL_PRINCIPAL = 2,     // Diagonal \ (linha e coluna aumentam juntas)
    DIAGONAL_SECUNDARIA = 3     // Diagonal / (linha aumenta, coluna diminui)
} TipoOrientacao;

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
 * FUNÇÃO: Validar Posicionamento Avançado
 * Verifica se o navio pode ser posicionado sem sair dos limites ou sobrepor
 * Inclui validação para navios diagonais
 * Parâmetros: tabuleiro, linha_inicial, coluna_inicial, orientacao
 * Retorna: 1 se válido, 0 se inválido
 */
int validar_posicionamento_avancado(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], 
                                   int linha_inicial, int coluna_inicial, TipoOrientacao orientacao) {
    int i;
    
    switch (orientacao) {
        case HORIZONTAL:
            // Verifica limite horizontal
            if (coluna_inicial + TAMANHO_NAVIO > TAMANHO_TABULEIRO) {
                return 0;
            }
            // Verifica sobreposição horizontal
            for (i = 0; i < TAMANHO_NAVIO; i++) {
                if (tabuleiro[linha_inicial][coluna_inicial + i] != AGUA) {
                    return 0;
                }
            }
            break;
            
        case VERTICAL:
            // Verifica limite vertical
            if (linha_inicial + TAMANHO_NAVIO > TAMANHO_TABULEIRO) {
                return 0;
            }
            // Verifica sobreposição vertical
            for (i = 0; i < TAMANHO_NAVIO; i++) {
                if (tabuleiro[linha_inicial + i][coluna_inicial] != AGUA) {
                    return 0;
                }
            }
            break;
            
        case DIAGONAL_PRINCIPAL:
            // Verifica limites diagonal principal (\)
            if (linha_inicial + TAMANHO_NAVIO > TAMANHO_TABULEIRO || 
                coluna_inicial + TAMANHO_NAVIO > TAMANHO_TABULEIRO) {
                return 0;
            }
            // Verifica sobreposição diagonal principal
            for (i = 0; i < TAMANHO_NAVIO; i++) {
                if (tabuleiro[linha_inicial + i][coluna_inicial + i] != AGUA) {
                    return 0;
                }
            }
            break;
            
        case DIAGONAL_SECUNDARIA:
            // Verifica limites diagonal secundária (/)
            if (linha_inicial + TAMANHO_NAVIO > TAMANHO_TABULEIRO || 
                coluna_inicial - TAMANHO_NAVIO + 1 < 0) {
                return 0;
            }
            // Verifica sobreposição diagonal secundária
            for (i = 0; i < TAMANHO_NAVIO; i++) {
                if (tabuleiro[linha_inicial + i][coluna_inicial - i] != AGUA) {
                    return 0;
                }
            }
            break;
    }
    
    return 1; // Posicionamento válido
}

/*
 * FUNÇÃO: Posicionar Navio Avançado
 * Coloca um navio no tabuleiro na posição e orientação especificadas
 * Inclui suporte para navios diagonais
 * Parâmetros: tabuleiro, vetor_navio, linha_inicial, coluna_inicial, orientacao
 */
void posicionar_navio_avancado(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO],
                             int vetor_navio[TAMANHO_NAVIO],
                             int linha_inicial, int coluna_inicial, TipoOrientacao orientacao) {
    int i;
    
    // Inicializa o vetor do navio
    for (i = 0; i < TAMANHO_NAVIO; i++) {
        vetor_navio[i] = NAVIO;
    }
    
    // Posiciona o navio conforme a orientação
    switch (orientacao) {
        case HORIZONTAL:
            for (i = 0; i < TAMANHO_NAVIO; i++) {
                tabuleiro[linha_inicial][coluna_inicial + i] = vetor_navio[i];
            }
            break;
            
        case VERTICAL:
            for (i = 0; i < TAMANHO_NAVIO; i++) {
                tabuleiro[linha_inicial + i][coluna_inicial] = vetor_navio[i];
            }
            break;
            
        case DIAGONAL_PRINCIPAL:
            for (i = 0; i < TAMANHO_NAVIO; i++) {
                tabuleiro[linha_inicial + i][coluna_inicial + i] = vetor_navio[i];
            }
            break;
            
        case DIAGONAL_SECUNDARIA:
            for (i = 0; i < TAMANHO_NAVIO; i++) {
                tabuleiro[linha_inicial + i][coluna_inicial - i] = vetor_navio[i];
            }
            break;
    }
}

/*
 * FUNÇÃO: Exibir Tabuleiro Completo
 * Mostra o estado atual do tabuleiro no console com formatação aprimorada
 * Parâmetros: tabuleiro - matriz bidimensional 10x10
 */
void exibir_tabuleiro_completo(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    int linha, coluna;
    
    printf("\n=== TABULEIRO COMPLETO DE BATALHA NAVAL ===\n\n");
    
    // Cabeçalho com números das colunas
    printf("    ");
    for (coluna = 0; coluna < TAMANHO_TABULEIRO; coluna++) {
        printf("%2d ", coluna);
    }
    printf("\n");
    
    // Linha separadora superior
    printf("   +");
    for (coluna = 0; coluna < TAMANHO_TABULEIRO; coluna++) {
        printf("---");
    }
    printf("+\n");
    
    // Exibe cada linha do tabuleiro
    for (linha = 0; linha < TAMANHO_TABULEIRO; linha++) {
        printf("%2d |", linha); // Número da linha
        
        for (coluna = 0; coluna < TAMANHO_TABULEIRO; coluna++) {
            if (tabuleiro[linha][coluna] == AGUA) {
                printf(" ~ "); // Representa água com ~
            } else {
                printf(" %d ", tabuleiro[linha][coluna]); // Mostra valor do navio
            }
        }
        printf("|\n");
    }
    
    // Linha separadora inferior
    printf("   +");
    for (coluna = 0; coluna < TAMANHO_TABULEIRO; coluna++) {
        printf("---");
    }
    printf("+\n");
    
    printf("\nLegenda: ~ = Água, 3 = Navio\n");
}

/*
 * FUNÇÃO: Obter Nome da Orientação
 * Retorna uma string descritiva da orientação do navio
 * Parâmetros: orientacao - tipo de orientação
 * Retorna: string com o nome da orientação
 */
const char* obter_nome_orientacao(TipoOrientacao orientacao) {
    switch (orientacao) {
        case HORIZONTAL: return "Horizontal";
        case VERTICAL: return "Vertical";
        case DIAGONAL_PRINCIPAL: return "Diagonal Principal (\\)";
        case DIAGONAL_SECUNDARIA: return "Diagonal Secundária (/)";
        default: return "Desconhecida";
    }
}

/*
 * FUNÇÃO PRINCIPAL
 * Coordena a execução do programa de posicionamento avançado de navios
 */
int main() {
    // Declaração da matriz do tabuleiro
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
    
    // Declaração dos vetores dos navios
    int navio1[TAMANHO_NAVIO]; // Navio horizontal
    int navio2[TAMANHO_NAVIO]; // Navio vertical
    int navio3[TAMANHO_NAVIO]; // Navio diagonal principal
    int navio4[TAMANHO_NAVIO]; // Navio diagonal secundária
    
    // Configuração dos navios (posição e orientação)
    struct {
        int linha;
        int coluna;
        TipoOrientacao orientacao;
        int* vetor;
        const char* nome;
    } configuracao_navios[TOTAL_NAVIOS] = {
        {1, 2, HORIZONTAL, navio1, "Navio 1"},           // Horizontal na linha 1, coluna 2
        {4, 7, VERTICAL, navio2, "Navio 2"},             // Vertical na linha 4, coluna 7
        {0, 0, DIAGONAL_PRINCIPAL, navio3, "Navio 3"},   // Diagonal principal no canto superior esquerdo
        {2, 8, DIAGONAL_SECUNDARIA, navio4, "Navio 4"}   // Diagonal secundária
    };
    
    printf("=== BATALHA NAVAL AVENTUREIRO - NAVIOS DIAGONAIS ===\n");
    printf("Tabuleiro: %dx%d\n", TAMANHO_TABULEIRO, TAMANHO_TABULEIRO);
    printf("Tamanho dos navios: %d posições\n", TAMANHO_NAVIO);
    printf("Total de navios: %d (2 retos + 2 diagonais)\n", TOTAL_NAVIOS);
    
    // Etapa 1: Inicializar o tabuleiro
    printf("\nEtapa 1: Inicializando tabuleiro...\n");
    inicializar_tabuleiro(tabuleiro);
    printf("Tabuleiro inicializado com sucesso!\n");
    
    // Etapa 2: Posicionar todos os navios
    printf("\nEtapa 2: Posicionando navios...\n");
    
    for (int i = 0; i < TOTAL_NAVIOS; i++) {
        printf("\n%s (%s):\n", configuracao_navios[i].nome, 
               obter_nome_orientacao(configuracao_navios[i].orientacao));
        printf("  Coordenadas: linha %d, coluna %d\n", 
               configuracao_navios[i].linha, configuracao_navios[i].coluna);
        
        // Validar posicionamento
        if (validar_posicionamento_avancado(tabuleiro, 
                                           configuracao_navios[i].linha,
                                           configuracao_navios[i].coluna,
                                           configuracao_navios[i].orientacao)) {
            
            // Posicionar o navio
            posicionar_navio_avancado(tabuleiro,
                                     configuracao_navios[i].vetor,
                                     configuracao_navios[i].linha,
                                     configuracao_navios[i].coluna,
                                     configuracao_navios[i].orientacao);
            
            printf("  ✓ Posicionado com sucesso!\n");
        } else {
            printf("  ✗ ERRO: Não foi possível posicionar o navio!\n");
            return 1;
        }
    }
    
    // Etapa 3: Exibir o resultado final
    printf("\nEtapa 3: Exibindo tabuleiro final...\n");
    exibir_tabuleiro_completo(tabuleiro);
    
    // Etapa 4: Estatísticas e informações dos navios
    printf("\n=== RELATÓRIO DETALHADO DOS NAVIOS ===\n");
    
    int total_posicoes_ocupadas = 0;
    for (int i = 0; i < TOTAL_NAVIOS; i++) {
        printf("\n%s:\n", configuracao_navios[i].nome);
        printf("  Orientação: %s\n", obter_nome_orientacao(configuracao_navios[i].orientacao));
        printf("  Posição inicial: [%d, %d]\n", 
               configuracao_navios[i].linha, configuracao_navios[i].coluna);
        
        // Mostrar todas as posições ocupadas pelo navio
        printf("  Posições ocupadas: ");
        for (int j = 0; j < TAMANHO_NAVIO; j++) {
            int linha_pos, coluna_pos;
            
            switch (configuracao_navios[i].orientacao) {
                case HORIZONTAL:
                    linha_pos = configuracao_navios[i].linha;
                    coluna_pos = configuracao_navios[i].coluna + j;
                    break;
                case VERTICAL:
                    linha_pos = configuracao_navios[i].linha + j;
                    coluna_pos = configuracao_navios[i].coluna;
                    break;
                case DIAGONAL_PRINCIPAL:
                    linha_pos = configuracao_navios[i].linha + j;
                    coluna_pos = configuracao_navios[i].coluna + j;
                    break;
                case DIAGONAL_SECUNDARIA:
                    linha_pos = configuracao_navios[i].linha + j;
                    coluna_pos = configuracao_navios[i].coluna - j;
                    break;
            }
            
            printf("[%d,%d]", linha_pos, coluna_pos);
            if (j < TAMANHO_NAVIO - 1) printf(", ");
        }
        printf("\n");
        
        total_posicoes_ocupadas += TAMANHO_NAVIO;
    }
    
    // Estatísticas finais
    printf("\n=== ESTATÍSTICAS FINAIS ===\n");
    printf("Total de posições no tabuleiro: %d\n", TAMANHO_TABULEIRO * TAMANHO_TABULEIRO);
    printf("Posições ocupadas por navios: %d\n", total_posicoes_ocupadas);
    printf("Posições de água: %d\n", TAMANHO_TABULEIRO * TAMANHO_TABULEIRO - total_posicoes_ocupadas);
    printf("Percentual ocupado: %.1f%%\n", 
           (float)total_posicoes_ocupadas / (TAMANHO_TABULEIRO * TAMANHO_TABULEIRO) * 100);

    
    return 0;
}