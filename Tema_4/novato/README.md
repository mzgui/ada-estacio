# Movimentando as Peças do Xadrez - Nível Novato

## Descrição do Projeto

Este programa implementa a simulação básica de movimentos de três peças de xadrez utilizando as três estruturas de repetição fundamentais da linguagem C. Cada peça utiliza uma estrutura diferente para demonstrar as características específicas de cada tipo de loop.

## Objetivos Educacionais

- Compreensão prática das estruturas FOR, WHILE e DO-WHILE
- Aplicação de cada estrutura em contextos apropriados
- Desenvolvimento de lógica de repetição controlada
- Implementação de saída formatada e organizada

## Especificações Técnicas

### Configurações do Programa
- **Torre:** 5 movimentos para a direita (estrutura FOR)
- **Bispo:** 5 movimentos diagonais cima-direita (estrutura WHILE)
- **Rainha:** 8 movimentos para a esquerda (estrutura DO-WHILE)

### Representação de Movimento
- Cada movimento é representado por uma direção impressa
- Saída sequencial para cada peça
- Separação clara entre diferentes peças

## Estruturas de Repetição Implementadas

### 1. Torre - Estrutura FOR
```c
for (i = 1; i <= CASAS_TORRE; i++) {
    printf("Direita\n");
}
```
**Características:**
- Contador conhecido (5 iterações)
- Incremento automático
- Condição de parada clara
- Ideal para repetições com número definido

### 2. Bispo - Estrutura WHILE
```c
contador_while = 1;
while (contador_while <= CASAS_BISPO) {
    printf("Cima Direita\n");
    contador_while++;
}
```
**Características:**
- Condição testada antes da execução
- Controle manual do incremento
- Flexibilidade para condições complexas
- Representa movimento diagonal combinado

### 3. Rainha - Estrutura DO-WHILE
```c
contador_do = 1;
do {
    printf("Esquerda\n");
    contador_do++;
} while (contador_do <= CASAS_RAINHA);
```
**Características:**
- Execução garantida pelo menos uma vez
- Condição testada após a execução
- Útil quando pelo menos uma iteração é necessária

## Constantes Definidas

```c
const int CASAS_TORRE = 5;           // Torre: 5 casas para a direita
const int CASAS_BISPO = 5;           // Bispo: 5 casas diagonal (cima-direita)
const int CASAS_RAINHA = 8;          // Rainha: 8 casas para a esquerda
```

## Variáveis de Controle

```c
int i;                    // Contador para estrutura FOR (Torre)
int contador_while;       // Contador para estrutura WHILE (Bispo)
int contador_do;          // Contador para estrutura DO-WHILE (Rainha)
```

## Fluxo de Execução

### Sequência do Programa
1. **Inicialização:** Definição de constantes e variáveis
2. **Torre:** Execução do loop FOR com 5 iterações
3. **Bispo:** Execução do loop WHILE com controle manual
4. **Rainha:** Execução do loop DO-WHILE com validação posterior
5. **Resumo:** Exibição das informações finais

### Saída Esperada
```
=== SIMULACAO DE MOVIMENTO DAS PECAS DE XADREZ ===

TORRE (Estrutura FOR):
Posição inicial da Torre
Direita
Direita
Direita
Direita
Direita
Torre chegou ao destino!

BISPO (Estrutura WHILE):
Posição inicial do Bispo
Cima Direita
Cima Direita
Cima Direita
Cima Direita
Cima Direita
Bispo chegou ao destino!

RAINHA (Estrutura DO-WHILE):
Posição inicial da Rainha
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Rainha chegou ao destino!

=== RESUMO DOS MOVIMENTOS REALIZADOS ===
Torre: 5 casas para a direita (estrutura FOR)
Bispo: 5 casas na diagonal cima-direita (estrutura WHILE)
Rainha: 8 casas para a esquerda (estrutura DO-WHILE)
```

## Compilação e Execução

### Compilação
```bash
gcc -o desafio_novato desafio_novato.c
```

### Execução
```bash
./desafio_novato
```

## Conceitos de Programação Aplicados

### Estruturas de Controle
- Utilização apropriada de cada tipo de loop
- Controle de iterações com diferentes abordagens
- Validação de condições de parada

### Organização de Código
- Documentação clara com comentários
- Nomenclatura descritiva de variáveis
- Estrutura lógica e sequencial

### Boas Práticas
- Uso de constantes para valores fixos
- Separação clara entre diferentes seções
- Saída informativa e organizada

## Vantagens de Cada Estrutura

### FOR
- **Vantagem:** Sintaxe concisa para contadores
- **Aplicação:** Torre com 5 movimentos conhecidos
- **Benefício:** Código limpo e legível

### WHILE
- **Vantagem:** Flexibilidade na condição
- **Aplicação:** Bispo com movimento combinado
- **Benefício:** Controle explícito do incremento

### DO-WHILE
- **Vantagem:** Execução garantida
- **Aplicação:** Rainha com múltiplos movimentos
- **Benefício:** Lógica de validação posterior

## Requisitos Atendidos

### Funcionais
- Simulação de movimento de três peças específicas
- Utilização de estrutura diferente para cada peça
- Saída formatada conforme especificação
- Valores definidos por constantes no código

### Não Funcionais
- Performance eficiente sem atrasos
- Código bem documentado e comentado
- Legibilidade com nomenclatura descritiva
- Utilização apenas de variáveis inteiras

## Limitações do Nível Novato

- Valores fixos sem entrada do usuário
- Movimentos unidirecionais por peça
- Sem validação de tabuleiro real
- Estruturas de repetição básicas apenas

## Próximos Passos

Este programa serve como base para implementações mais avançadas que incluirão:
- Loops aninhados para movimentos complexos
- Validação de posições no tabuleiro
- Entrada dinâmica do usuário
- Múltiplas direções por peça

## Autor

Guilher Martinez  
Tema: 4 - Estruturas de Repetição em C  
Data: Setembro 2025
