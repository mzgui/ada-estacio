# Tema 3 - Estruturas de Decisão Avançadas 🎯

Este projeto apresenta uma coleção abrangente de exercícios práticos em **C** demonstrando o uso avançado de estruturas de decisão, operadores lógicos e implementação de algoritmos complexos.

## 📋 Visão Geral do Projeto

O **Tema 3** explora conceitos avançados de programação em C, com foco em estruturas condicionais complexas, lógica de programação e implementação de sistemas interativos. Este material foi desenvolvido como parte do curso **ADS Tech - Estácio** e representa um aprofundamento significativo nos fundamentos da programação estruturada.

### 🎯 **Objetivos Educacionais:**
- Dominar estruturas de decisão aninhadas e encadeadas
- Implementar operadores lógicos complexos (`&&`, `||`, `!`)
- Desenvolver sistemas interativos com menus
- Criar algoritmos de tomada de decisão baseados em múltiplos critérios
- Aplicar boas práticas de programação estruturada

## 🗂️ Estrutura do Projeto

### 📁 **Arquivos Implementados:**

| Arquivo | Foco | Conceitos Abordados | Status |
|---------|------|-------------------|--------|
| `estruturas_aninhadas.c` | Estruturas IF aninhadas | Condições múltiplas, validação complexa | ✅ Completo |
| `Estruturas_encadeadas.c` | IF-ELSE encadeados | Classificação, categorização | ✅ Completo |
| `Operadores_Logicos.c` | Operadores lógicos | AND, OR, NOT, precedência | ✅ Completo |
| `Menu_interativo.c` | Interface de usuário | Switch-case, interatividade | ✅ Completo |
| `jokenpo.c` | Jogo Pedra/Papel/Tesoura | Lógica de jogo, aleatoriedade | ✅ Completo |
| **`nivel_aventureiro.c`** | **Super Trunfo Interativo** | **Menu dinâmico, aninhamento avançado** | ⭐ **NOVO!** |

---

## 🌟 **DESTAQUE: Super Trunfo Nível Aventureiro** ⭐

### 6️⃣ **Super Trunfo Interativo** (`nivel_aventureiro.c`)

#### **🚀 Projeto Principal - Nível Aventureiro**
O **Super Trunfo Nível Aventureiro** representa o ápice técnico desta coleção, implementando um sistema completo de jogo de cartas interativo com funcionalidades avançadas.

#### **🎯 Funcionalidades Revolucionárias:**
- ✅ **Sistema de Menu Dinâmico**: Interface visual rica com 6 opções interativas
- ✅ **Cadastro Completo de Países**: Entrada robusta de dados com validação
- ✅ **5 Modalidades de Batalha**: População, Área, PIB, Turismo, Densidade
- ✅ **Estruturas Aninhadas Avançadas**: Até 4 níveis de profundidade analítica
- ✅ **Regra Invertida Especial**: Densidade demográfica com lógica única
- ✅ **Sistema de Re-jogabilidade**: Opções de continuar ou reiniciar
- ✅ **Tratamento Robusto de Erros**: Validação completa de entradas

#### **🧠 Complexidade Técnica:**
```c
// Exemplo: Estrutura aninhada com 4 níveis de análise
switch (opcaoMenu) {
    case 1: // População
        if (populacao1 > populacao2) {                    // Nível 1: Comparação
            int diferenca = populacao1 - populacao2;
            if (diferenca > 1000000) {                     // Nível 2: Categorização
                printf("💫 Diferença EXPRESSIVA!\n");
                if (populacao1 > 100000000) {              // Nível 3: Megapopulação
                    if (densidade < 50) {                  // Nível 4: Qualidade urbana
                        printf("🌟 País modelo!\n");
                    }
                }
            }
        }
        break;
    case 5: // Densidade (REGRA INVERTIDA)
        if (densidade1 < densidade2) { // MENOR vence!
            printf("🏞️ Melhor qualidade de vida!\n");
        }
        break;
}
```

#### **🎮 Interface Visual Avançada:**
```
╔══════════════════════════════════════════════════════════════╗
║                 SUPER TRUNFO - NÍVEL AVENTUREIRO             ║
║                    Interatividade Avançada                   ║
╚══════════════════════════════════════════════════════════════╝

🎯 Escolha o atributo para comparação:

   1️⃣  População (maior população vence)
   2️⃣  Área (maior área vence)  
   3️⃣  PIB (maior PIB vence)
   4️⃣  Pontos Turísticos (mais pontos vencem)
   5️⃣  Densidade Demográfica (MENOR densidade vence)
   0️⃣  Sair do jogo
```

#### **📊 Estatísticas Técnicas:**
- **Linhas de Código**: 400+ linhas de C puro
- **Estruturas Switch**: 1 principal com 6 casos complexos
- **Níveis de Aninhamento**: Até 4 níveis de IF aninhados
- **Tratamento de Casos**: 15+ cenários diferentes de comparação
- **Interface Rica**: 50+ comandos printf formatados com emojis

#### **🏆 Modalidades de Batalha:**
1. **🏙️ População**: Análise demográfica com categorização por magnitude
2. **🗺️ Área**: Comparação territorial com classificação geográfica  
3. **💰 PIB**: Batalha econômica com análise de dominância fiscal
4. **🏛️ Turismo**: Comparação de atratividade com níveis de excelência
5. **🌿 Densidade**: **Regra invertida** - menor densidade = melhor qualidade de vida

---

## 🔧 Análise Técnica Detalhada

### 1️⃣ **Estruturas Aninhadas** (`estruturas_aninhadas.c`)

#### **📊 Funcionalidades Implementadas:**
- ✅ **Sistema de Qualificação para Desconto**: Avalia idade e renda
- ✅ **Programa de Benefícios Sociais**: Múltiplos critérios (idade, renda, dependentes)
- ✅ **Sistema Bancário**: Menu com operações básicas
- ✅ **Conversor de Dias**: Implementação com IF-ELSE vs SWITCH-CASE

#### **🧠 Conceitos Demonstrados:**
```c
// Estrutura aninhada complexa - 3 níveis de profundidade
if (idade >= 18 && idade <= 65) {
    if (renda < 3000.0) {
        if (dependentes > 2) {
            printf("Qualificado para benefícios\n");
        }
    }
}
```

#### **📈 Casos de Uso:**
- **Desconto Especial**: idade < 18 OU > 60 E renda < R$ 2.000
- **Benefícios Sociais**: 18 ≤ idade ≤ 65 E renda < R$ 3.000 E dependentes > 2
- **Sistema Bancário**: Menu com SWITCH-CASE para operações

---

### 2️⃣ **Estruturas Encadeadas** (`Estruturas_encadeadas.c`)

#### **📊 Funcionalidades Implementadas:**
- ✅ **Classificador de Idades**: Criança, Adolescente, Adulto, Idoso
- ✅ **Sistema de Notas**: Conversão numérica para conceitos A-F

#### **🧠 Conceitos Demonstrados:**
```c
// Estrutura encadeada para classificação
if (nota >= 90) {
    printf("Sua nota é A\n");
} else if (nota >= 80) {
    printf("Sua nota é B\n");
} else if (nota >= 70) {
    printf("Sua nota é C\n");
} // ... continuação lógica
```

#### **📈 Casos de Uso:**
- **Classificação Etária**: < 12 (criança), 12-17 (adolescente), 18-59 (adulto), ≥ 60 (idoso)
- **Sistema de Notas**: 90+ (A), 80-89 (B), 70-79 (C), 60-69 (D), < 60 (F)

---

### 3️⃣ **Operadores Lógicos** (`Operadores_Logicos.c`)

#### **📊 Funcionalidades Implementadas:**
- ✅ **Operador AND (`&&`)**: Validação de múltiplas condições positivas
- ✅ **Operador OR (`||`)**: Verificação de pelo menos uma condição verdadeira
- ✅ **Operador NOT (`!`)**: Negação de condições
- ✅ **Sistema Meteorológico**: Avaliação de condições climáticas complexas

#### **🧠 Conceitos Demonstrados:**
```c
// Exemplo avançado: Múltiplos operadores lógicos
if (temperatura >= 20.0 && temperatura <= 30.0 && umidade > 50.0) {
    printf("Condições favoráveis\n");
} else {
    printf("Condições não favoráveis\n");
}
```

#### **📈 Casos de Uso:**
- **Validação Simples**: `a > 0 && b > 0` (ambos positivos)
- **Condição Alternativa**: `a > 0 || b > 0` (pelo menos um positivo)
- **Negação**: `!(a > 0)` (não é positivo)
- **Sistema Complexo**: Temperatura (20-30°C) E Umidade (> 50%)

---

### 4️⃣ **Menu Interativo** (`Menu_interativo.c`)

#### **📊 Funcionalidades Implementadas:**
- ✅ **Interface de Menu**: Sistema de navegação com SWITCH-CASE
- ✅ **Jogo de Adivinhação**: Geração de números aleatórios
- ✅ **Sistema de Regras**: Documentação integrada ao programa
- ✅ **Tratamento de Entrada**: Validação de opções inválidas

#### **🧠 Conceitos Demonstrados:**
```c
switch (opcao) {
    case 1:
        srand(time(0));
        numeroSecreto = rand() % 10 + 1;
        // Lógica do jogo
        break;
    case 2:
        // Exibição de regras
        break;
    default:
        printf("Opção inválida\n");
}
```

#### **📈 Funcionalidades do Sistema:**
1. **Iniciar Jogo**: Geração aleatória de números (1-10)
2. **Ver Regras**: Documentação integrada
3. **Sair**: Finalização controlada
4. **Validação**: Tratamento de entradas inválidas

---

### 5️⃣ **Jogo Jokenpô** (`jokenpo.c`)

#### **📊 Status Atual:**
- 📝 **Arquivo Preparado**: Estrutura criada para implementação
- 🎮 **Funcionalidade Planejada**: Jogo Pedra, Papel, Tesoura
- 🤖 **Recursos Previstos**: IA vs Jogador, pontuação, múltiplas rodadas

#### **💡 Potencial de Implementação:**
```c
// Estrutura prevista para o jogo
switch (jogadaJogador) {
    case 1: // Pedra
        if (jogadaComputador == 3) resultado = "Vitória";
        break;
    case 2: // Papel  
        if (jogadaComputador == 1) resultado = "Vitória";
        break;
    case 3: // Tesoura
        if (jogadaComputador == 2) resultado = "Vitória";
        break;
}
```

---

## 🚀 Como Compilar e Executar

### ⚙️ **Pré-requisitos:**
- Compilador GCC instalado
- Terminal/Prompt de comando
- Sistema Windows, Linux ou macOS

### 📦 **Compilação Individual:**
```bash
# Windows
gcc estruturas_aninhadas.c -o estruturas_aninhadas.exe
gcc Estruturas_encadeadas.c -o Estruturas_encadeadas.exe
gcc Operadores_Logicos.c -o Operadores_Logicos.exe
gcc Menu_interativo.c -o Menu_interativo.exe
gcc jokenpo.c -o jokenpo.exe
gcc nivel_aventureiro.c -o nivel_aventureiro.exe  # ⭐ NOVO!

# Linux/macOS
gcc estruturas_aninhadas.c -o estruturas_aninhadas
gcc Estruturas_encadeadas.c -o Estruturas_encadeadas
gcc Operadores_Logicos.c -o Operadores_Logicos
gcc Menu_interativo.c -o Menu_interativo
gcc jokenpo.c -o jokenpo
gcc nivel_aventureiro.c -o nivel_aventureiro      # ⭐ NOVO!

# WSL (Recomendado para Windows)
wsl gcc nivel_aventureiro.c -o nivel_aventureiro  
wsl gcc estruturas_aninhadas.c -o estruturas_aninhadas
```