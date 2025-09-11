# Estruturas de Decisão Combinadas - Nível Aventureiro

## Descrição do Projeto

Este programa implementa conceitos intermediários de estruturas de decisão em linguagem C, combinando múltiplas técnicas condicionais para criar soluções mais robustas e complexas. O foco está na integração de IF-ELSE aninhados, SWITCH-CASE e operadores lógicos compostos.

## Objetivos Educacionais

- Dominar estruturas de decisão aninhadas e encadeadas
- Implementar SWITCH-CASE para múltiplas opções
- Combinar operadores lógicos complexos (&&, ||, !)
- Desenvolver sistemas de menu interativo
- Aplicar validação avançada de entrada
- Otimizar lógica de decisão para casos complexos

## Especificações Técnicas

### Funcionalidades Implementadas
- **Sistema de menu interativo** com múltiplas opções
- **Classificação multi-critério** usando estruturas aninhadas
- **Validação robusta de entrada** com tratamento de erros
- **Combinação de estruturas** IF-ELSE e SWITCH-CASE
- **Operadores lógicos compostos** para condições complexas

### Estruturas de Decisão Avançadas
- **IF-ELSE aninhados** com até 3 níveis de profundidade
- **SWITCH-CASE** para seleção de opções de menu
- **Operadores lógicos** combinados (&&, ||, !)
- **Estruturas híbridas** misturando diferentes técnicas
- **Validação em camadas** para entrada de dados

## Implementação Detalhada

### 1. Sistema de Menu com SWITCH-CASE
```c
int opcao;
printf("Escolha uma opção:\n");
printf("1 - Classificar número\n");
printf("2 - Validar intervalo\n");
printf("3 - Calcular categoria\n");
printf("0 - Sair\n");
scanf("%d", &opcao);

switch(opcao) {
    case 1:
        classificar_numero();
        break;
    case 2:
        validar_intervalo();
        break;
    case 3:
        calcular_categoria();
        break;
    case 0:
        printf("Encerrando programa...\n");
        break;
    default:
        printf("Opção inválida!\n");
}
```

### 2. Estruturas IF-ELSE Aninhadas
```c
if (numero >= 0) {
    if (numero == 0) {
        printf("Número é zero\n");
    } else if (numero <= 100) {
        if (numero % 2 == 0) {
            printf("Número par entre 1 e 100\n");
        } else {
            printf("Número ímpar entre 1 e 100\n");
        }
    } else {
        printf("Número positivo maior que 100\n");
    }
} else {
    if (numero >= -100) {
        printf("Número negativo entre -100 e -1\n");
    } else {
        printf("Número negativo menor que -100\n");
    }
}
```

### 3. Operadores Lógicos Compostos
```c
// Validação complexa com múltiplas condições
if ((idade >= 18 && idade <= 65) && (renda > 1000 || tem_emprego == 1) && !tem_restricoes) {
    printf("Aprovado para o serviço\n");
} else if (idade < 18) {
    printf("Menor de idade - rejeitado\n");
} else if (idade > 65) {
    printf("Acima da idade limite - rejeitado\n");
} else if (renda <= 1000 && tem_emprego == 0) {
    printf("Renda insuficiente - rejeitado\n");
} else if (tem_restricoes) {
    printf("Possui restrições - rejeitado\n");
}
```

### 4. Validação Avançada de Entrada
```c
int validar_entrada(int min, int max) {
    int valor;
    int valido = 0;
    
    do {
        printf("Digite um valor entre %d e %d: ", min, max);
        if (scanf("%d", &valor) == 1) {
            if (valor >= min && valor <= max) {
                valido = 1;
            } else {
                printf("Valor fora do intervalo permitido!\n");
            }
        } else {
            printf("Entrada inválida! Digite apenas números.\n");
            // Limpar buffer de entrada
            while (getchar() != '\n');
        }
    } while (!valido);
    
    return valor;
}
```

## Casos de Uso Implementados

### 1. Sistema de Classificação Acadêmica
```c
void classificar_nota() {
    float nota = validar_nota(0.0, 10.0);
    
    if (nota >= 9.0) {
        printf("Conceito A - Excelente\n");
        if (nota == 10.0) {
            printf("Nota máxima alcançada!\n");
        }
    } else if (nota >= 7.0) {
        printf("Conceito B - Bom\n");
    } else if (nota >= 5.0) {
        printf("Conceito C - Regular\n");
        printf("Recomenda-se estudo adicional\n");
    } else {
        printf("Conceito D - Insuficiente\n");
        printf("Necessária recuperação\n");
    }
}
```

### 2. Calculadora de Categoria de IMC
```c
void calcular_imc() {
    float peso, altura, imc;
    
    printf("Digite o peso (kg): ");
    scanf("%f", &peso);
    printf("Digite a altura (m): ");
    scanf("%f", &altura);
    
    if (peso > 0 && altura > 0) {
        imc = peso / (altura * altura);
        
        if (imc < 18.5) {
            printf("IMC: %.2f - Abaixo do peso\n", imc);
        } else if (imc >= 18.5 && imc < 25.0) {
            printf("IMC: %.2f - Peso normal\n", imc);
        } else if (imc >= 25.0 && imc < 30.0) {
            printf("IMC: %.2f - Sobrepeso\n", imc);
        } else {
            printf("IMC: %.2f - Obesidade\n", imc);
        }
    } else {
        printf("Valores inválidos para peso ou altura\n");
    }
}
```

### 3. Sistema de Login Multi-Nível
```c
void sistema_login() {
    char usuario[20], senha[20];
    int tentativas = 0;
    int max_tentativas = 3;
    int sucesso = 0;
    
    printf("=== SISTEMA DE LOGIN ===\n");
    
    do {
        printf("Usuário: ");
        scanf("%s", usuario);
        printf("Senha: ");
        scanf("%s", senha);
        
        if (strcmp(usuario, "admin") == 0 && strcmp(senha, "123456") == 0) {
            printf("Login de ADMINISTRADOR realizado com sucesso!\n");
            sucesso = 1;
        } else if (strcmp(usuario, "user") == 0 && strcmp(senha, "user123") == 0) {
            printf("Login de USUÁRIO realizado com sucesso!\n");
            sucesso = 1;
        } else {
            tentativas++;
            printf("Credenciais inválidas! Tentativa %d de %d\n", tentativas, max_tentativas);
            
            if (tentativas >= max_tentativas) {
                printf("Número máximo de tentativas excedido. Acesso bloqueado.\n");
                break;
            }
        }
    } while (!sucesso && tentativas < max_tentativas);
}
```

## Estrutura do Menu Principal
```c
void exibir_menu() {
    printf("\n=== SISTEMA DE DECISÕES AVANÇADAS ===\n");
    printf("1 - Classificação de Números\n");
    printf("2 - Calculadora de IMC\n");
    printf("3 - Sistema de Login\n");
    printf("4 - Validação de Idade\n");
    printf("5 - Classificação Acadêmica\n");
    printf("6 - Calculadora de Desconto\n");
    printf("0 - Sair\n");
    printf("======================================\n");
    printf("Escolha uma opção: ");
}

int main() {
    int opcao;
    
    do {
        exibir_menu();
        opcao = validar_entrada(0, 6);
        
        switch(opcao) {
            case 1:
                classificar_numero();
                break;
            case 2:
                calcular_imc();
                break;
            case 3:
                sistema_login();
                break;
            case 4:
                validar_idade();
                break;
            case 5:
                classificar_nota();
                break;
            case 6:
                calcular_desconto();
                break;
            case 0:
                printf("Encerrando o programa...\n");
                break;
        }
        
        if (opcao != 0) {
            printf("\nPressione Enter para continuar...");
            getchar();
            getchar(); // Captura o Enter
        }
        
    } while (opcao != 0);
    
    return 0;
}
```

## Operadores Lógicos Avançados

### Tabela de Precedência
| Operador | Precedência | Associatividade | Exemplo |
|----------|-------------|-----------------|---------|
| `!` (NOT) | Alta | Direita para esquerda | `!condicao` |
| `&&` (AND) | Média | Esquerda para direita | `a && b` |
| `\|\|` (OR) | Baixa | Esquerda para direita | `a \|\| b` |

### Avaliação de Curto-Circuito
```c
// AND: Se a primeira condição for falsa, a segunda não é avaliada
if (ponteiro != NULL && ponteiro->valor > 0) {
    // Código seguro
}

// OR: Se a primeira condição for verdadeira, a segunda não é avaliada
if (usuario_admin || (senha_correta && permissoes_especiais)) {
    // Acesso permitido
}
```

## Compilação e Execução

### Comando de Compilação
```bash
gcc -o decisao_avancada decisao_avancada.c
```

### Execução do Programa
```bash
./decisao_avancada
```

### Compilação com Flags Avançadas
```bash
gcc -g -Wall -Wextra -std=c99 -o decisao_avancada decisao_avancada.c
```

## Boas Práticas Avançadas

### Organização de Código
- **Modularização** através de funções específicas
- **Validação centralizada** em funções auxiliares
- **Separação de responsabilidades** entre menu e lógica
- **Tratamento consistente** de erros

### Técnicas de Programação
- **DRY (Don't Repeat Yourself)** - evitar código duplicado
- **Validação defensiva** - sempre verificar entradas
- **Feedback informativo** - mensagens claras ao usuário
- **Estruturas bem aninhadas** - até 3 níveis de profundidade

### Performance e Legibilidade
- **Avaliação de curto-circuito** para otimização
- **Condições mais prováveis primeiro** em IF-ELSE-IF
- **Agrupamento lógico** de condições relacionadas
- **Comentários explicativos** em lógica complexa

## Casos de Teste Abrangentes

### Teste do Sistema de Menu
```
Entrada: 1 (Classificação de Números)
Entrada: 42
Saída: Número positivo par entre 1 e 100
```

### Teste de Validação Robusta
```
Entrada: abc (entrada inválida)
Saída: Entrada inválida! Digite apenas números.
Entrada: 150 (fora do intervalo 0-100)
Saída: Valor fora do intervalo permitido!
Entrada: 75 (válida)
Saída: Valor aceito
```

### Teste de Condições Compostas
```
Entrada: idade=25, renda=2000, emprego=sim, restrições=não
Saída: Aprovado para o serviço
```

## Preparação para Nível Mestre

### Conceitos Consolidados
- **Estruturas aninhadas** até 3 níveis
- **SWITCH-CASE** para múltiplas opções
- **Operadores lógicos** combinados
- **Validação robusta** de entrada

### Próximos Desenvolvimentos
- **Operador ternário** para concisão (Mestre)
- **Otimização de estruturas** complexas (Mestre)
- **Técnicas de refatoração** avançadas (Mestre)
- **Padrões de design** em C (Mestre)

## Exercícios de Aprofundamento

### Desafios Intermediários
1. Implementar sistema de notas com média ponderada
2. Criar calculadora de impostos com múltiplas faixas
3. Desenvolver sistema de reservas com validação complexa
4. Programar jogo de adivinhação com dicas inteligentes

### Projetos de Extensão
1. Sistema de biblioteca com busca avançada
2. Calculadora científica com operações condicionais
3. Sistema de votação eletrônica com validação
4. Simulador de caixa eletrônico completo

## Aplicações Profissionais

### Cenários Empresariais
- **Sistemas de autorização** com múltiplos níveis
- **Calculadoras de preços** com regras complexas
- **Validadores de dados** para formulários
- **Sistemas de classificação** automática

### Integração com Outros Sistemas
- **APIs** com validação de parâmetros
- **Bancos de dados** com regras de negócio
- **Interfaces gráficas** com lógica condicional
- **Sistemas embarcados** com decisões em tempo real

---

## Informações do Arquivo

**Nome do Arquivo:** decisao_avancada.c  
**Nível:** Aventureiro  
**Tema:** 3 - Estruturas de Decisão em C  
**Autor:** Guilher Martinez  
**Data:** Setembro 2025  

Este programa consolida os conhecimentos intermediários de estruturas de decisão, preparando o estudante para otimizações avançadas e técnicas profissionais de programação no nível Mestre.
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