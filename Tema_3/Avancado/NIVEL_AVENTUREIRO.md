# Super Trunfo - Nível Aventureiro 🎯⚔️

Este arquivo implementa o **Nível Aventureiro** do Super Trunfo, introduzindo **interatividade avançada** e **lógica de comparação complexa** com estruturas de decisão aninhadas.

## 📋 Sobre o Desafio

O **Nível Aventureiro** representa um salto significativo em complexidade, implementando:
- 🎮 **Menu interativo** usando estruturas `switch-case`
- 🧠 **Estruturas de decisão aninhadas** com múltiplos níveis de análise
- ⚖️ **Regras específicas por atributo** incluindo lógica invertida
- 🔄 **Sistema de re-jogabilidade** com opções de continuar ou reiniciar
- 🛡️ **Tratamento robusto de erros** e validação de entrada

## 🎯 Funcionalidades Implementadas

### ✅ **Sistema Completo:**
- 📝 **Cadastro de Países**: Entrada completa de dados para duas cartas
- 🎮 **Menu Interativo**: 6 opções com interface visual atrativa
- ⚔️ **5 Modalidades de Batalha**: População, Área, PIB, Turismo, Densidade
- 🏆 **Sistema de Resultado**: Análise detalhada do vencedor
- 🔄 **Re-jogabilidade**: Opção de nova comparação ou novo cadastro
- 🛡️ **Tratamento de Erros**: Validação de entradas inválidas

### 📊 **Atributos das Cartas:**
| Atributo | Tipo | Critério de Vitória | Exemplo |
|----------|------|-------------------|---------|
| **Nome do País** | `char[50]` | Identificação | "Brasil", "Argentina" |
| **População** | `int` | ⬆️ Maior vence | 215.000.000 habitantes |
| **Área** | `float` | ⬆️ Maior vence | 8.515.767 km² 
| **PIB** | `float` | ⬆️ Maior vence | 2.608 bilhões de dólares |
| **Pontos Turísticos** | `int` | ⬆️ Maior vence | 35 pontos |
| **Densidade Demográfica** | `float` (calculada) | ⬇️ **MENOR vence** | 25.3 hab/km² |

## ⚔️ Sistema de Batalhas

### 🏆 **Modalidades de Comparação:**

#### **1️⃣ Batalha por População**
```c
// Análise aninhada com níveis de diferença
if (populacao1 > populacao2) {
    int diferenca = populacao1 - populacao2;
    if (diferenca > 1000000) {
        printf("💫 Diferença EXPRESSIVA!\n");
    } else if (diferenca > 100000) {
        printf("⭐ Diferença significativa\n");
    }
}
```
- **Critério**: Maior população vence
- **Análise**: Diferenças categorizadas (expressiva >1M, significativa >100K)

#### **2️⃣ Batalha por Área Territorial**
```c
// Análise geográfica aninhada
if (diferenca > 1000000) {
    printf("🌍 Diferença GIGANTESCA!\n");
} else if (diferenca > 100000) {
    printf("🗺️ Diferença muito grande\n");
}
```
- **Critério**: Maior área vence
- **Análise**: Categorização geográfica (gigantesca >1M km², grande >100K km²)

#### **3️⃣ Batalha Econômica (PIB)**
```c
// Análise econômica aninhada
if (diferenca > 1000) {
    printf("💎 Economia DOMINANTE!\n");
} else if (diferenca > 100) {
    printf("🏦 Economia superior\n");
}
```
- **Critério**: Maior PIB vence
- **Análise**: Classificação econômica (dominante >$1T, superior >$100B)

#### **4️⃣ Batalha Turística**
```c
// Análise turística aninhada
if (diferenca > 20) {
    printf("🌟 Destino EXCEPCIONAL!\n");
} else if (diferenca > 10) {
    printf("🎯 Destino atrativo\n");
}
```
- **Critério**: Mais pontos turísticos vencem
- **Análise**: Níveis de atratividade turística

#### **5️⃣ Batalha por Qualidade de Vida (Densidade)**
```c
// REGRA INVERTIDA - Menor densidade vence
if (densidadeDemografica1 < densidadeDemografica2) {
    if (densidadeDemografica1 < 50) {
        printf("🏞️ Densidade EXCELENTE!\n");
    } else if (densidadeDemografica1 < 200) {
        printf("🌳 Densidade boa\n");
    }
}
```
- **Critério**: ⚠️ **MENOR densidade vence** (regra invertida)
- **Análise**: Classificação de qualidade de vida

## 🎮 Menu Interativo

### 🖥️ **Interface do Menu:**
```
╔══════════════════════════════════════════════════════════════╗
║                    MENU DE COMPARAÇÃO                       ║
╚══════════════════════════════════════════════════════════════╝

🎯 Escolha o atributo para comparação:

   1️⃣  População (maior população vence)
   2️⃣  Área (maior área vence)
   3️⃣  PIB (maior PIB vence)
   4️⃣  Pontos Turísticos (mais pontos vencem)
   5️⃣  Densidade Demográfica (MENOR densidade vence)
   0️⃣  Sair do jogo
```

### 🔧 **Estrutura Switch-Case:**
```c
switch (opcaoMenu) {
    case 1: // População
        // Lógica complexa de comparação
        break;
    case 2: // Área
        // Análise geográfica aninhada
        break;
    case 3: // PIB
        // Comparação econômica
        break;
    case 4: // Turismo
        // Análise turística
        break;
    case 5: // Densidade (regra invertida)
        // Lógica invertida especial
        break;
    case 0: // Sair
        continuarJogo = 0;
        break;
    default: // Tratamento de erro
        printf("❌ OPÇÃO INVÁLIDA!\n");
        break;
}
```

## 💡 Exemplos de Uso

### 📝 **Exemplo de Entrada:**
```
📝 CADASTRO DA CARTA 1
🏳️  Nome do país: Brasil
👥 População (habitantes): 215000000
🗺️  Área (km²): 8515767.00
💰 PIB (em bilhões de dólares): 2608.00
🏛️  Pontos turísticos: 35

📝 CADASTRO DA CARTA 2
🏳️  Nome do país: Argentina
👥 População (habitantes): 45500000
🗺️  Área (km²): 2780400.00
💰 PIB (em bilhões de dólares): 630.00
🏛️  Pontos turísticos: 25
```

### 🏆 **Exemplo de Resultado (Opção 1 - População):**
```
🏆 BATALHA POR POPULAÇÃO 🏆
═══════════════════════════════════════════════════════════════
Brasil: 215000000 habitantes
Argentina: 45500000 habitantes
───────────────────────────────────────────────────────────────
🎉 RESULTADO: Brasil venceu!
📈 Vantagem: 169500000 habitantes a mais
💫 Diferença EXPRESSIVA de mais de 1 milhão de habitantes!
```

### 🌿 **Exemplo de Resultado (Opção 5 - Densidade):**
```
🏆 BATALHA POR QUALIDADE DE VIDA (Densidade Demográfica) 🏆
═══════════════════════════════════════════════════════════════
⚠️  ATENÇÃO: Nesta categoria, MENOR densidade vence!
   (Menor densidade = melhor qualidade de vida)
───────────────────────────────────────────────────────────────
Brasil: 25.25 hab/km²
Argentina: 16.37 hab/km²
───────────────────────────────────────────────────────────────
🎉 RESULTADO: Argentina venceu!
🌿 Vantagem: 8.88 hab/km² a menos (melhor qualidade de vida)
🏞️  Densidade EXCELENTE! País com muito espaço e qualidade de vida
```

## 🔧 Como Compilar e Executar

### 📦 **Compilação:**
```bash
# Windows
gcc nivel_aventureiro.c -o nivel_aventureiro.exe

# Linux/macOS
gcc nivel_aventureiro.c -o nivel_aventureiro

# WSL (Recomendado)
wsl gcc nivel_aventureiro.c -o nivel_aventureiro
```

### ▶️ **Execução:**
```bash
# Windows
nivel_aventureiro.exe

# Linux/macOS/WSL
./nivel_aventureiro
```

## 🧠 Conceitos Técnicos Avançados

### 🏗️ **Estruturas de Decisão Aninhadas:**
```c
// Exemplo de aninhamento de 3 níveis
if (populacao1 > populacao2) {                    // Nível 1: Comparação básica
    int diferenca = populacao1 - populacao2;
    if (diferenca > 1000000) {                     // Nível 2: Categorização
        printf("💫 Diferença EXPRESSIVA!\n");
        if (populacao1 > 100000000) {              // Nível 3: Análise adicional
            printf("🌍 Megapopulação mundial!\n");
        }
    }
}
```

### 🎮 **Sistema de Controle de Fluxo:**
```c
int continuarJogo = 1;
while (continuarJogo) {
    // Cadastro e comparação
    if (opcaoMenu == 0) {
        continuarJogo = 0;  // Sair do loop principal
    }
}
```

### 🛡️ **Tratamento de Erros:**
```c
// Validação de área para evitar divisão por zero
if (area1 > 0) {
    densidadeDemografica1 = (float)populacao1 / area1;
} else {
    densidadeDemografica1 = 0;
    printf("⚠️  Aviso: Área inválida\n");
}
```

### 🔄 **Sistema de Re-jogabilidade:**
```c
printf("🔄 Deseja fazer nova comparação? (s/n): ");
scanf(" %c", &jogarNovamente);

if (jogarNovamente == 's') {
    goto menu_comparacao;  // Pula cadastro, vai direto ao menu
}
```
