# Tema 2 - Variáveis, Tipos de Dados e Operadores em C

## Visão Geral do Tema

Este tema aborda os **conceitos fundamentais** da linguagem C, estabelecendo as bases essenciais para programação estruturada. O conteúdo foca na compreensão e aplicação prática de variáveis, tipos de dados primitivos e operadores, preparando o estudante para temas mais avançados.

## Objetivos de Aprendizagem

### Objetivos Gerais
- Compreender os tipos de dados primitivos da linguagem C
- Dominar a declaração e inicialização de variáveis
- Aplicar operadores aritméticos, relacionais e lógicos
- Implementar entrada e saída de dados formatada
- Desenvolver programas básicos com manipulação de dados

### Objetivos Específicos
- Utilizar corretamente os especificadores de formato (%d, %f, %c, %s)
- Implementar cálculos matemáticos com diferentes tipos numéricos
- Aplicar conversões de tipo quando necessário
- Validar e formatar entrada de dados do usuário
- Organizar código de forma clara e legível

## Estrutura do Tema

### Conceitos Fundamentais Abordados

| Categoria | Elementos | Aplicação Prática |
|-----------|-----------|-------------------|
| **Tipos Primitivos** | int, float, double, char | Armazenamento adequado de dados |
| **Modificadores** | signed, unsigned, long, short | Otimização de memória e precisão |
| **Operadores** | Aritméticos, relacionais, lógicos | Cálculos e comparações |
| **E/S Formatada** | printf(), scanf() | Interação com usuário |

### Progressão de Complexidade

```
Declaração → Inicialização → Operações → Entrada/Saída → Aplicação Prática
```

## Especificações Técnicas

### Tipos de Dados Implementados
- **int**: Números inteiros (32 bits)
- **float**: Números decimais (precisão simples)
- **double**: Números decimais (precisão dupla)
- **char**: Caracteres individuais
- **unsigned long**: Números inteiros grandes (populações)

### Operadores Utilizados
- **Aritméticos**: +, -, *, /, %
- **Atribuição**: =, +=, -=, *=, /=
- **Relacionais**: ==, !=, <, >, <=, >=
- **Incremento/Decremento**: ++, --

### Funções de E/S Padrão
- **printf()**: Saída formatada de dados
- **scanf()**: Entrada formatada de dados
- **fgets()**: Entrada segura de strings
- **getchar()**: Limpeza de buffer

## Implementação Prática

### Estrutura Básica do Programa
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaração de variáveis
    int numero_inteiro;
    float numero_decimal;
    char caractere;
    char string[50];
    
    // Entrada de dados
    printf("Digite um número inteiro: ");
    scanf("%d", &numero_inteiro);
    
    printf("Digite um número decimal: ");
    scanf("%f", &numero_decimal);
    
    // Processamento
    float resultado = numero_inteiro * numero_decimal;
    
    // Saída
    printf("Resultado: %.2f\n", resultado);
    
    return 0;
}
```

### Aplicação Completa: Sistema de Cadastro
```c
typedef struct {
    char estado[3];
    char codigo[4];
    char nome[50];
    unsigned long populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
} Carta;

void cadastrar_carta(Carta* carta) {
    printf("Estado (sigla): ");
    scanf("%2s", carta->estado);
    
    printf("Código da carta: ");
    scanf("%3s", carta->codigo);
    
    printf("Nome da cidade: ");
    scanf("%49s", carta->nome);
    
    printf("População: ");
    scanf("%lu", &carta->populacao);
    
    printf("Área (km²): ");
    scanf("%f", &carta->area);
    
    printf("PIB (bilhões): ");
    scanf("%f", &carta->pib);
    
    printf("Pontos turísticos: ");
    scanf("%d", &carta->pontos_turisticos);
    
    // Cálculos automáticos
    carta->densidade_populacional = carta->populacao / carta->area;
    carta->pib_per_capita = (carta->pib * 1000000000) / carta->populacao;
}
```

## Conceitos Técnicos Detalhados

### 1. Tipos de Dados e Tamanhos
```c
// Verificação de tamanhos em bytes
printf("Tamanho de int: %zu bytes\n", sizeof(int));
printf("Tamanho de float: %zu bytes\n", sizeof(float));
printf("Tamanho de double: %zu bytes\n", sizeof(double));
printf("Tamanho de char: %zu bytes\n", sizeof(char));
printf("Tamanho de unsigned long: %zu bytes\n", sizeof(unsigned long));

// Ranges típicos
// int: -2,147,483,648 a 2,147,483,647
// unsigned int: 0 a 4,294,967,295
// float: ~6-7 dígitos de precisão
// double: ~15-16 dígitos de precisão
```

### 2. Especificadores de Formato
```c
int idade = 25;
float altura = 1.75f;
double salario = 5500.50;
char inicial = 'J';
char nome[] = "João";
unsigned long populacao = 12325000UL;

printf("Idade: %d anos\n", idade);
printf("Altura: %.2f metros\n", altura);
printf("Salário: R$ %.2lf\n", salario);
printf("Inicial: %c\n", inicial);
printf("Nome: %s\n", nome);
printf("População: %lu habitantes\n", populacao);
```

### 3. Operadores Aritméticos Avançados
```c
// Operações básicas
int a = 10, b = 3;
printf("Soma: %d + %d = %d\n", a, b, a + b);
printf("Subtração: %d - %d = %d\n", a, b, a - b);
printf("Multiplicação: %d * %d = %d\n", a, b, a * b);
printf("Divisão inteira: %d / %d = %d\n", a, b, a / b);
printf("Resto da divisão: %d %% %d = %d\n", a, b, a % b);

// Divisão com decimais
float resultado = (float)a / b;
printf("Divisão decimal: %.2f\n", resultado);

// Operadores de atribuição
a += 5;  // equivale a: a = a + 5
b *= 2;  // equivale a: b = b * 2
```

### 4. Conversões de Tipo (Type Casting)
```c
// Conversão implícita
int inteiro = 10;
float decimal = inteiro;  // int para float (automática)

// Conversão explícita
float valor = 3.14159f;
int parte_inteira = (int)valor;  // float para int (explícita)

// Conversão para cálculos
int numerador = 7, denominador = 3;
float resultado = (float)numerador / denominador;  // 2.33 ao invés de 2
```

### 5. Validação de Entrada
```c
int validar_entrada_inteira() {
    int valor;
    int resultado;
    
    do {
        printf("Digite um número inteiro: ");
        resultado = scanf("%d", &valor);
        
        if (resultado != 1) {
            printf("Entrada inválida! Digite apenas números.\n");
            // Limpar buffer de entrada
            while (getchar() != '\n');
        }
    } while (resultado != 1);
    
    return valor;
}

float validar_entrada_decimal() {
    float valor;
    int resultado;
    
    do {
        printf("Digite um número decimal: ");
        resultado = scanf("%f", &valor);
        
        if (resultado != 1 || valor < 0) {
            printf("Entrada inválida! Digite um número positivo.\n");
            while (getchar() != '\n');
        }
    } while (resultado != 1 || valor < 0);
    
    return valor;
}
```

## Aplicações Práticas

### 1. Calculadora Científica Básica
```c
void calculadora() {
    float num1, num2, resultado;
    char operador;
    
    printf("Digite a operação (ex: 5.5 + 3.2): ");
    scanf("%f %c %f", &num1, &operador, &num2);
    
    switch(operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                printf("Erro: Divisão por zero!\n");
                return;
            }
            break;
        default:
            printf("Operador inválido!\n");
            return;
    }
    
    printf("Resultado: %.2f %c %.2f = %.2f\n", num1, operador, num2, resultado);
}
```

### 2. Conversor de Unidades
```c
void conversor_unidades() {
    float valor, resultado;
    int opcao;
    
    printf("=== CONVERSOR DE UNIDADES ===\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Metros para Pés\n");
    printf("3 - Quilogramas para Libras\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    
    printf("Digite o valor: ");
    scanf("%f", &valor);
    
    switch(opcao) {
        case 1:
            resultado = (valor * 9.0f / 5.0f) + 32.0f;
            printf("%.2f°C = %.2f°F\n", valor, resultado);
            break;
        case 2:
            resultado = valor * 3.28084f;
            printf("%.2f metros = %.2f pés\n", valor, resultado);
            break;
        case 3:
            resultado = valor * 2.20462f;
            printf("%.2f kg = %.2f libras\n", valor, resultado);
            break;
        default:
            printf("Opção inválida!\n");
    }
}
```

### 3. Sistema de Estatísticas
```c
void calcular_estatisticas() {
    float valores[5];
    float soma = 0.0f, media, maior, menor;
    
    printf("Digite 5 valores:\n");
    for (int i = 0; i < 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%f", &valores[i]);
        soma += valores[i];
        
        if (i == 0) {
            maior = menor = valores[i];
        } else {
            if (valores[i] > maior) maior = valores[i];
            if (valores[i] < menor) menor = valores[i];
        }
    }
    
    media = soma / 5.0f;
    
    printf("\n=== ESTATÍSTICAS ===\n");
    printf("Soma: %.2f\n", soma);
    printf("Média: %.2f\n", media);
    printf("Maior valor: %.2f\n", maior);
    printf("Menor valor: %.2f\n", menor);
    printf("Amplitude: %.2f\n", maior - menor);
}
```

## Compilação e Execução

### Comandos Básicos
```bash
# Compilação simples
gcc -o programa arquivo.c

# Compilação com warnings
gcc -Wall -Wextra -o programa arquivo.c

# Compilação para debug
gcc -g -o programa arquivo.c

# Execução
./programa
```

### Verificação de Tipos e Limites
```c
#include <limits.h>
#include <float.h>

void exibir_limites() {
    printf("=== LIMITES DOS TIPOS DE DADOS ===\n");
    printf("INT_MIN: %d\n", INT_MIN);
    printf("INT_MAX: %d\n", INT_MAX);
    printf("UINT_MAX: %u\n", UINT_MAX);
    printf("LONG_MIN: %ld\n", LONG_MIN);
    printf("LONG_MAX: %ld\n", LONG_MAX);
    printf("FLT_MIN: %e\n", FLT_MIN);
    printf("FLT_MAX: %e\n", FLT_MAX);
    printf("DBL_MIN: %e\n", DBL_MIN);
    printf("DBL_MAX: %e\n", DBL_MAX);
}
```

## Boas Práticas Implementadas

### Nomenclatura de Variáveis
```c
// ✅ Correto: nomes descritivos
int idade_usuario;
float salario_mensal;
char nome_completo[100];
unsigned long populacao_cidade;

// ❌ Evitar: nomes genéricos
int x, y, z;
float a, b, c;
char str[100];
```

### Inicialização de Variáveis
```c
// ✅ Sempre inicializar
int contador = 0;
float percentual = 0.0f;
char buffer[50] = {0};

// ✅ Inicialização múltipla
int a = 1, b = 2, c = 3;
float x = 0.0f, y = 0.0f;
```

### Formatação de Saída
```c
// Alinhamento e precisão
printf("Nome: %-20s | Idade: %3d | Salário: R$ %8.2f\n", 
       nome, idade, salario);

// Separadores visuais
printf("=" "%.50s" "=\n", "==================================================");
printf("| %-20s | %10s | %12s |\n", "Campo", "Valor", "Unidade");
printf("=" "%.50s" "=\n", "==================================================");
```

## Exercícios de Fixação

### Exercícios Básicos
1. Implementar conversor de moedas com 3 moedas diferentes
2. Criar calculadora de IMC com classificação
3. Desenvolver sistema de notas com média aritmética
4. Programar conversor de tempo (segundos para h:m:s)

### Exercícios Intermediários
1. Sistema de cadastro de produtos com preço total
2. Calculadora de juros simples e compostos
3. Conversor de bases numéricas (decimal, binário, hexadecimal)
4. Sistema de pontuação de jogos com ranking

### Exercícios Avançados
1. Simulador de financiamento com diferentes taxas
2. Sistema de análise estatística básica
3. Calculadora científica com operações complexas
4. Conversor universal de unidades (múltiplas categorias)

## Preparação para Temas Avançados

### Conceitos Estabelecidos
- **Manipulação básica** de tipos de dados
- **Operações aritméticas** e lógicas
- **Entrada e saída** formatada
- **Validação básica** de dados

### Preparação para Próximos Temas
- **Tema 3**: Estruturas de decisão utilizarão os operadores relacionais
- **Tema 4**: Estruturas de repetição trabalharão com contadores e acumuladores
- **Tema 5**: Arrays utilizarão índices numéricos e operações em massa
- **Temas avançados**: Ponteiros, estruturas e manipulação de memória

## Aplicações Profissionais

### Cenários Empresariais
- **Sistemas de folha de pagamento** com cálculos automáticos
- **Conversores de unidades** para indústria
- **Calculadoras financeiras** para bancos
- **Sistemas de medição** para engenharia

### Preparação para Desenvolvimento
- **Validação de dados** em formulários web
- **Cálculos matemáticos** em aplicações científicas
- **Processamento numérico** em sistemas embarcados
- **Manipulação de dados** em bancos de dados

---

## Informações do Projeto

**Autor:** Guilher Martinez  
**Curso:** ADA Tech - Estácio  
**Tema:** 2 - Variáveis, Tipos de Dados e Operadores em C  
**Data:** Setembro 2025  
**Versão:** 1.0  

Este tema estabelece os fundamentos essenciais da programação em C, fornecendo a base sólida necessária para todos os conceitos avançados que serão abordados nos temas subsequentes do curso.

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
