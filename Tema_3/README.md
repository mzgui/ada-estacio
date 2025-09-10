# Super Trunfo - Nível Novato 🎮

Este projeto implementa o **Nível Novato** do desafio Super Trunfo, focando na comparação entre duas cartas de cidades brasileiras usando estruturas de decisão `if` e `if-else`.

## 📋 Sobre o Desafio

O **Nível Novato** é uma evolução do cadastro básico de cartas, adicionando a funcionalidade de **comparação e determinação do vencedor** baseada em um atributo específico.

### 🎯 Objetivo Principal
Implementar a lógica de comparação entre duas cartas do Super Trunfo, determinando qual carta vence com base em um único atributo numérico escolhido.

## 🚀 Funcionalidades

### ✅ **Funcionalidades Implementadas:**
- 📝 **Cadastro de duas cartas** com todos os atributos obrigatórios
- 🧮 **Cálculos automáticos** de densidade populacional e PIB per capita
- ⚔️ **Sistema de comparação** usando estruturas condicionais
- 🏆 **Determinação do vencedor** com exibição clara do resultado
- 📊 **Informações adicionais** para análise complementar

### 📊 **Atributos de Cada Carta:**
| Atributo | Tipo | Exemplo | Descrição |
|----------|------|---------|-----------|
| Estado | `char[3]` | "SP", "RJ" | Sigla do estado |
| Código | `char[4]` | "A01", "B02" | Código da carta |
| Nome | `char[50]` | "SaoPaulo" | Nome da cidade |
| População | `int` | 12325000 | Número de habitantes |
| Área | `float` | 1521.11 | Área em km² |
| PIB | `float` | 699.28 | PIB em bilhões |
| Pontos Turísticos | `int` | 50 | Quantidade de atrações |

### 🧮 **Cálculos Automáticos:**
- **Densidade Populacional**: `População ÷ Área` (hab/km²)
- **PIB per Capita**: `PIB ÷ População` (bilhões per capita)

## ⚔️ Sistema de Comparação

### 🎯 **Atributo Escolhido: POPULAÇÃO**
No nível novato, a comparação é feita baseada na **população** das cidades:
- **Critério**: A carta com **maior população** vence
- **Lógica**: Usa estruturas `if-else` para determinar o vencedor

### 🏆 **Regras de Vitória:**
```c
if (populacao1 > populacao2) {
    // Carta 1 vence
} else if (populacao2 > populacao1) {
    // Carta 2 vence  
} else {
    // Empate
}
```

### 📊 **Outras Comparações (Informativas):**
- **Densidade Populacional**: Menor valor = melhor qualidade de vida
- **PIB per Capita**: Maior valor = maior renda individual

## 🚀 Como Usar

### ⚙️ **Pré-requisitos:**
- Compilador GCC instalado
- Terminal/Prompt de comando

### 📦 **Compilação:**
```bash
# Windows
gcc nivel_novato.c -o nivel_novato.exe

# Linux/macOS
gcc nivel_novato.c -o nivel_novato

# WSL
wsl gcc nivel_novato.c -o nivel_novato
```

### ▶️ **Execução:**
```bash
# Windows
nivel_novato.exe

# Linux/macOS
./nivel_novato

# WSL
wsl ./nivel_novato
```

### 🎮 **Fluxo de Uso:**
1. **Execute o programa**
2. **Cadastre a Carta 1**: Digite os dados da primeira cidade
3. **Cadastre a Carta 2**: Digite os dados da segunda cidade
4. **Veja os dados**: O programa exibe todas as informações cadastradas
5. **Resultado da comparação**: Descubra qual carta venceu na população
6. **Informações extras**: Analise densidade populacional e PIB per capita

## 💡 Exemplo Prático

### 📝 **Entrada de Dados:**
```
=== Cadastro da Carta 1 ===
Estado (ex: SP, RJ, MG): SP
Código da carta (ex: A01): A01
Nome da cidade: SaoPaulo
População: 12325000
Área (km²): 1521.11
PIB (em bilhões de reais): 699.28
Número de pontos turísticos: 50

=== Cadastro da Carta 2 ===
Estado (ex: SP, RJ, MG): RJ
Código da carta (ex: B02): B02
Nome da cidade: RioDeJaneiro
População: 6748000
Área (km²): 1200.25
PIB (em bilhões de reais): 300.50
Número de pontos turísticos: 30
```

### 📊 **Saída do Programa:**
```
============================================================
=== COMPARAÇÃO DE CARTAS ===
============================================================

Atributo de comparação: POPULAÇÃO
Critério: Maior população vence

Comparação de cartas (Atributo: População):
Carta 1 - SaoPaulo (SP): 12325000 habitantes
Carta 2 - RioDeJaneiro (RJ): 6748000 habitantes

🏆 RESULTADO: Carta 1 (SaoPaulo) venceu!
   SaoPaulo tem 5577000 habitantes a mais que RioDeJaneiro

============================================================
=== INFORMAÇÕES ADICIONAIS ===
============================================================

📊 Outros dados para análise:

DENSIDADE POPULACIONAL:
  SaoPaulo: 8103.45 hab/km²
  RioDeJaneiro: 5623.31 hab/km²
  → RioDeJaneiro tem menor densidade (melhor qualidade de vida)

PIB PER CAPITA:
  SaoPaulo: 0.000057 bilhões per capita
  RioDeJaneiro: 0.000045 bilhões per capita
  → SaoPaulo tem maior PIB per capita (maior renda individual)
```

## 🛠️ Detalhes Técnicos

### 📋 **Estruturas de Dados Utilizadas:**
```c
// Variáveis básicas para cada carta
char estado[3];           // Sigla do estado
char codigo[4];           // Código da carta
char nomeCidade[50];      // Nome da cidade
int populacao;            // População (números inteiros)
float area;               // Área em km²
float pib;                // PIB em bilhões
int pontosTuristicos;     // Pontos turísticos

// Cálculos automáticos
float densidadePopulacional = (float)populacao / area;
float pibPerCapita = pib / (float)populacao;
```

### 🧠 **Conceitos de C Aplicados:**
- **Estruturas condicionais**: `if`, `else if`, `else`
- **Conversão de tipos**: `(float)` casting para cálculos precisos
- **Entrada/Saída**: `scanf` e `printf` com formatação
- **Operadores relacionais**: `>`, `<` para comparações
- **Arrays de caracteres**: Para strings (estado, código, nome)

### 🎯 **Características do Nível Novato:**
- ✅ **Simplicidade**: Comparação de apenas um atributo
- ✅ **Clareza**: Código bem comentado e estruturado
- ✅ **Educativo**: Foca no aprendizado de estruturas condicionais
- ✅ **Funcional**: Sistema completo de cadastro e comparação

## 📚 Objetivos Educacionais

### 🎓 **Habilidades Desenvolvidas:**
- **Estruturas de decisão**: Domínio de `if-else`
- **Lógica de comparação**: Implementação de critérios de vitória
- **Tratamento de dados**: Cálculos matemáticos em C
- **Interface de usuário**: Saída clara e organizada
- **Boas práticas**: Código comentado e bem estruturado

### 💡 **Conceitos Aplicados:**
- **Programação estruturada**: Organização lógica do código
- **Tipos de dados**: Escolha adequada (`int`, `float`, `char[]`)
- **Operações matemáticas**: Cálculos com conversão de tipos
- **Formatação de saída**: Controle de precisão decimal

## 🔄 Próximos Passos

Este nível novato é a base para níveis mais avançados que incluirão:
- 🔄 **Nível Intermediário**: Comparação de múltiplos atributos
- 🏆 **Nível Avançado**: Sistema de pontuação e ranking
- 🎮 **Nível Mestre**: Interface interativa e escolha de atributos

## 👨‍💻 Informações do Projeto

**Disciplina**: ADA Tech - Estácio  
**Tema**: 3 - Estruturas de Decisão  
**Nível**: Novato  
**Arquivo**: `nivel_novato.c`  
**Linguagem**: C (ANSI C)  

---

> 🎯 **Foco do Nível Novato**: Dominar estruturas condicionais (`if-else`) através de um sistema prático de comparação de cartas, estabelecendo a base para desafios mais complexos nos próximos níveis!
