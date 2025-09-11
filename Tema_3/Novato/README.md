# Estruturas de Decisão Básicas - Nível Novato

## Descrição do Projeto

Este programa implementa os conceitos fundamentais de estruturas de decisão em linguagem C, focando no uso básico de condicionais IF-ELSE e operadores relacionais. O objetivo é estabelecer uma base sólida para a lógica de programação e tomada de decisões algorítmicas.

## Objetivos Educacionais

- Compreender a sintaxe básica do IF-ELSE
- Aplicar operadores relacionais (==, !=, <, >, <=, >=)
- Implementar validação simples de entrada
- Desenvolver lógica sequencial de decisões
- Praticar formatação e apresentação de resultados

## Especificações Técnicas

### Funcionalidades Implementadas
- **Classificação de números** (positivo, negativo, zero)
- **Comparação de valores** entre dois números
- **Validação de intervalo** (número dentro de faixa específica)
- **Categorização simples** baseada em critérios únicos

### Estruturas de Decisão Utilizadas
- **IF simples** para validações básicas
- **IF-ELSE** para decisões binárias
- **IF-ELSE-IF** para múltiplas categorias
- **Condições compostas** com operadores lógicos básicos

## Implementação Detalhada

### 1. Estrutura IF Simples
```c
// Validação básica de entrada
if (numero > 0) {
    printf("Número é positivo\n");
}
```

### 2. Estrutura IF-ELSE
```c
// Decisão binária
if (numero % 2 == 0) {
    printf("Número é par\n");
} else {
    printf("Número é ímpar\n");
}
```

### 📊 **Outras Comparações (Informativas):**
```

### 3. Estrutura IF-ELSE-IF
```c
// Múltiplas categorias
if (numero > 0) {
    printf("Número positivo\n");
} else if (numero < 0) {
    printf("Número negativo\n");
} else {
    printf("Número é zero\n");
}
```

### 4. Condições Compostas
```c
// Validação de intervalo
if (numero >= 1 && numero <= 100) {
    printf("Número está no intervalo válido\n");
} else {
    printf("Número fora do intervalo\n");
}
```

## Operadores Relacionais Aplicados

### Operadores Básicos
- **==** (igual a): Comparação de igualdade
- **!=** (diferente de): Comparação de desigualdade
- **<** (menor que): Comparação de magnitude
- **>** (maior que): Comparação de magnitude
- **<=** (menor ou igual): Comparação inclusiva
- **>=** (maior ou igual): Comparação inclusiva

### Operadores Lógicos
- **&&** (E lógico): Ambas condições verdadeiras
- **||** (OU lógico): Pelo menos uma condição verdadeira
- **!** (NÃO lógico): Negação da condição

## Fluxo de Execução

### Sequência do Programa
1. **Apresentação** do programa ao usuário
2. **Solicitação de entrada** com prompt claro
3. **Leitura de dados** com validação básica
4. **Processamento** através de estruturas de decisão
5. **Apresentação de resultados** formatados
6. **Finalização** do programa

### Algoritmo Principal
```
INÍCIO
    EXIBIR mensagem de boas-vindas
    SOLICITAR entrada do usuário
    LER valor inserido
    
    SE valor > 0 ENTÃO
        EXIBIR "Número positivo"
    SENÃO SE valor < 0 ENTÃO
        EXIBIR "Número negativo"
    SENÃO
        EXIBIR "Número é zero"
    FIM SE
    
    EXIBIR mensagem de encerramento
FIM
```

## Estrutura do Código

### Organização Básica
```c
#include <stdio.h>

int main() {
    // Declaração de variáveis
    int numero;
    
    // Apresentação do programa
    printf("=== CLASSIFICADOR DE NÚMEROS ===\n");
    
    // Entrada de dados
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    // Estruturas de decisão
    if (numero > 0) {
        printf("O número %d é POSITIVO\n", numero);
    } else if (numero < 0) {
        printf("O número %d é NEGATIVO\n", numero);
    } else {
        printf("O número é ZERO\n");
    }
    
    // Finalização
    printf("Programa finalizado.\n");
    return 0;
}
```

## Casos de Teste Fundamentais

### Entrada e Saída Esperada

#### Teste 1 - Número Positivo
```
Entrada: 15
Saída: O número 15 é POSITIVO
```

#### Teste 2 - Número Negativo
```
Entrada: -8
Saída: O número -8 é NEGATIVO
```

#### Teste 3 - Zero
```
Entrada: 0
Saída: O número é ZERO
```

#### Teste 4 - Validação de Intervalo
```
Entrada: 50 (para intervalo 1-100)
Saída: O número 50 está no intervalo válido
```

## Conceitos Fundamentais Aplicados

### Lógica Booleana
- **Verdadeiro (1)** e **Falso (0)** em C
- **Avaliação de expressões** relacionais
- **Combinação de condições** com operadores lógicos
- **Precedência de operadores** em expressões compostas

### Controle de Fluxo
- **Execução condicional** de blocos de código
- **Fluxo sequencial** versus **fluxo condicional**
- **Aninhamento básico** de estruturas
- **Legibilidade** através de indentação adequada

### Validação de Dados
- **Verificação de tipos** durante entrada
- **Validação de intervalos** numéricos
- **Tratamento de casos especiais** (zero, extremos)
- **Feedback informativo** ao usuário

## Compilação e Execução

### Comando de Compilação
```bash
gcc -o decisao_basica decisao_basica.c
```

### Execução do Programa
```bash
./decisao_basica
```

### Compilação com Flags de Debug
```bash
gcc -g -Wall -Wextra -o decisao_basica decisao_basica.c
```

## Boas Práticas Implementadas

### Formatação de Código
- **Indentação consistente** (4 espaços ou 1 tab)
- **Espaçamento adequado** entre operadores
- **Quebras de linha** para melhor legibilidade
- **Comentários explicativos** em pontos-chave

### Nomenclatura Clara
- **Variáveis descritivas** (numero, resultado, opcao)
- **Constantes em maiúsculas** quando aplicável
- **Funções com verbos** para indicar ação
- **Consistência de estilo** em todo o código

### Estrutura Organizacional
- **Declarações no início** da função
- **Lógica agrupada** por funcionalidade
- **Saída formatada** e informativa
- **Finalização explícita** do programa

## Preparação para Níveis Avançados

### Conceitos Base Estabelecidos
- **Sintaxe fundamental** das estruturas condicionais
- **Operadores relacionais** e sua aplicação
- **Lógica sequencial** de tomada de decisões
- **Validação básica** de entrada de dados

### Próximos Desenvolvimentos
- **Aninhamento complexo** de estruturas (Aventureiro)
- **Múltiplas condições** simultâneas (Aventureiro)
- **Otimização com SWITCH-CASE** (Aventureiro)
- **Operador ternário** para concisão (Mestre)

## Exercícios de Fixação

### Exercícios Básicos
1. Implementar classificação de idade (criança, adolescente, adulto)
2. Criar validador de nota escolar (0-10, aprovado/reprovado)
3. Desenvolver calculadora de IMC com categorização
4. Programar sistema de desconto baseado em valor de compra

### Desafios de Extensão
1. Adicionar validação de entrada para caracteres inválidos
2. Implementar múltiplas classificações simultâneas
3. Criar menu simples com opções de escolha
4. Desenvolver sistema de login básico

## Depuração e Solução de Problemas

### Erros Comuns
- **Sintaxe incorreta** em condições (= ao invés de ==)
- **Ausência de chaves** em blocos de código
- **Lógica invertida** em condições
- **Tipos incompatíveis** em comparações

### Técnicas de Debug
- **Compilação com warnings** habilitados (-Wall)
- **Impressão de valores** intermediários
- **Teste com casos extremos** (zero, negativos, limites)
- **Verificação manual** da lógica implementada

## Aplicações Práticas

### Cenários Reais
- **Sistemas de autenticação** simples
- **Calculadoras com validação** de entrada
- **Jogos básicos** com decisões simples
- **Sistemas de classificação** automática

### Extensões Possíveis
- **Interface mais elaborada** com menus
- **Persistência de dados** em arquivos
- **Múltiplas operações** em sequência
- **Integração com outros temas** do curso

## Recursos de Aprendizagem

### Documentação Adicional
- Comentários detalhados no código fonte
- Exemplos de entrada e saída esperada
- Explicação passo a passo da lógica
- Referências para estudo complementar

### Suporte ao Desenvolvimento
- Código bem estruturado como modelo
- Casos de teste pré-definidos
- Sugestões de melhorias incrementais
- Conexões com conceitos futuros

---

## Informações do Arquivo

**Nome do Arquivo:** decisao_basica.c  
**Nível:** Novato  
**Tema:** 3 - Estruturas de Decisão em C  
**Autor:** Guilher Martinez  
**Data:** Setembro 2025  

Este programa estabelece os fundamentos necessários para compreensão e aplicação de estruturas de decisão, preparando o estudante para implementações mais complexas nos níveis subsequentes.
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
