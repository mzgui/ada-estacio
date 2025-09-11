# Movimentando o Cavalo - Nível Aventureiro

## Descrição do Projeto

Este programa expande a simulação de movimentos de xadrez introduzindo o movimento em "L" característico do Cavalo. O foco principal está na implementação de loops aninhados, demonstrando como estruturas de repetição podem ser combinadas para criar comportamentos mais complexos.

## Objetivos Educacionais

- Implementação de loops aninhados (FOR + WHILE)
- Coordenação de múltiplas estruturas de repetição
- Desenvolvimento de algoritmos de movimento complexo
- Aplicação prática de estruturas combinadas

## Especificações Técnicas

### Configurações do Programa
- **Torre:** 5 movimentos para a direita (estrutura FOR)
- **Bispo:** 5 movimentos diagonais cima-direita (estrutura WHILE)
- **Rainha:** 8 movimentos para a esquerda (estrutura DO-WHILE)
- **Cavalo:** Movimento em "L" - 2 casas para baixo + 1 casa para a esquerda (loops aninhados)

### Movimento do Cavalo
- **Primeira etapa:** 2 casas para baixo (loop FOR externo)
- **Segunda etapa:** 1 casa para a esquerda (loop WHILE interno)
- **Característica:** Movimento não linear em formato "L"

## Estruturas de Repetição Implementadas

### Peças Básicas (do Nível Novato)
Mantém as implementações anteriores:
- Torre com FOR
- Bispo com WHILE  
- Rainha com DO-WHILE

### Cavalo - Loops Aninhados
```c
// Loop FOR externo: controla o movimento de 2 casas para baixo
for (i = 1; i <= CASAS_CAVALO_BAIXO; i++) {
    printf("Baixo\n");
}

// Loop WHILE interno: controla o movimento de 1 casa para a esquerda
contador_cavalo_while = 1;
while (contador_cavalo_while <= CASAS_CAVALO_ESQUERDA) {
    printf("Esquerda\n");
    contador_cavalo_while++;
}
```

## Constantes Específicas do Cavalo

```c
const int CASAS_CAVALO_BAIXO = 2;        // Cavalo: 2 casas para baixo
const int CASAS_CAVALO_ESQUERDA = 1;     // Cavalo: 1 casa para a esquerda
```

## Variáveis de Controle Adicionais

```c
int contador_cavalo_while;    // Contador para estrutura WHILE aninhada (Cavalo)
```

## Algoritmo do Movimento em "L"

### Lógica Implementada
1. **Fase Vertical:** Movimento de 2 casas para baixo
   - Utiliza loop FOR para controle preciso
   - Execução sequencial de 2 movimentos "Baixo"

2. **Fase Horizontal:** Movimento de 1 casa para a esquerda
   - Utiliza loop WHILE para demonstrar controle manual
   - Execução de 1 movimento "Esquerda"

### Características do Algoritmo
- **Separação Clara:** Duas fases distintas de movimento
- **Estruturas Diferentes:** FOR e WHILE combinados
- **Sequência Fixa:** Sempre vertical primeiro, depois horizontal

## Fluxo de Execução Expandido

### Sequência Completa do Programa
1. **Inicialização:** Definição de todas as constantes e variáveis
2. **Torre:** Execução do loop FOR (5 movimentos direita)
3. **Bispo:** Execução do loop WHILE (5 movimentos diagonal)
4. **Rainha:** Execução do loop DO-WHILE (8 movimentos esquerda)
5. **Cavalo:** Execução dos loops aninhados (movimento em "L")
6. **Resumo:** Exibição das informações finais

### Saída Específica do Cavalo
```
CAVALO (Loops Aninhados):
Posição inicial do Cavalo
Baixo
Baixo
Esquerda
Cavalo chegou ao destino!
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

### Loops Aninhados
- **Conceito:** Estrutura de repetição dentro de outra
- **Aplicação:** Coordenação de movimento vertical e horizontal
- **Benefício:** Maior controle sobre sequências complexas

### Coordenação de Estruturas
- **Sequenciamento:** Execução ordenada de diferentes tipos de loop
- **Sincronização:** Controle independente de cada fase do movimento
- **Modularidade:** Separação clara de responsabilidades

### Complexidade Algorítmica
- **Loops Simples:** O(n) para cada peça básica
- **Loops Aninhados:** O(n*m) potencial, mas implementação sequencial O(n+m)
- **Eficiência:** Mantém performance linear

## Requisitos Específicos Atendidos

### Funcionais
- Movimento do Cavalo implementado com loops aninhados
- Utilização obrigatória de FOR + WHILE
- Saída formatada para movimento em "L"
- Separação clara do movimento do Cavalo

### Técnicos
- Loops aninhados com FOR externo obrigatório
- WHILE ou DO-WHILE como estrutura interna
- Documentação clara da lógica aninhada
- Manutenção das implementações anteriores

## Vantagens dos Loops Aninhados

### Controle Granular
- Controle independente de cada fase do movimento
- Flexibilidade para modificar cada etapa separadamente
- Facilidade de extensão para movimentos mais complexos

### Legibilidade
- Separação clara entre movimento vertical e horizontal
- Código auto-documentado através da estrutura
- Fácil compreensão da lógica do movimento em "L"

### Extensibilidade
- Base para implementar outros movimentos complexos
- Preparação para validações de tabuleiro
- Estrutura reutilizável para outras peças

## Melhorias em Relação ao Nível Novato

### Funcionalidades
- Adição de uma quarta peça (Cavalo)
- Implementação de movimento não linear
- Demonstração de loops aninhados

### Complexidade
- Estruturas de repetição combinadas
- Algoritmo de movimento multi-etapa
- Coordenação de múltiplas variáveis de controle

### Preparação
- Base para implementações ainda mais avançadas
- Introdução a conceitos de programação intermediária
- Fundamento para estruturas de dados complexas

## Desafios Técnicos Resolvidos

### Sequenciamento
- Coordenação correta da ordem de execução
- Separação lógica entre fases do movimento
- Manutenção de estado entre loops

### Controle de Fluxo
- Transição suave entre estruturas diferentes
- Inicialização correta de variáveis de controle
- Validação implícita de limites

## Próximos Passos

Este programa prepara para implementações que incluirão:
- Recursividade substituindo loops simples
- Loops com controle de fluxo complexo (break, continue)
- Validação de movimentos em tabuleiro real
- Múltiplas direções para cada peça

## Autor

Guilher Martinez  
Tema: 4 - Estruturas de Repetição em C  
Data: Setembro 2025
