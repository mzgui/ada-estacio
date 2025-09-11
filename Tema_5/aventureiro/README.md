
## Descrição do Projeto

Este programa representa uma evolução significativa do jogo de Batalha Naval, introduzindo o conceito de navios posicionados em diagonal. O projeto demonstra técnicas avançadas de manipulação de matrizes e implementação de algoritmos de validação complexos para múltiplas orientações de navios.

## Objetivos Educacionais

- Implementação de algoritmos para posicionamento diagonal
- Utilização de enumerações para organização de código
- Desenvolvimento de sistemas de validação robustos
- Aplicação de estruturas de dados organizadas
- Gerenciamento de múltiplas orientações de objetos

## Especificações Técnicas

### Configurações do Jogo
- **Tamanho do Tabuleiro:** 10x10
- **Número de Navios:** 4
- **Tamanho dos Navios:** 3 posições cada
- **Orientações:** Horizontal, Vertical, Diagonal Principal, Diagonal Secundária

### Representação de Dados
- **Água:** Valor 0 (representado por ~)
- **Navio:** Valor 3 (representado por número)
- **Estrutura Principal:** Matriz bidimensional `int[10][10]`

### Tipos de Orientação
```c
typedef enum {
    HORIZONTAL = 0,
    VERTICAL = 1,
    DIAGONAL_PRINCIPAL = 2,     // Diagonal \ (linha e coluna aumentam juntas)
    DIAGONAL_SECUNDARIA = 3     // Diagonal / (linha aumenta, coluna diminui)
} TipoOrientacao;
```

## Funcionalidades Implementadas

### 1. Validação Avançada de Posicionamento
```c
int validar_posicionamento_avancado(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], 
                                   int linha_inicial, int coluna_inicial, TipoOrientacao orientacao)
```
- Suporte para todas as orientações (horizontal, vertical, diagonal principal, diagonal secundária)
- Verificação de limites específica para cada tipo de orientação
- Validação de sobreposição considerando trajetórias diagonais

### 2. Posicionamento Avançado de Navios
```c
void posicionar_navio_avancado(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO],
                             int vetor_navio[TAMANHO_NAVIO],
                             int linha_inicial, int coluna_inicial, TipoOrientacao orientacao)
```
- Implementação de algoritmos específicos para cada orientação
- Cálculo dinâmico de posições baseado no tipo de orientação
- Preenchimento automático de vetores de navios

### 3. Exibição Aprimorada do Tabuleiro
```c
void exibir_tabuleiro_completo(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO])
```
- Interface visual melhorada com bordas e separadores
- Representação simbólica diferenciada (~ para água)
- Cabeçalhos informativos e legenda detalhada

### 4. Sistema de Relatórios
- Relatório detalhado de cada navio posicionado
- Listagem de todas as posições ocupadas por navio
- Estatísticas globais de ocupação do tabuleiro
- Cálculo de percentual de área ocupada

## Estrutura do Código

### Constantes e Definições
```c
#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3
#define AGUA 0
#define NAVIO 3
#define TOTAL_NAVIOS 4
```

### Configuração Avançada dos Navios
```c
struct {
    int linha;
    int coluna;
    TipoOrientacao orientacao;
    int* vetor;
    const char* nome;
} configuracao_navios[TOTAL_NAVIOS]
```

### Posicionamento dos Navios
- **Navio 1:** Horizontal na linha 1, coluna 2
- **Navio 2:** Vertical na linha 4, coluna 7
- **Navio 3:** Diagonal principal no canto superior esquerdo (0,0)
- **Navio 4:** Diagonal secundária na linha 2, coluna 8

## Algoritmos Implementados

### Diagonal Principal (\)
```c
// Incremento simultâneo de linha e coluna
for (i = 0; i < TAMANHO_NAVIO; i++) {
    tabuleiro[linha_inicial + i][coluna_inicial + i] = vetor_navio[i];
}
```

### Diagonal Secundária (/)
```c
// Incremento de linha, decremento de coluna
for (i = 0; i < TAMANHO_NAVIO; i++) {
    tabuleiro[linha_inicial + i][coluna_inicial - i] = vetor_navio[i];
}
```

## Compilação e Execução

### Compilação
```bash
gcc -o batalha_naval batalha_naval.c
```

### Execução
```bash
./batalha_naval
```

## Saída Esperada

O programa exibe:
1. Informações sobre configuração do jogo aventureiro
2. Status detalhado de cada etapa de posicionamento
3. Tabuleiro final com formatação aprimorada
4. Relatório completo de cada navio com posições específicas
5. Estatísticas finais de ocupação e distribuição

## Conceitos Avançados Aplicados

### Enumerações
- Definição de tipos de orientação para organização
- Utilização de switch-case para seleção de algoritmos
- Mapeamento de valores numéricos para nomes descritivos

### Estruturas de Dados
- Arrays de estruturas para configuração de navios
- Ponteiros para funções (preparação para modularização)
- Organização hierárquica de informações

### Algoritmos Geométricos
- Cálculo de trajetórias diagonais
- Validação de limites para diferentes orientações
- Transformações de coordenadas

### Validação Robusta
- Verificação de limites específica por orientação
- Prevenção de sobreposição em todas as direções
- Tratamento de casos especiais para diagonais

## Melhorias em Relação ao Nível Novato

- Suporte para 4 navios (dobro da quantidade)
- Implementação de orientações diagonais
- Sistema de validação mais robusto
- Interface visual aprimorada
- Relatórios detalhados e estatísticas
- Organização de código mais profissional
- Utilização de enumerações e estruturas

## Desafios Técnicos Resolvidos

### Validação Diagonal
- Cálculo correto de limites para diagonal principal
- Verificação de limites para diagonal secundária
- Prevenção de índices negativos

### Organização de Código
- Modularização através de enumerações
- Estruturas de configuração centralizadas
- Funções especializadas para cada orientação

## Próximos Passos

Este programa prepara o terreno para implementações ainda mais avançadas que incluirão:
- Habilidades especiais com áreas de efeito
- Algoritmos de detecção de padrões
- Sistemas de pontuação complexos
- Inteligência artificial para posicionamento

## Autor

Guilher Martinez  
Tema: 5 - Arrays e Matrizes em C  
Data: Setembro 2025
