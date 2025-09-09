# Super Trunfo d### 🚀 Executáveis Prontos
- ✅ **Windows**: Arquivos `.exe` prontos para usar (sem necessidade de compilação)
- 📁 **Código Fonte**: Arquivos `.c` disponíveis para estudo e modificação
- 🔧 **Multiplataforma**: Código C compatível com Linux, macOS e Windows

## 📁 Estrutura do Projeto

```
Tema_2/
├── 📄 README.md                 # Este arquivo de documentação
├── 🚫 .gitignore               # Configuração do Git
├── 💻 nivel_novato.c           # Código fonte - versão básica
├── ⚙️ nivel_novato.exe         # Executável Windows - versão básica
├── 💻 nivel_aventureiro.c      # Código fonte - versão intermediária
├── ⚙️ nivel_aventureiro.exe    # Executável Windows - versão intermediária
├── 💻 nivel_mestre.c           # Código fonte - versão avançada
└── ⚙️ nivel_mestre.exe         # Executável Windows - versão avançada
```

**📝 Nota**: Os executáveis `.exe` são específicos para Windows. Para outros sistemas operacionais, compile os arquivos `.c` usando GCC.idades 🏙️

Este projeto implementa um jogo de cartas completo onde cidades brasileiras competem através de suas características econômicas, geográficas e turísticas.

## 📋 Sobre o Projeto

Este projeto implementa três versões do **Super Trunfo das Cidades** com diferentes níveis de complexidade:

### 🎮 Versões Disponíveis

| Arquivo | Executável | Nível | Características |
|---------|------------|-------|-----------------|
| `nivel_novato.c` | `nivel_novato.exe` | **Iniciante** | Cadastro básico de cartas |
| `nivel_aventureiro.c` | `nivel_aventureiro.exe` | **Intermediário** | + Cálculos automáticos |
| `nivel_mestre.c` | `nivel_mestre.exe` | **Avançado** | + Sistema completo de batalha |

### 🚀 Executáveis Prontos
- ✅ **Windows**: Arquivos `.exe` prontos para usar (sem necessidade de compilação)
- 📁 **Código Fonte**: Arquivos `.c` disponíveis para estudo e modificação
- � **Multiplataforma**: Código C compatível com Linux, macOS e Windows

### Funcionalidades Principais

✅ **Entrada de Dados Robusta**: Suporte a populações grandes com `unsigned long int`  
✅ **Cálculos Matemáticos**: Densidade populacional e PIB per capita calculados automaticamente  
✅ **Sistema de Batalha**: Comparação em 7 diferentes atributos  
✅ **Super Poder**: Fórmula especial que considera qualidade de vida (densidade inversa)  
✅ **Interface Clara**: Exibição organizada dos dados e resultados das comparações

## 🎮 Como Jogar

### 📊 Atributos das Cartas
Cada carta representa uma cidade brasileira com os seguintes dados:

| Atributo | Tipo de Dados | Formato | Descrição |
|----------|---------------|---------|-----------|
| **Estado** | `char` | A, B, C... H | Letra representando o estado |
| **Código** | `char[4]` | A01, B02, C03 | Estado + número sequencial |
| **Nome** | `char[50]` | SaoPaulo, Brasilia | Nome da cidade (sem espaços) |
| **População** | `unsigned long int` | 12325000 | Habitantes (suporta metrópoles) |
| **Área** | `float` | 1521.11 | Área em km² |
| **PIB** | `float` | 699.28 | PIB em bilhões de reais |
| **Pontos Turísticos** | `int` | 50 | Quantidade de atrações |

### 🧮 Cálculos Automáticos
O programa calcula automaticamente:

- **Densidade Populacional**: `população ÷ área` (hab/km²)
- **PIB per Capita**: `PIB ÷ população` (bilhões per capita)
- **Super Poder**: `população + área + PIB + pontos turísticos + (1 ÷ densidade) + PIB per capita`

### 🏆 Regras de Vitória

| Atributo | Critério de Vitória | Explicação |
|----------|-------------------|------------|
| População | **Maior vence** | Mais habitantes = maior importância |
| Área | **Maior vence** | Território maior = mais recursos |
| PIB | **Maior vence** | Economia mais forte |
| Pontos Turísticos | **Maior vence** | Mais atrações = maior relevância turística |
| Densidade Populacional | **Menor vence** | Menos pessoas/km² = melhor qualidade de vida |
| PIB per Capita | **Maior vence** | Maior renda individual |
| Super Poder | **Maior vence** | Fórmula que equilibra todos os fatores |

## � Exemplos Práticos

### 📝 Exemplo de Entrada de Dados
```
=== Cadastro da Carta 1 ===
Estado (A-H): A
Codigo da Carta (ex: A01): A01
Nome da Cidade: SaoPaulo
Populacao: 12325000
Area (km²): 1521.11
PIB (em bilhoes de reais): 699.28
Numero de Pontos Turisticos: 50

=== Cadastro da Carta 2 ===
Estado (A-H): B
Codigo da Carta (ex: B02): B02
Nome da Cidade: Brasilia
Populacao: 3055000
Area (km²): 5802.00
PIB (em bilhoes de reais): 248.00
Numero de Pontos Turisticos: 25
```

### 📊 Exemplo de Saída - Dados das Cartas
```
Carta 1:
Estado: A
Codigo: A01
Nome da Cidade: SaoPaulo
Populacao: 12325000
Area: 1521.11 km²
PIB: 699.28 bilhoes de reais
Numero de Pontos Turisticos: 50
Densidade Populacional: 8103.45 hab/km²
PIB per Capita: 0.000057 bilhoes per capita
Super Poder: 12326270.28

Carta 2:
Estado: B
Codigo: B02
Nome da Cidade: Brasilia
Area: 5802.00 km²
PIB: 248.00 bilhoes de reais
Numero de Pontos Turisticos: 25
Densidade Populacional: 526.77 hab/km²
PIB per Capita: 0.000081 bilhoes per capita
Super Poder: 3058277.00
```

### 🏆 Exemplo de Saída - Comparações
```
Comparacao de Cartas:
Populacao: Carta 1 venceu (1)           👑 São Paulo tem mais habitantes
Area: Carta 2 venceu (0)                👑 Brasília é maior em território  
PIB: Carta 1 venceu (1)                 👑 São Paulo tem economia maior
Pontos Turisticos: Carta 1 venceu (1)   👑 São Paulo tem mais atrações
Densidade Populacional: Carta 2 venceu (0) 👑 Brasília tem melhor qualidade de vida
PIB per Capita: Carta 2 venceu (0)      👑 Brasília tem maior renda individual
Super Poder: Carta 1 venceu (1)         👑 São Paulo vence no geral!
```

## 🎯 Estratégias e Dicas

### 🏙️ **Cidades Recomendadas para Testar**

#### **Megametrópoles vs Capitais Planejadas**
| Cidade | Pop. (milhões) | Área (km²) | PIB (bi) | Pontos | Características |
|--------|---------------|------------|----------|--------|-----------------|
| **São Paulo** | 12.3 | 1,521 | 699 | 50 | Alta densidade, economia forte |
| **Brasília** | 3.1 | 5,802 | 248 | 25 | Baixa densidade, PIB per capita alto |

#### **Contrastes Regionais**
| Cidade | Pop. (milhões) | Área (km²) | PIB (bi) | Pontos | Vantagem Competitiva |
|--------|---------------|------------|----------|--------|---------------------|
| **Manaus** | 2.2 | 11,401 | 74 | 15 | Maior área, menor densidade |
| **Florianópolis** | 0.5 | 674 | 28 | 35 | Muitos pontos turísticos |

### 🧮 **Entendendo os Cálculos**

#### **Densidade Populacional**
- **Fórmula**: `habitantes ÷ km²`
- **Interpretação**: Valores menores indicam melhor qualidade de vida
- **Exemplo**: Brasília (526 hab/km²) vs São Paulo (8,103 hab/km²)

#### **PIB per Capita** 
- **Fórmula**: `PIB total ÷ população`
- **Interpretação**: Maior valor = maior renda individual
- **Exemplo**: Cidades menores com PIB alto podem ter vantagem

#### **Super Poder - Fórmula Especial**
```
Super Poder = População + Área + PIB + Pontos Turísticos + 
              PIB per Capita + (1 ÷ Densidade Populacional)
```
- **Balanceamento**: Considera tamanho, economia E qualidade de vida
- **Vantagem única**: O termo `(1 ÷ densidade)` favorece cidades menos densas

### 💡 **Dicas de Uso**

#### **Para Aprendizagem:**
- 🎯 Compare cidades que você conhece bem
- 📈 Teste cenários extremos (megacidade vs cidade pequena)
- 🔍 Observe como cada atributo influencia o resultado final

#### **Para Ensino:**
- 📚 Use dados reais do IBGE para maior veracidade
- 🎲 Crie cenários onde diferentes cidades vencem em diferentes atributos
- 🏆 Demonstre como o "Super Poder" equilibra os fatores

#### **Dados de Entrada Eficientes:**
- ✅ Use nomes sem espaços (ex: "SaoPaulo", "RioDeJaneiro")
- ✅ População: números inteiros grandes (ex: 12325000)
- ✅ Área e PIB: use decimais para maior precisão (ex: 1521.11)
- ✅ Códigos: siga o padrão estado+número (ex: A01, B02)

## 🚀 Como Usar o Programa

### ⚙️ Pré-requisitos
- Para executar os arquivos `.exe`: Sistema Windows
- Para compilar do código fonte: Compilador GCC instalado
- Terminal/Prompt de comando

### 🎯 Opção 1: Usar Executáveis Prontos (Windows)

Se você está no Windows, pode usar os executáveis já compilados:

```bash
# Executar diretamente no Windows
nivel_novato.exe      # Versão básica
nivel_aventureiro.exe # Versão intermediária com cálculos
nivel_mestre.exe      # Versão completa com comparações
```

**Vantagem:** Não precisa compilar, executa imediatamente!

### 📦 Opção 2: Compilar do Código Fonte

```bash
# Windows
gcc nivel_novato.c -o nivel_novato.exe
gcc nivel_aventureiro.c -o nivel_aventureiro.exe
gcc nivel_mestre.c -o nivel_mestre.exe

# Linux/macOS
gcc nivel_novato.c -o nivel_novato
gcc nivel_aventureiro.c -o nivel_aventureiro
gcc nivel_mestre.c -o nivel_mestre

# WSL (Windows Subsystem for Linux)
wsl gcc nivel_novato.c -o nivel_novato
wsl gcc nivel_aventureiro.c -o nivel_aventureiro
wsl gcc nivel_mestre.c -o nivel_mestre
```

### ▶️ Execução por Nível

```bash
# Windows (usando executáveis prontos)
nivel_novato.exe
nivel_aventureiro.exe
nivel_mestre.exe

# Linux/macOS/WSL (após compilar)
./nivel_novato
./nivel_aventureiro
./nivel_mestre
```

### 🎯 Fluxo de Uso
1. **Execute o programa**
2. **Cadastre a Carta 1**: Insira dados da primeira cidade seguindo os prompts
3. **Cadastre a Carta 2**: Insira dados da segunda cidade
4. **Veja os resultados**: O programa exibe:
   - 📋 Dados completos de ambas as cartas
   - 🧮 Cálculos automáticos (densidade e PIB per capita)
   - ⚡ Super Poder de cada carta
   - 🏆 Resultados das comparações (qual carta vence em cada atributo)

## �️ Detalhes Técnicos

### 📋 **Estrutura do Código**
```c
// Variáveis principais para cada carta
char estado1, estado2;                    // Estados (A-H)
char codigo1[4], codigo2[4];             // Códigos das cartas
char nomeCidade1[50], nomeCidade2[50];   // Nomes das cidades
unsigned long int populacao1, populacao2; // População (suporta números grandes)
float area1, area2;                      // Área em km²
float pib1, pib2;                        // PIB em bilhões
int pontosTuristicos1, pontosTuristicos2; // Pontos turísticos

// Cálculos automáticos
float densidadePopulacional = população / area;
float pibPerCapita = pib / população;
float superPoder = população + area + pib + pontos + (1/densidade) + pibPerCapita;
```

### 🔧 **Funcionalidades Implementadas**
- **Entrada robusta de dados** com `scanf` otimizado
- **Cálculos matemáticos** com conversão de tipos (`float casting`)
- **Comparações lógicas** usando operadores relacionais
- **Formatação de saída** com precisão decimal controlada
- **Suporte a números grandes** com `unsigned long int`

### 🎯 **Conceitos de Programação Aplicados**

#### **Tipos de Dados**
- `char`: Caracteres individuais (estado)
- `char[]`: Strings (código, nome da cidade)
- `unsigned long int`: Números inteiros grandes sem sinal
- `float`: Números decimais para cálculos precisos
- `int`: Números inteiros simples

#### **Operações Matemáticas**
- **Divisão com casting**: `(float)populacao / area`
- **Soma complexa**: Múltiplos tipos de dados
- **Inversão matemática**: `1.0f / densidade` para o Super Poder

#### **Lógica de Comparação**
- **Operadores relacionais**: `>`, `<` para comparações
- **Operador ternário implícito**: Resultado 0 ou 1
- **Lógica invertida**: Densidade menor vence (melhor qualidade)

### � **Tecnologias e Requisitos**
- **Linguagem**: C (padrão ANSI C)
- **Compilador**: GCC ou compatível
- **Bibliotecas**: `stdio.h` (entrada/saída padrão)
- **Plataformas**: Windows, Linux, macOS, WSL

## 🏆 Objetivos Educacionais

### 🎯 **Habilidades Desenvolvidas**
- **Programação em C**: Manipulação de diferentes tipos de dados
- **Entrada/Saída**: Uso eficiente do `scanf` e `printf`
- **Cálculos Matemáticos**: Operações aritméticas e conversões de tipo
- **Lógica Condicional**: Comparações e operadores relacionais
- **Estrutura de Programa**: Organização de código e fluxo lógico

### 📚 **Conceitos Matemáticos Aplicados**
- **Densidade Populacional**: Geografia e urbanização
- **PIB per Capita**: Economia e indicadores sociais
- **Análise Comparativa**: Estatística descritiva
- **Fórmulas Compostas**: Criação de índices (Super Poder)

### 🔬 **Aspectos Técnicos de C**
- **Gestão de Memória**: Arrays de caracteres e strings
- **Tipos de Dados**: Escolha adequada para cada variável
- **Casting**: Conversão segura entre tipos numéricos
- **Formatação**: Controle de precisão na saída de dados

## � Uso Acadêmico

### 👨‍🏫 **Para Professores**
- **Exercício progressivo** em disciplinas de programação
- **Demonstração prática** de conceitos matemáticos e geográficos
- **Exemplo real** de aplicação de programação em problemas cotidianos
- **Base para expansões** (adicionar mais cidades, novos atributos)

### 👨‍🎓 **Para Estudantes**
- **Projeto completo** que combina múltiplos conceitos
- **Código bem documentado** para análise e aprendizado
- **Possibilidade de modificação** para experimentação
- **Resultados visuais** que facilitam o entendimento

## 👨‍💻 Informações do Projeto

**Desenvolvido por**: Curso ADA Tech - Estácio  
**Disciplina**: Tema 2 - Programação em C  
**Arquivo principal**: `super_trunfo.c`  
**Licença**: Uso educacional e acadêmico  

---

> 🌟 **Dica Final**: Este programa é mais que um jogo - é uma ferramenta educacional que demonstra como a programação pode ser usada para analisar e comparar dados do mundo real de forma interativa e divertida!
