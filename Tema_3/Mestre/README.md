# Super Trunfo - Nível Mestre 🏆

Este é o **desafio final** do Super Trunfo! O nível mestre implementa o sistema mais avançado de comparação com múltiplos atributos, menus dinâmicos e lógica complexa de decisão.

## 📋 Sobre o Desafio Final

O **Nível Mestre** representa a culminação de todo o aprendizado em estruturas de decisão, integrando:
- **Escolha de DOIS atributos** diferentes para comparação
- **Menus dinâmicos** que se adaptam às escolhas do usuário
- **Comparação avançada** com soma de atributos
- **Operadores ternários** para código mais elegante
- **Tratamento robusto** de entradas inválidas
- **Interface profissional** e intuitiva

## 🎯 Funcionalidades Avançadas

### ⚡ **Funcionalidades Implementadas:**
- 🎮 **Menu Dinâmico**: Primeiro menu mostra todas as opções, segundo menu exclui a opção já escolhida
- 🔍 **Comparação Dupla**: Análise individual de cada atributo escolhido
- 📊 **Soma de Atributos**: Cálculo da soma total para determinação do vencedor
- 🏆 **Determinação Inteligente**: Usa operador ternário para elegância do código
- ⚠️ **Validação Robusta**: Impede escolhas inválidas e duplicadas
- 📈 **Relatório Completo**: Exibição detalhada de todos os resultados

### 🗂️ **Estrutura de Dados Avançada:**
```c
typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadeDemografica;
} Carta;
```

### 🧠 **Algoritmos Implementados:**
- **Menu Dinâmico**: Exclusão condicional de opções
- **Validação Múltipla**: Verificação de range e duplicação
- **Comparação Condicional**: Regra especial para densidade demográfica
- **Operador Ternário**: Determinação elegante do vencedor

## 🎮 Como Usar

### ⚙️ **Pré-requisitos:**
- Compilador GCC instalado
- Terminal/Prompt de comando
- Sistema Windows, Linux ou macOS

### 📦 **Compilação:**
```bash
# Windows
gcc super_trunfo.c -o super_trunfo.exe

# Linux/macOS
gcc super_trunfo.c -o super_trunfo

# WSL
wsl gcc super_trunfo.c -o super_trunfo
```

### ▶️ **Execução:**
```bash
# Windows
super_trunfo.exe

# Linux/macOS
./super_trunfo

# WSL
wsl ./super_trunfo
```

### 🎯 **Fluxo de Uso:**
1. **Visualize as cartas**: O programa exibe Brasil vs Estados Unidos
2. **Escolha o 1º atributo**: Menu completo com 5 opções
3. **Escolha o 2º atributo**: Menu dinâmico (exclui o 1º atributo)
4. **Veja a comparação**: Análise individual de cada atributo
5. **Resultado final**: Baseado na soma dos dois atributos

## 💡 Exemplo Completo de Execução

### 🎮 **Cenário de Teste:**
**Cartas Pré-cadastradas:**
- **Brasil**: 215M hab, 8.5M km², PIB 2055.5bi, 45 pontos turísticos
- **Estados Unidos**: 331M hab, 9.8M km², PIB 21427.7bi, 63 pontos turísticos

### 📝 **Entrada de Dados:**
```
=== ESCOLHA DO PRIMEIRO ATRIBUTO ===
1️⃣  População
2️⃣  Área  
3️⃣  PIB
4️⃣  Pontos Turísticos
5️⃣  Densidade Demográfica

Digite sua escolha: 1

=== ESCOLHA DO SEGUNDO ATRIBUTO ===
⚠️  Nota: O primeiro atributo escolhido não aparece mais nas opções
2️⃣  Área
3️⃣  PIB  
4️⃣  Pontos Turísticos
5️⃣  Densidade Demográfica

Digite sua escolha: 3
```

### 📊 **Saída do Programa:**
```
📊 COMPARAÇÃO INDIVIDUAL DOS ATRIBUTOS:

🔍 População:
   Brasil: 215000000.00
   Estados Unidos: 331000000.00
   🏆 Vencedor: Estados Unidos

🔍 PIB:
   Brasil: 2055.50
   Estados Unidos: 21427.70
   🏆 Vencedor: Estados Unidos

📈 SOMA DOS ATRIBUTOS:
   Brasil: 215000000.00 + 2055.50 = 215002055.50
   Estados Unidos: 331000000.00 + 21427.70 = 331021427.70

🏆 RESULTADO FINAL:
   🎉 VENCEDOR: Estados Unidos!
   📊 Diferença: 116019372.20 pontos
```
