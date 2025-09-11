# Batalha Naval - Nível Mestre

## Descrição do Projeto

Este programa representa o ápice da implementação do jogo de Batalha Naval, introduzindo um sistema avançado de habilidades especiais com áreas de efeito complexas. O projeto demonstra técnicas sofisticadas de programação em C, incluindo geração dinâmica de padrões, sobreposição de matrizes e algoritmos geométricos avançados.

## Objetivos Educacionais

- Implementação de algoritmos de geração dinâmica de padrões
- Desenvolvimento de sistemas de sobreposição de matrizes
- Aplicação de matemática computacional (distância Manhattan)
- Utilização de estruturas de dados complexas
- Implementação de sistemas de relatórios avançados
- Otimização de performance com algoritmos eficientes

## Especificações Técnicas

### Configurações do Jogo
- **Tamanho do Tabuleiro:** 10x10
- **Tamanho das Habilidades:** 7x7
- **Número de Habilidades:** 3 (Cone, Cruz, Octaedro)
- **Número de Navios:** 3 (posicionados automaticamente)

### Representação de Dados
- **Água:** Valor 0 (representado por ~)
- **Navio:** Valor 3 (representado por N)
- **Área de Habilidade:** Valor 5 (representado por *)

### Tipos de Habilidades
```c
typedef enum {
    HABILIDADE_CONE = 0,
    HABILIDADE_CRUZ = 1,
    HABILIDADE_OCTAEDRO = 2
} TipoHabilidade;
```

## Funcionalidades Implementadas

### 1. Geração Dinâmica de Habilidades

#### Habilidade Cone
```c
void criar_habilidade_cone(int matriz_habilidade[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE])
```
- Algoritmo de expansão progressiva
- Largura aumenta proporcionalmente à linha
- Formato triangular com vértice superior

#### Habilidade Cruz
```c
void criar_habilidade_cruz(int matriz_habilidade[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE])
```
- Padrão de linha e coluna centrais
- Área de efeito simétrica
- Cobertura em formato de cruz perfeita

#### Habilidade Octaedro (Losango)
```c
void criar_habilidade_octaedro(int matriz_habilidade[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE])
```
- Utilização de distância Manhattan
- Algoritmo geométrico para formato losango
- Área de efeito em forma de diamante

### 2. Sistema de Sobreposição
```c
void aplicar_habilidade_ao_tabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO],
                                     int matriz_habilidade[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE],
                                     int linha_origem, int coluna_origem)
```
- Mapeamento dinâmico de coordenadas
- Validação de limites do tabuleiro
- Preservação de navios existentes
- Aplicação seletiva baseada em condições

### 3. Interface Visual Avançada
```c
void exibir_tabuleiro_com_habilidades(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO])
```
- Representação simbólica diferenciada para cada elemento
- Formatação com bordas e separadores profissionais
- Legenda completa e informativa

### 4. Sistema de Relatórios Completo
- Exibição individual de cada matriz de habilidade
- Estatísticas de cobertura e ocupação
- Relatório detalhado de posicionamento
- Cálculo de percentuais de área afetada

## Algoritmos Avançados Implementados

### Algoritmo de Cone
```c
int largura_atual = linha + 1;
int inicio_coluna = centro - largura_atual / 2;
int fim_coluna = centro + largura_atual / 2;
```
- Expansão linear baseada na linha atual
- Centralização automática em relação ao ponto de origem
- Limitação inteligente de bordas

### Algoritmo de Distância Manhattan
```c
int distancia_linha = (linha > centro) ? linha - centro : centro - linha;
int distancia_coluna = (coluna > centro) ? coluna - centro : centro - coluna;
int distancia_manhattan = distancia_linha + distancia_coluna;
```
- Cálculo eficiente de distância sem uso de funções matemáticas complexas
- Implementação de valor absoluto manual
- Determinação de inclusão baseada em raio

### Sistema de Mapeamento de Coordenadas
```c
int linha_tabuleiro = linha_origem - centro_habilidade + linha_hab;
int coluna_tabuleiro = coluna_origem - centro_habilidade + coluna_hab;
```
- Transformação de coordenadas relativas para absolutas
- Centralização automática da habilidade no ponto de origem
- Mapeamento bidirecional entre matrizes

## Estrutura de Dados Avançada

### Configuração Dinâmica de Habilidades
```c
struct {
    TipoHabilidade tipo;
    int linha_origem;
    int coluna_origem;
    int (*matriz)[TAMANHO_HABILIDADE];
    void (*criar_funcao)(int[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE]);
} configuracao_habilidades[]
```
- Ponteiros para matrizes específicas
- Ponteiros para funções de criação
- Configuração centralizada e modular

### Posicionamento das Habilidades
- **Cone:** Centro em [1, 5]
- **Cruz:** Centro em [5, 2]
- **Octaedro:** Centro em [7, 8]

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

O programa exibe sequencialmente:
1. Informações de configuração do nível mestre
2. Status de inicialização do tabuleiro
3. Posicionamento automático de navios
4. Criação e exibição de cada matriz de habilidade
5. Aplicação progressiva das habilidades ao tabuleiro
6. Tabuleiro final com todas as sobreposições
7. Estatísticas completas e relatório final

## Conceitos Avançados Aplicados

### Ponteiros para Funções
- Armazenamento de referências de funções em estruturas
- Chamadas dinâmicas baseadas em configuração
- Modularização através de ponteiros

### Algoritmos Geométricos
- Implementação de formas geométricas complexas
- Cálculos de distância sem bibliotecas matemáticas
- Transformações de coordenadas bidirecionais

### Estruturas de Controle Complexas
- Loops aninhados com múltiplas condições
- Validação em múltiplas camadas
- Fluxo de controle baseado em tipos enumerados

### Otimização de Performance
- Minimização de cálculos repetitivos
- Algoritmos eficientes para geração de padrões
- Uso inteligente de memória

## Melhorias em Relação aos Níveis Anteriores

### Complexidade Algorítmica
- Implementação de 3 algoritmos geométricos distintos
- Sistema de sobreposição com validação avançada
- Geração dinâmica de padrões complexos

### Organização de Código
- Utilização de ponteiros para funções
- Estruturas de configuração centralizadas
- Modularização avançada

### Interface e Relatórios
- Sistema de relatórios completo e detalhado
- Estatísticas avançadas com cálculos percentuais
- Interface visual profissional

### Robustez
- Validação rigorosa de limites
- Preservação de dados existentes
- Tratamento de casos especiais

## Desafios Técnicos Resolvidos

### Geração de Padrões Geométricos
- Implementação de algoritmo de cone sem recursão
- Criação de losango usando distância Manhattan
- Padrão de cruz com precisão matemática

### Sobreposição de Matrizes
- Mapeamento correto de coordenadas entre matrizes de tamanhos diferentes
- Validação de limites durante sobreposição
- Preservação seletiva de dados existentes

### Gestão de Memória
- Utilização eficiente de arrays multidimensionais
- Organização de múltiplas matrizes simultaneamente
- Ponteiros para diferentes tipos de dados

## Performance e Eficiência

### Complexidade Computacional
- Algoritmos com complexidade O(n²) para geração de padrões
- Sobreposição com complexidade O(m²) onde m é o tamanho da habilidade
- Exibição com complexidade O(n²) para o tabuleiro completo

### Uso de Memória
- Armazenamento de 4 matrizes principais (1 tabuleiro + 3 habilidades)
- Utilização de estruturas compactas para configuração
- Minimização de variáveis temporárias

## Aplicações Práticas

Este programa demonstra conceitos aplicáveis em:
- Desenvolvimento de jogos com sistemas de habilidades
- Processamento de imagens com sobreposição de camadas
- Simulações geométricas e matemáticas
- Sistemas de mapeamento e coordenadas
- Algoritmos de detecção de padrões

## Próximos Desenvolvimentos

O código está preparado para extensões como:
- Habilidades com formatos personalizados
- Sistema de animação de efeitos
- Inteligência artificial para seleção de alvos
- Sistema de pontuação baseado em área de efeito
- Implementação de efeitos sonoros e visuais

## Autor

Guilher Martinez  
Tema: 5 - Arrays e Matrizes em C  
Data: Setembro 2025
