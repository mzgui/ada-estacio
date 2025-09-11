# Batalha Naval - Nível Novato

## Descrição do Projeto

Este programa implementa a funcionalidade básica de posicionamento de navios em um jogo de Batalha Naval. O foco está na utilização de arrays unidimensionais e bidimensionais para representar o tabuleiro e os navios, demonstrando conceitos fundamentais de programação em C.

## Objetivos Educacionais

- Compreensão e manipulação de matrizes bidimensionais
- Utilização de arrays unidimensionais para representar objetos
- Implementação de loops aninhados para percorrer matrizes
- Validação de posicionamento dentro de limites estabelecidos
- Desenvolvimento de lógica para evitar sobreposição de elementos

## Especificações Técnicas

### Configurações do Jogo
- **Tamanho do Tabuleiro:** 10x10
- **Número de Navios:** 2
- **Tamanho dos Navios:** 3 posições cada
- **Orientações:** 1 horizontal, 1 vertical

### Representação de Dados
- **Água:** Valor 0
- **Navio:** Valor 3
- **Estrutura Principal:** Matriz bidimensional `int[10][10]`

## Funcionalidades Implementadas

### 1. Inicialização do Tabuleiro
```c
void inicializar_tabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO])
```
- Preenche toda a matriz com valor 0 (água)
- Utiliza loops aninhados para percorrer todas as posições

### 2. Validação de Posicionamento
```c
int validar_posicionamento(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], 
                          int linha_inicial, int coluna_inicial, int eh_horizontal)
```
- Verifica se o navio cabe dentro dos limites do tabuleiro
- Valida ausência de sobreposição com navios existentes
- Retorna 1 para posicionamento válido, 0 para inválido

### 3. Posicionamento de Navios
```c
void posicionar_navio(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO],
                     int vetor_navio[TAMANHO_NAVIO],
                     int linha_inicial, int coluna_inicial, int eh_horizontal)
```
- Inicializa o vetor do navio com valor 3
- Copia os valores para as posições correspondentes na matriz
- Suporta orientação horizontal e vertical

### 4. Exibição do Tabuleiro
```c
void exibir_tabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO])
```
- Apresenta o tabuleiro de forma organizada
- Inclui numeração de linhas e colunas
- Exibe legenda para interpretação dos valores

## Estrutura do Código

### Constantes Definidas
```c
#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3
#define AGUA 0
#define NAVIO 3
```

### Configuração dos Navios
- **Navio Horizontal:** Linha 2, iniciando na coluna 1
- **Navio Vertical:** Linha 5, na coluna 7

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
1. Informações sobre a configuração do jogo
2. Status de cada etapa de inicialização e posicionamento
3. Tabuleiro final com navios posicionados
4. Informações detalhadas sobre cada navio posicionado
5. Estatísticas do posicionamento realizado

## Conceitos de Programação Aplicados

### Arrays e Matrizes
- Declaração e inicialização de matrizes bidimensionais
- Manipulação de arrays unidimensionais
- Indexação e acesso a elementos

### Estruturas de Controle
- Loops aninhados (for dentro de for)
- Estruturas condicionais para validação
- Controle de fluxo baseado em retorno de funções

### Modularização
- Separação de responsabilidades em funções específicas
- Passagem de arrays como parâmetros
- Reutilização de código através de funções

## Limitações do Nível Novato

- Posicionamento fixo (sem entrada do usuário)
- Apenas dois navios
- Orientações limitadas (horizontal e vertical)
- Sem implementação de mecânicas de jogo (ataques, pontuação)
- Validação simplificada

## Próximos Passos

Este programa serve como base para implementações mais avançadas que incluirão:
- Maior número de navios
- Orientações diagonais
- Entrada dinâmica do usuário
- Mecânicas completas de jogo
- Validações mais robustas

## Autor

Guilher Martinez  
Tema: 5 - Arrays e Matrizes em C  
Data: Setembro 2025
