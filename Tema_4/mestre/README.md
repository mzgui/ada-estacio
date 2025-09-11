# Criando Movimentos Complexos - Nível Mestre

## Descrição do Projeto

Este programa representa o ápice da implementação de estruturas de repetição, combinando recursividade, loops complexos e técnicas avançadas de controle de fluxo. O foco está na substituição de loops simples por funções recursivas e na implementação de algoritmos sofisticados para o movimento do Cavalo.

## Objetivos Educacionais

- Substituição de loops por funções recursivas
- Implementação de loops complexos com múltiplas variáveis
- Utilização de controle de fluxo avançado (break, continue)
- Integração de múltiplas técnicas de repetição
- Otimização de algoritmos e prevenção de stack overflow

## Especificações Técnicas

### Configurações do Programa
- **Torre:** Recursividade (5 movimentos para a direita)
- **Bispo:** Recursividade + Loops aninhados (5 movimentos diagonal)
- **Rainha:** Recursividade (8 movimentos para a esquerda)
- **Cavalo:** Loops complexos com controle de fluxo (2 cima + 1 direita)

### Implementações Recursivas
- Funções recursivas para Torre, Bispo e Rainha
- Casos base para evitar recursão infinita
- Parâmetros de controle para número de movimentos

## Funções Recursivas Implementadas

### 1. Torre Recursiva
```c
void mover_torre_recursivo(int casas_restantes) {
    if (casas_restantes <= 0) {
        return;  // Caso base
    }
    printf("Direita\n");
    mover_torre_recursivo(casas_restantes - 1);  // Chamada recursiva
}
```

### 2. Bispo Recursivo
```c
void mover_bispo_recursivo(int casas_restantes) {
    if (casas_restantes <= 0) {
        return;  // Caso base
    }
    printf("Cima Direita\n");
    mover_bispo_recursivo(casas_restantes - 1);  // Chamada recursiva
}
```

### 3. Rainha Recursiva
```c
void mover_rainha_recursivo(int casas_restantes) {
    if (casas_restantes <= 0) {
        return;  // Caso base
    }
    printf("Esquerda\n");
    mover_rainha_recursivo(casas_restantes - 1);  // Chamada recursiva
}
```

## Loops Aninhados para o Bispo

### Implementação Adicional
```c
void mover_bispo_loops_aninhados() {
    int movimento_vertical, movimento_horizontal;
    
    // Loop externo: controla o movimento vertical (cima)
    for (movimento_vertical = 1; movimento_vertical <= CASAS_BISPO; movimento_vertical++) {
        // Loop interno: controla o movimento horizontal (direita)
        for (movimento_horizontal = 1; movimento_horizontal <= 1; movimento_horizontal++) {
            printf("Cima Direita\n");
        }
    }
}
```

## Movimento Complexo do Cavalo

### Algoritmo com Múltiplas Variáveis
```c
void mover_cavalo_complexo() {
    int i, j, k;
    int movimentos_realizados = 0;
    int etapa = 1; // Controla qual etapa do movimento em "L" está sendo executada
    
    // Loop principal com múltiplas variáveis de controle
    for (i = 1; i <= 10; i++) { // Loop com limite maior para demonstrar controle de fluxo
        
        // Primeira etapa: movimento para cima (2 casas)
        if (etapa == 1) {
            for (j = 1; j <= CASAS_CAVALO_CIMA; j++) {
                printf("Cima\n");
                movimentos_realizados++;
                
                // Controle de fluxo: se completou movimento vertical, passa para próxima etapa
                if (j == CASAS_CAVALO_CIMA) {
                    etapa = 2;
                    break; // Sai do loop interno
                }
            }
            continue; // Continua para próxima iteração do loop principal
        }
        
        // Segunda etapa: movimento para a direita (1 casa)
        if (etapa == 2) {
            for (k = 1; k <= CASAS_CAVALO_DIREITA; k++) {
                printf("Direita\n");
                movimentos_realizados++;
                
                // Controle de fluxo: se completou movimento horizontal, finaliza
                if (k == CASAS_CAVALO_DIREITA) {
                    etapa = 3; // Marca como finalizado
                    break; // Sai do loop interno
                }
            }
        }
        
        // Condição de parada: se completou o movimento em "L", sai do loop principal
        if (etapa == 3) {
            break;
        }
    }
}
```

## Constantes Globais

```c
const int CASAS_TORRE = 5;           // Torre: 5 casas para a direita
const int CASAS_BISPO = 5;           // Bispo: 5 casas diagonal (cima-direita)
const int CASAS_RAINHA = 8;          // Rainha: 8 casas para a esquerda
const int CASAS_CAVALO_CIMA = 2;     // Cavalo: 2 casas para cima
const int CASAS_CAVALO_DIREITA = 1;  // Cavalo: 1 casa para a direita
```

## Estrutura de Controle Avançada

### Controle de Fluxo Utilizado
- **break:** Saída prematura de loops internos
- **continue:** Pular para próxima iteração do loop principal
- **return:** Casos base em funções recursivas
- **if aninhados:** Controle de etapas do movimento

### Variáveis de Estado
- **etapa:** Controla qual fase do movimento está sendo executada
- **movimentos_realizados:** Contador de progresso
- **múltiplos contadores:** i, j, k para diferentes níveis de loop

## Fluxo de Execução Completo

### Sequência do Programa
1. **Inicialização:** Definição de constantes globais
2. **Torre (Recursiva):** Chamada da função recursiva
3. **Bispo (Recursiva):** Primeira implementação recursiva
4. **Bispo (Loops Aninhados):** Segunda implementação com loops
5. **Rainha (Recursiva):** Chamada da função recursiva
6. **Cavalo (Complexo):** Execução do algoritmo avançado
7. **Resumo:** Estatísticas e técnicas implementadas

### Saída Esperada
```
=== SIMULACAO AVANCADA DE MOVIMENTO DAS PECAS DE XADREZ ===

TORRE (Recursividade):
Direita
Direita
Direita
Direita
Direita

BISPO (Recursividade):
Cima Direita
Cima Direita
Cima Direita
Cima Direita
Cima Direita

BISPO (Loops Aninhados):
Cima Direita
Cima Direita
Cima Direita
Cima Direita
Cima Direita

RAINHA (Recursividade):
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda

CAVALO (Loops Complexos):
Cima
Cima
Direita

=== SIMULACAO CONCLUIDA ===
Tecnicas implementadas:
- Recursividade (Torre, Bispo, Rainha)
- Loops aninhados (Bispo)
- Loops complexos com controle de fluxo (Cavalo)
```

## Compilação e Execução

### Compilação
```bash
gcc -o xadrez xadrez.c
```

### Execução
```bash
./xadrez
```

## Conceitos Avançados Aplicados

### Recursividade
- **Vantagens:** Código mais limpo e elegante
- **Casos Base:** Prevenção de recursão infinita
- **Stack Management:** Controle de profundidade de chamadas
- **Equivalência:** Substituição direta de loops iterativos

### Controle de Fluxo Complexo
- **break:** Saída controlada de loops específicos
- **continue:** Pulo para próxima iteração
- **Coordenação:** Múltiplas variáveis de estado
- **Eficiência:** Evita iterações desnecessárias

### Loops Aninhados Avançados
- **Múltiplos Níveis:** Três níveis de aninhamento
- **Variáveis Independentes:** Controle granular de cada nível
- **Condições Complexas:** Múltiplas validações por nível
- **Estado Compartilhado:** Variáveis que persistem entre loops

## Análise de Performance

### Complexidade Recursiva
- **Torre:** O(n) com overhead de pilha
- **Bispo:** O(n) com overhead de pilha
- **Rainha:** O(n) com overhead de pilha
- **Stack Depth:** Máximo 8 chamadas (Rainha)

### Complexidade dos Loops
- **Bispo Aninhado:** O(n) efetivo, O(n²) potencial
- **Cavalo Complexo:** O(1) efetivo com otimização por break
- **Controle de Fluxo:** Redução significativa de iterações

### Otimizações Implementadas
- **Break Estratégico:** Evita loops desnecessários
- **Continue Inteligente:** Pula etapas irrelevantes
- **Casos Base:** Prevenção de stack overflow
- **Variáveis de Estado:** Minimiza recomputação

## Requisitos Específicos Atendidos

### Funcionais
- Recursividade implementada para Torre, Bispo e Rainha
- Loops complexos com múltiplas variáveis para o Cavalo
- Utilização de break e continue para controle de fluxo
- Loops aninhados adicionais para o Bispo

### Não Funcionais
- Performance eficiente com otimizações
- Documentação detalhada de técnicas avançadas
- Código legível com nomenclatura descritiva
- Prevenção de problemas de stack overflow

## Melhorias em Relação aos Níveis Anteriores

### Técnicas Implementadas
- **6 diferentes abordagens** de estruturas de repetição
- **Recursividade** como alternativa aos loops
- **Controle de fluxo avançado** com break/continue
- **Múltiplas variáveis** de controle simultâneas

### Organização de Código
- **Modularização** através de funções especializadas
- **Constantes globais** para configuração centralizada
- **Documentação avançada** com explicação de técnicas
- **Estrutura profissional** de programa

### Preparação para Conceitos Avançados
- **Base para otimização** de algoritmos
- **Introdução à programação funcional** (recursividade)
- **Controle de recursos** (stack management)
- **Técnicas de debugging** avançadas

## Desafios Técnicos Resolvidos

### Recursividade Segura
- Implementação de casos base apropriados
- Controle de profundidade de stack
- Equivalência funcional com loops iterativos

### Loops Complexos
- Coordenação de múltiplas variáveis de estado
- Utilização eficiente de break e continue
- Otimização de iterações desnecessárias

### Controle de Fluxo
- Transições suaves entre etapas de movimento
- Validação de estado em múltiplos pontos
- Prevenção de loops infinitos

## Aplicações Práticas

### Algoritmos Recursivos
- Traversal de árvores e grafos
- Algoritmos de busca em profundidade
- Processamento de estruturas hierárquicas

### Controle de Fluxo Avançado
- Otimização de algoritmos de busca
- Implementação de máquinas de estado
- Processamento de dados com múltiplas condições

### Loops Complexos
- Processamento de matrizes multidimensionais
- Algoritmos de otimização combinatória
- Simulações com múltiplas variáveis

## Próximos Desenvolvimentos

O código está preparado para extensões como:
- Implementação de tail recursion optimization
- Algoritmos de memoization para recursividade
- Estruturas de dados dinâmicas
- Programação orientada a objetos em C++

## Autor

Guilher Martinez  
Tema: 4 - Estruturas de Repetição em C  
Data: Setembro 2025
