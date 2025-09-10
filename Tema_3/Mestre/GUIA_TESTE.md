# Guia de Teste - Super Trunfo Nível Mestre 🎮

Este guia fornece cenários de teste específicos para demonstrar todas as funcionalidades avançadas do **Nível Mestre**.

## 🚀 Compilação e Execução Rápida

### **Comandos de Compilação:**
```bash
# Navegar para a pasta Mestre
cd "C:\Users\GmZ\Documents\Git\ada-estacio\Tema_3\Mestre"

# Compilar
gcc super_trunfo.c -o super_trunfo.exe

# Executar
super_trunfo.exe

# Alternativa WSL (se necessário)
wsl bash -c "cd /mnt/c/Users/GmZ/Documents/Git/ada-estacio/Tema_3/Mestre && gcc super_trunfo.c -o super_trunfo && ./super_trunfo"
```

## 🎯 Cenários de Teste Específicos

### 📊 **Cartas Pré-cadastradas no Sistema:**
- **🇧🇷 Brasil**: 215M hab | 8.5M km² | PIB 2055.5bi | 45 pontos | Densidade: 25.24 hab/km²
- **🇺🇸 EUA**: 331M hab | 9.8M km² | PIB 21427.7bi | 63 pontos | Densidade: 33.67 hab/km²

---

## 🧪 Cenário 1: Comparação Populacional vs PIB

### **Entrada:**
```
Primeiro atributo: 1 (População)
Segundo atributo: 3 (PIB)
```

### **Resultado Esperado:**
```
🔍 População:
   Brasil: 215000000.00
   Estados Unidos: 331000000.00
   🏆 Vencedor: Estados Unidos

🔍 PIB:
   Brasil: 2055.50
   Estados Unidos: 21427.70
   🏆 Vencedor: Estados Unidos

📈 SOMA DOS ATRIBUTOS:
   Brasil: 215002055.50
   Estados Unidos: 331021427.70

🏆 RESULTADO FINAL:
   🎉 VENCEDOR: Estados Unidos!
```

**💡 Análise**: EUA vence em ambos os atributos, resultado previsível.

---

## 🧪 Cenário 2: Área vs Densidade Demográfica

### **Entrada:**
```
Primeiro atributo: 2 (Área)
Segundo atributo: 5 (Densidade Demográfica)
```

### **Resultado Esperado:**
```
🔍 Área:
   Brasil: 8515767.00
   Estados Unidos: 9833517.00
   🏆 Vencedor: Estados Unidos

🔍 Densidade Demográfica:
   Brasil: 25.24
   Estados Unidos: 33.67
   🏆 Vencedor: Brasil (menor densidade = melhor qualidade de vida)

📈 SOMA DOS ATRIBUTOS:
   Brasil: 8515792.24
   Estados Unidos: 9833550.67

🏆 RESULTADO FINAL:
   🎉 VENCEDOR: Estados Unidos!
```

**💡 Análise**: Mostra regra especial da densidade (menor vence) mas EUA ainda ganha pela área maior.

---

## 🧪 Cenário 3: Pontos Turísticos vs Densidade

### **Entrada:**
```
Primeiro atributo: 4 (Pontos Turísticos)
Segundo atributo: 5 (Densidade Demográfica)
```

### **Resultado Esperado:**
```
🔍 Pontos Turísticos:
   Brasil: 45.00
   Estados Unidos: 63.00
   🏆 Vencedor: Estados Unidos

🔍 Densidade Demográfica:
   Brasil: 25.24
   Estados Unidos: 33.67
   🏆 Vencedor: Brasil

📈 SOMA DOS ATRIBUTOS:
   Brasil: 70.24
   Estados Unidos: 96.67

🏆 RESULTADO FINAL:
   🎉 VENCEDOR: Estados Unidos!
```

**💡 Análise**: Cenário onde cada país vence um atributo, mas soma define o vencedor.

---

## 🧪 Cenário 4: Teste de Validação - Entrada Inválida

### **Teste 1: Opção Fora do Range**
```
Primeiro atributo: 8 (inválido)
```
**Resultado Esperado:**
```
❌ ERRO: Opção inválida! Por favor, escolha uma opção entre 1 e 5.
⏳ Pressione Enter para tentar novamente...
```

### **Teste 2: Atributo Duplicado**
```
Primeiro atributo: 1 (População)
Segundo atributo: 1 (População - mesmo atributo)
```
**Resultado Esperado:**
```
❌ ERRO: Você não pode escolher o mesmo atributo duas vezes!
🔄 O atributo 'População' já foi selecionado.
⏳ Pressione Enter para tentar novamente...
```

---

## 🧪 Cenário 5: Menu Dinâmico - Demonstração

### **Primeiro Menu (Completo):**
```
=== ESCOLHA DO PRIMEIRO ATRIBUTO ===
1️⃣  População
2️⃣  Área
3️⃣  PIB
4️⃣  Pontos Turísticos
5️⃣  Densidade Demográfica
```

### **Segundo Menu (Após escolher População):**
```
=== ESCOLHA DO SEGUNDO ATRIBUTO ===
⚠️  Nota: O primeiro atributo escolhido não aparece mais nas opções
2️⃣  Área
3️⃣  PIB
4️⃣  Pontos Turísticos
5️⃣  Densidade Demográfica
```

**💡 Demonstração**: O menu se adapta dinamicamente, removendo a opção já escolhida.

---

## 🎯 Roteiro de Demonstração (3 minutos)

### **Minuto 1: Apresentação**
1. Executar o programa
2. Mostrar as cartas pré-cadastradas (Brasil vs EUA)
3. Explicar: "Este é o nível mais avançado - comparação com DOIS atributos"

### **Minuto 2: Funcionalidade Principal**
1. Escolher primeiro atributo: **População (1)**
2. Mostrar segundo menu **sem a opção 1**
3. Escolher segundo atributo: **PIB (3)**
4. Explicar: "Menu dinâmico que se adapta às escolhas"

### **Minuto 3: Resultado Avançado**
1. Mostrar comparação individual de cada atributo
2. Destacar soma dos atributos
3. Resultado final baseado na soma total
4. Explicar: "Operador ternário para elegância do código"

---

## ⚡ Demonstração de Validação

### **Script de Teste Completo:**
```
1. Executar programa
2. Digitar "9" (inválido) → Ver mensagem de erro
3. Digitar "1" (População) → Aceitar
4. Digitar "1" novamente → Ver erro de duplicação
5. Digitar "3" (PIB) → Aceitar
6. Ver resultado completo
```

---

## 🏆 Pontos de Destaque Técnicos

### **📋 Para Demonstrar ao Professor:**

#### **1. Menu Dinâmico Real**
- Primeira execução mostra 5 opções
- Segunda execução mostra apenas 4 opções (exclui a escolhida)
- Implementação condicional no código

#### **2. Struct Customizada**
```c
typedef struct {
    char nome[50];
    int populacao;
    float area;
    // ... outros campos
} Carta;
```

#### **3. Operador Ternário Aninhado**
```c
char* vencedorFinal = (soma1 > soma2) ? carta1.nome : 
                     (soma2 > soma1) ? carta2.nome : 
                     "EMPATE";
```

#### **4. Funções Especializadas**
- `exibirMenuAtributos()` - Menu dinâmico
- `validarOpcao()` - Validação robusta
- `compararAtributo()` - Lógica de comparação
- `getValorAtributo()` - Extração de dados

#### **5. Validação em Múltiplas Camadas**
- Verificação de range (1-5)
- Verificação de duplicação
- Mensagens específicas para cada erro
- Loop até entrada válida

---

## 🎪 Demonstração Completa - Script

```bash
echo "🔨 COMPILANDO NÍVEL MESTRE..."
gcc super_trunfo.c -o super_trunfo.exe

echo "🎯 DEMONSTRAÇÃO 1: Funcionalidade Principal"
echo "Entrada: População(1) → PIB(3)"
# Executar e mostrar resultado

echo "🎯 DEMONSTRAÇÃO 2: Menu Dinâmico"
echo "Primeira execução: 5 opções"
echo "Segunda execução: 4 opções (sem a primeira escolha)"

echo "🎯 DEMONSTRAÇÃO 3: Validação Robusta"
echo "Teste com entrada inválida (8)"
echo "Teste com atributo duplicado"

echo "✅ NÍVEL MESTRE CONCLUÍDO!"
```

---

## 📊 Comparação com Níveis Anteriores

| Funcionalidade | Novato | Aventureiro | **Mestre** |
|---------------|--------|-------------|------------|
| Atributos Comparados | 1 fixo | 1 escolhido | **2 escolhidos** |
| Menu Interativo | ❌ | ✅ Simples | **✅ Dinâmico** |
| Validação | Básica | Média | **Robusta** |
| Structs | ❌ | ❌ | **✅ Customizada** |
| Operador Ternário | ❌ | ❌ | **✅ Aninhado** |
| Soma de Atributos | ❌ | ❌ | **✅ Implementada** |
| Funções Especializadas | Poucas | Algumas | **8 funções** |

---

> 🏆 **Este nível demonstra domínio completo de estruturas de decisão em C, integrando todos os conceitos em uma aplicação robusta e profissional!**
