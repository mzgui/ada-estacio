/*
 * DESAFIO - NÍVEL MESTRE: Habilidades Especiais e Áreas de Efeito
 * 
 * Este programa implementa um sistema avançado de Batalha Naval com habilidades especiais:
 * - Representa um tabuleiro 10x10 com navios posicionados
 * - Implementa três habilidades especiais: Cone, Cruz e Octaedro
 * - Cada habilidade tem uma área de efeito específica
 * - Sobreposição dinâmica das habilidades no tabuleiro
 * - Visualização completa com diferentes representações visuais
 * 
 * Autor: Guilher Martinez
 * Tema: 5 - Arrays e Matrizes em C
 * Data: Setembro 2025
 */

#include <stdio.h>

// Constantes para configuração do jogo
#define TAMANHO_TABULEIRO 10    // Tabuleiro 10x10
#define TAMANHO_HABILIDADE 7    // Matriz de habilidade 7x7
#define TAMANHO_NAVIO 3         // Cada navio ocupa 3 posições

// Valores para representação no tabuleiro
#define AGUA 0                  // Valor que representa água
#define NAVIO 3                 // Valor que representa parte do navio
#define HABILIDADE 5            // Valor que representa área afetada por habilidade

// Tipos de habilidades especiais
typedef enum {
    HABILIDADE_CONE = 0,
    HABILIDADE_CRUZ = 1,
    HABILIDADE_OCTAEDRO = 2
} TipoHabilidade;

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
 * FUNÇÃO: Posicionar Navios Simples
 * Posiciona alguns navios no tabuleiro para demonstração
 * Parâmetros: tabuleiro - matriz bidimensional 10x10
 */
void posicionar_navios(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    // Navio horizontal na linha 2, colunas 1-3
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[2][1 + i] = NAVIO;
    }
    
    // Navio vertical na coluna 7, linhas 5-7
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[5 + i][7] = NAVIO;
    }
    
    // Navio horizontal na linha 9, colunas 3-5
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[9][3 + i] = NAVIO;
    }
}

/*
 * FUNÇÃO: Criar Habilidade Cone
 * Constrói dinamicamente uma matriz representando área de efeito em cone
 * Parâmetros: matriz_habilidade - matriz 7x7 para armazenar o padrão
 */
void criar_habilidade_cone(int matriz_habilidade[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE]) {
    int linha, coluna;
    int centro = TAMANHO_HABILIDADE / 2; // Centro da matriz (posição 3 em matriz 7x7)
    
    // Inicializa toda a matriz com 0 (não afetado)
    for (linha = 0; linha < TAMANHO_HABILIDADE; linha++) {
        for (coluna = 0; coluna < TAMANHO_HABILIDADE; coluna++) {
            matriz_habilidade[linha][coluna] = 0;
        }
    }
    
    // Construção dinâmica do cone usando condicionais
    for (linha = 0; linha < TAMANHO_HABILIDADE; linha++) {
        for (coluna = 0; coluna < TAMANHO_HABILIDADE; coluna++) {
            // Lógica do cone: expande conforme desce
            // No topo (linha 0): apenas o centro
            // Nas linhas seguintes: expande lateralmente
            
            int largura_atual = linha + 1; // Largura aumenta com a linha
            int inicio_coluna = centro - largura_atual / 2;
            int fim_coluna = centro + largura_atual / 2;
            
            // Limita a largura máxima ao tamanho da matriz
            if (inicio_coluna < 0) inicio_coluna = 0;
            if (fim_coluna >= TAMANHO_HABILIDADE) fim_coluna = TAMANHO_HABILIDADE - 1;
            
            // Marca as posições do cone
            if (coluna >= inicio_coluna && coluna <= fim_coluna) {
                matriz_habilidade[linha][coluna] = 1;
            }
        }
    }
}

/*
 * FUNÇÃO: Criar Habilidade Cruz
 * Constrói dinamicamente uma matriz representando área de efeito em cruz
 * Parâmetros: matriz_habilidade - matriz 7x7 para armazenar o padrão
 */
void criar_habilidade_cruz(int matriz_habilidade[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE]) {
    int linha, coluna;
    int centro = TAMANHO_HABILIDADE / 2; // Centro da matriz
    
    // Inicializa toda a matriz com 0 (não afetado)
    for (linha = 0; linha < TAMANHO_HABILIDADE; linha++) {
        for (coluna = 0; coluna < TAMANHO_HABILIDADE; coluna++) {
            matriz_habilidade[linha][coluna] = 0;
        }
    }
    
    // Construção dinâmica da cruz usando condicionais
    for (linha = 0; linha < TAMANHO_HABILIDADE; linha++) {
        for (coluna = 0; coluna < TAMANHO_HABILIDADE; coluna++) {
            // Lógica da cruz: linha central OU coluna central
            if (linha == centro || coluna == centro) {
                matriz_habilidade[linha][coluna] = 1;
            }
        }
    }
}

/*
 * FUNÇÃO: Criar Habilidade Octaedro (formato losango)
 * Constrói dinamicamente uma matriz representando área de efeito em losango
 * Parâmetros: matriz_habilidade - matriz 7x7 para armazenar o padrão
 */
void criar_habilidade_octaedro(int matriz_habilidade[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE]) {
    int linha, coluna;
    int centro = TAMANHO_HABILIDADE / 2; // Centro da matriz
    
    // Inicializa toda a matriz com 0 (não afetado)
    for (linha = 0; linha < TAMANHO_HABILIDADE; linha++) {
        for (coluna = 0; coluna < TAMANHO_HABILIDADE; coluna++) {
            matriz_habilidade[linha][coluna] = 0;
        }
    }
    
    // Construção dinâmica do octaedro (losango) usando condicionais
    for (linha = 0; linha < TAMANHO_HABILIDADE; linha++) {
        for (coluna = 0; coluna < TAMANHO_HABILIDADE; coluna++) {
            // Lógica do losango: distância Manhattan do centro
            int distancia_linha = (linha > centro) ? linha - centro : centro - linha;
            int distancia_coluna = (coluna > centro) ? coluna - centro : centro - coluna;
            int distancia_manhattan = distancia_linha + distancia_coluna;
            
            // Se a distância for menor ou igual ao raio, faz parte do losango
            if (distancia_manhattan <= centro) {
                matriz_habilidade[linha][coluna] = 1;
            }
        }
    }
}

/*
 * FUNÇÃO: Aplicar Habilidade ao Tabuleiro
 * Sobrepõe a área de efeito de uma habilidade no tabuleiro
 * Parâmetros: tabuleiro, matriz_habilidade, linha_origem, coluna_origem
 */
void aplicar_habilidade_ao_tabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO],
                                     int matriz_habilidade[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE],
                                     int linha_origem, int coluna_origem) {
    int linha_hab, coluna_hab;
    int centro_habilidade = TAMANHO_HABILIDADE / 2;
    
    // Loop aninhado para percorrer a matriz de habilidade
    for (linha_hab = 0; linha_hab < TAMANHO_HABILIDADE; linha_hab++) {
        for (coluna_hab = 0; coluna_hab < TAMANHO_HABILIDADE; coluna_hab++) {
            // Calcula a posição correspondente no tabuleiro
            int linha_tabuleiro = linha_origem - centro_habilidade + linha_hab;
            int coluna_tabuleiro = coluna_origem - centro_habilidade + coluna_hab;
            
            // Verifica se a posição está dentro dos limites do tabuleiro
            if (linha_tabuleiro >= 0 && linha_tabuleiro < TAMANHO_TABULEIRO &&
                coluna_tabuleiro >= 0 && coluna_tabuleiro < TAMANHO_TABULEIRO) {
                
                // Se a habilidade afeta esta posição (valor 1)
                if (matriz_habilidade[linha_hab][coluna_hab] == 1) {
                    // Só aplica a habilidade se a posição for água
                    // (preserva navios existentes)
                    if (tabuleiro[linha_tabuleiro][coluna_tabuleiro] == AGUA) {
                        tabuleiro[linha_tabuleiro][coluna_tabuleiro] = HABILIDADE;
                    }
                }
            }
        }
    }
}

/*
 * FUNÇÃO: Exibir Matriz de Habilidade
 * Mostra a matriz de uma habilidade específica
 * Parâmetros: matriz_habilidade, nome_habilidade
 */
void exibir_matriz_habilidade(int matriz_habilidade[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE],
                              const char* nome_habilidade) {
    int linha, coluna;
    
    printf("\n=== MATRIZ DE HABILIDADE: %s ===\n", nome_habilidade);
    printf("Tamanho: %dx%d (0 = não afetado, 1 = afetado)\n\n", 
           TAMANHO_HABILIDADE, TAMANHO_HABILIDADE);
    
    // Cabeçalho com números das colunas
    printf("   ");
    for (coluna = 0; coluna < TAMANHO_HABILIDADE; coluna++) {
        printf("%d ", coluna);
    }
    printf("\n");
    
    // Exibe cada linha da matriz
    for (linha = 0; linha < TAMANHO_HABILIDADE; linha++) {
        printf("%d: ", linha);
        for (coluna = 0; coluna < TAMANHO_HABILIDADE; coluna++) {
            printf("%d ", matriz_habilidade[linha][coluna]);
        }
        printf("\n");
    }
}

/*
 * FUNÇÃO: Exibir Tabuleiro Completo
 * Mostra o estado atual do tabuleiro com diferentes símbolos para cada elemento
 * Parâmetros: tabuleiro - matriz bidimensional 10x10
 */
void exibir_tabuleiro_com_habilidades(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    int linha, coluna;
    
    printf("\n=== TABULEIRO COM HABILIDADES APLICADAS ===\n\n");
    
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
            switch (tabuleiro[linha][coluna]) {
                case AGUA:
                    printf(" ~ "); // Representa água
                    break;
                case NAVIO:
                    printf(" N "); // Representa navio
                    break;
                case HABILIDADE:
                    printf(" * "); // Representa área afetada por habilidade
                    break;
                default:
                    printf(" ? "); // Valor desconhecido
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
    
    printf("\nLegenda:\n");
    printf("~ = Água (%d)\n", AGUA);
    printf("N = Navio (%d)\n", NAVIO);
    printf("* = Área de Habilidade (%d)\n", HABILIDADE);
}

/*
 * FUNÇÃO: Obter Nome da Habilidade
 * Retorna o nome descritivo de uma habilidade
 * Parâmetros: tipo - tipo da habilidade
 * Retorna: string com o nome da habilidade
 */
const char* obter_nome_habilidade(TipoHabilidade tipo) {
    switch (tipo) {
        case HABILIDADE_CONE: return "CONE";
        case HABILIDADE_CRUZ: return "CRUZ";
        case HABILIDADE_OCTAEDRO: return "OCTAEDRO";
        default: return "DESCONHECIDA";
    }
}

/*
 * FUNÇÃO: Contar Posições Afetadas
 * Conta quantas posições do tabuleiro foram afetadas por habilidades
 * Parâmetros: tabuleiro - matriz bidimensional 10x10
 * Retorna: número de posições afetadas
 */
int contar_posicoes_afetadas(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    int contador = 0;
    int linha, coluna;
    
    for (linha = 0; linha < TAMANHO_TABULEIRO; linha++) {
        for (coluna = 0; coluna < TAMANHO_TABULEIRO; coluna++) {
            if (tabuleiro[linha][coluna] == HABILIDADE) {
                contador++;
            }
        }
    }
    
    return contador;
}

/*
 * FUNÇÃO PRINCIPAL
 * Coordena a execução do programa de habilidades especiais
 */
int main() {
    // Declaração do tabuleiro principal
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
    
    // Declaração das matrizes de habilidades
    int matriz_cone[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE];
    int matriz_cruz[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE];
    int matriz_octaedro[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE];
    
    // Configuração das habilidades (posições de origem)
    struct {
        TipoHabilidade tipo;
        int linha_origem;
        int coluna_origem;
        int (*matriz)[TAMANHO_HABILIDADE];
        void (*criar_funcao)(int[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE]);
    } configuracao_habilidades[] = {
        {HABILIDADE_CONE, 1, 5, matriz_cone, criar_habilidade_cone},
        {HABILIDADE_CRUZ, 5, 2, matriz_cruz, criar_habilidade_cruz},
        {HABILIDADE_OCTAEDRO, 7, 8, matriz_octaedro, criar_habilidade_octaedro}
    };
    
    int num_habilidades = sizeof(configuracao_habilidades) / sizeof(configuracao_habilidades[0]);
    
    printf("=== BATALHA NAVAL MESTRE - HABILIDADES ESPECIAIS ===\n");
    printf("Tabuleiro: %dx%d\n", TAMANHO_TABULEIRO, TAMANHO_TABULEIRO);
    printf("Tamanho das habilidades: %dx%d\n", TAMANHO_HABILIDADE, TAMANHO_HABILIDADE);
    printf("Habilidades implementadas: %d\n", num_habilidades);
    
    // Etapa 1: Inicializar o tabuleiro
    printf("\nEtapa 1: Inicializando tabuleiro...\n");
    inicializar_tabuleiro(tabuleiro);
    printf("Tabuleiro inicializado com sucesso!\n");
    
    // Etapa 2: Posicionar navios
    printf("\nEtapa 2: Posicionando navios...\n");
    posicionar_navios(tabuleiro);
    printf("Navios posicionados com sucesso!\n");
    
    // Etapa 3: Criar e exibir matrizes de habilidades
    printf("\nEtapa 3: Criando matrizes de habilidades...\n");
    
    for (int i = 0; i < num_habilidades; i++) {
        printf("\nCriando habilidade: %s\n", obter_nome_habilidade(configuracao_habilidades[i].tipo));
        
        // Chama a função específica para criar a habilidade
        configuracao_habilidades[i].criar_funcao(configuracao_habilidades[i].matriz);
        
        // Exibe a matriz da habilidade
        exibir_matriz_habilidade(configuracao_habilidades[i].matriz, 
                                obter_nome_habilidade(configuracao_habilidades[i].tipo));
        
        printf("Habilidade %s criada com sucesso!\n", 
               obter_nome_habilidade(configuracao_habilidades[i].tipo));
    }
    
    // Etapa 4: Aplicar habilidades ao tabuleiro
    printf("\nEtapa 4: Aplicando habilidades ao tabuleiro...\n");
    
    for (int i = 0; i < num_habilidades; i++) {
        printf("\nAplicando %s na posição [%d, %d]...\n",
               obter_nome_habilidade(configuracao_habilidades[i].tipo),
               configuracao_habilidades[i].linha_origem,
               configuracao_habilidades[i].coluna_origem);
        
        aplicar_habilidade_ao_tabuleiro(tabuleiro,
                                       configuracao_habilidades[i].matriz,
                                       configuracao_habilidades[i].linha_origem,
                                       configuracao_habilidades[i].coluna_origem);
        
        printf("Habilidade %s aplicada com sucesso!\n",
               obter_nome_habilidade(configuracao_habilidades[i].tipo));
    }
    
    // Etapa 5: Exibir resultado final
    printf("\nEtapa 5: Exibindo resultado final...\n");
    exibir_tabuleiro_com_habilidades(tabuleiro);
    
    // Etapa 6: Estatísticas finais
    printf("\n=== ESTATÍSTICAS FINAIS ===\n");
    int posicoes_afetadas = contar_posicoes_afetadas(tabuleiro);
    printf("Total de posições no tabuleiro: %d\n", TAMANHO_TABULEIRO * TAMANHO_TABULEIRO);
    printf("Posições afetadas por habilidades: %d\n", posicoes_afetadas);
    printf("Percentual de cobertura: %.1f%%\n", 
           (float)posicoes_afetadas / (TAMANHO_TABULEIRO * TAMANHO_TABULEIRO) * 100);
    
    printf("\n=== RESUMO DAS HABILIDADES APLICADAS ===\n");
    for (int i = 0; i < num_habilidades; i++) {
        printf("%s: Centro em [%d, %d]\n",
               obter_nome_habilidade(configuracao_habilidades[i].tipo),
               configuracao_habilidades[i].linha_origem,
               configuracao_habilidades[i].coluna_origem);
    }
    
    printf("\n=== HABILIDADES ESPECIAIS IMPLEMENTADAS COM SUCESSO! ===\n");
    
    return 0;
}
