# Tema 4 - Estruturas de Repetição em C

## Visão Geral do Projeto

Este tema apresenta uma implementação progressiva de programas que utilizam estruturas de repetição em C através de três níveis de complexidade crescente. O projeto foca na simulação de movimentos de peças de xadrez, demonstrando a aplicação prática de loops for, while, do-while e suas variações avançadas.

## Estrutura do Projeto

```
Tema_4/
├── README.md                    # Este arquivo
├── novato/
│   ├── desafio_novato.c        # Implementação básica com for, while, do-while
│   └── README.md               # Documentação específica
├── aventureiro/
│   ├── xadrez.c                # Implementação com loops aninhados
│   └── README.md               # Documentação específica
└── mestre/
    ├── xadrez.c                # Implementação com recursividade
    └── README.md               # Documentação específica
```

## Progressão de Aprendizado

### Nível Novato - Fundamentos das Estruturas de Repetição
**Foco:** Domínio básico de for, while e do-while

**Conceitos Aplicados:**
- Estrutura FOR para contadores conhecidos
- Estrutura WHILE para condições pré-testadas
- Estrutura DO-WHILE para condições pós-testadas
- Validação de limites e controle de iterações

**Funcionalidades:**
- Simulação de movimento da Torre (FOR)
- Simulação de movimento do Bispo (WHILE)
- Simulação de movimento da Rainha (DO-WHILE)
- Saída formatada com direções de movimento

### Nível Aventureiro - Loops Aninhados e Complexidade
**Foco:** Estruturas de repetição aninhadas e controle avançado

**Conceitos Aplicados:**
- Loops aninhados (FOR + WHILE)
- Movimento em formato "L" do Cavalo
- Validação de múltiplas condições
- Controle de fluxo em estruturas complexas

**Funcionalidades:**
- Todas as peças do nível novato
- Movimento do Cavalo com loops aninhados
- Duas etapas de movimento coordenadas
- Saída organizada por peça

### Nível Mestre - Recursividade e Técnicas Avançadas
**Foco:** Substituição de loops por recursividade e controle complexo

**Conceitos Aplicados:**
- Funções recursivas substituindo loops simples
- Loops complexos com múltiplas variáveis
- Controle de fluxo com break e continue
- Integração de recursividade com loops aninhados

**Funcionalidades:**
- Torre, Bispo e Rainha com recursividade
- Bispo com loops aninhados adicionais
- Cavalo com loops complexos e controle de fluxo
- Sistema completo de movimentação

## Conceitos Técnicos Abordados

### Estruturas de Repetição Básicas
- **FOR:** Iterações com contador conhecido
- **WHILE:** Repetição com condição pré-testada
- **DO-WHILE:** Repetição com condição pós-testada

### Estruturas Avançadas
- **Loops Aninhados:** Estruturas dentro de estruturas
- **Recursividade:** Funções que chamam a si mesmas
- **Controle de Fluxo:** break, continue, return

### Aplicações Práticas
- **Simulação de Movimento:** Representação de trajetórias
- **Validação de Entrada:** Controle de limites e condições
- **Formatação de Saída:** Apresentação organizada de resultados

## Evolução da Complexidade

### Progressão Quantitativa
| Aspecto | Novato | Aventureiro | Mestre |
|---------|--------|-------------|--------|
| Peças Simuladas | 3 | 4 | 4 |
| Tipos de Loop | 3 | 4 | 6+ |
| Funções | 1 | 1 | 8 |
| Linhas de Código | ~100 | ~150 | ~300 |
| Técnicas Aplicadas | 3 | 5 | 10+ |

### Progressão Qualitativa
- **Novato:** Aplicação direta de cada tipo de loop
- **Aventureiro:** Combinação e aninhamento de estruturas
- **Mestre:** Técnicas avançadas e otimização de código

## Peças de Xadrez Implementadas

### Torre
- **Movimento:** Linha reta (horizontal/vertical)
- **Implementação:** FOR simples → Recursividade
- **Características:** 5 casas para a direita

### Bispo
- **Movimento:** Diagonal
- **Implementação:** WHILE → Recursividade + Loops aninhados
- **Características:** 5 casas diagonal cima-direita

### Rainha
- **Movimento:** Qualquer direção
- **Implementação:** DO-WHILE → Recursividade
- **Características:** 8 casas para a esquerda

### Cavalo (Aventureiro/Mestre)
- **Movimento:** Formato "L"
- **Implementação:** Loops aninhados → Loops complexos
- **Características:** 2 casas + 1 casa perpendicular

## Algoritmos Implementados

### Nível Novato
```c
// Exemplo: Torre com FOR
for (i = 1; i <= CASAS_TORRE; i++) {
    printf("Direita\n");
}
```

### Nível Aventureiro
```c
// Exemplo: Cavalo com loops aninhados
for (i = 1; i <= CASAS_CAVALO_BAIXO; i++) {
    printf("Baixo\n");
}
contador_cavalo_while = 1;
while (contador_cavalo_while <= CASAS_CAVALO_ESQUERDA) {
    printf("Esquerda\n");
    contador_cavalo_while++;
}
```

### Nível Mestre
```c
// Exemplo: Torre com recursividade
void mover_torre_recursivo(int casas_restantes) {
    if (casas_restantes <= 0) return;
    printf("Direita\n");
    mover_torre_recursivo(casas_restantes - 1);
}
```

## Compilação e Execução

### Todos os Níveis
```bash
# Navegar para o diretório específico
cd Tema_4/[novato|aventureiro|mestre]/

# Compilar
gcc -o xadrez [arquivo].c

# Executar
./xadrez
```

### Arquivos por Nível
- **Novato:** `desafio_novato.c`
- **Aventureiro:** `xadrez.c`
- **Mestre:** `xadrez.c`

## Objetivos Educacionais Alcançados

### Conhecimentos Fundamentais
- Domínio completo das três estruturas de repetição básicas
- Compreensão de quando usar cada tipo de loop
- Controle preciso de iterações e condições
- Validação de entrada e saída

### Habilidades Intermediárias
- Implementação de loops aninhados
- Coordenação de múltiplas estruturas de repetição
- Desenvolvimento de algoritmos de movimento
- Organização de código modular

### Competências Avançadas
- Substituição de loops por recursividade
- Implementação de controle de fluxo complexo
- Otimização de algoritmos repetitivos
- Integração de múltiplas técnicas

## Aplicações Práticas

### Desenvolvimento de Jogos
- Sistemas de movimento de peças
- Animações e trajetórias
- Validação de jogadas
- Simulação de comportamentos

### Algoritmos Matemáticos
- Iterações numéricas
- Cálculos repetitivos
- Processamento de sequências
- Análise de padrões

### Processamento de Dados
- Percurso de estruturas
- Transformação de dados
- Validação em lote
- Geração de relatórios

## Técnicas de Programação Demonstradas

### Controle de Iterações
- Contadores automáticos (FOR)
- Condições dinâmicas (WHILE)
- Execução garantida (DO-WHILE)

### Estruturas Complexas
- Aninhamento de loops
- Coordenação de múltiplas variáveis
- Controle de fluxo avançado

### Recursividade
- Casos base e recursivos
- Substituição de iteração
- Otimização de código

## Próximos Passos

### Extensões Possíveis
- Implementação de tabuleiro visual
- Validação de movimentos reais
- Integração com jogo completo
- Interface gráfica

### Conceitos Avançados
- Otimização de recursividade
- Algoritmos de busca
- Estruturas de dados dinâmicas
- Programação orientada a objetos

## Performance e Eficiência

### Complexidade dos Algoritmos
- **Loops Simples:** O(n) onde n é o número de casas
- **Loops Aninhados:** O(n*m) para coordenação de movimentos
- **Recursividade:** O(n) com overhead de pilha

### Uso de Memória
- Variáveis de controle mínimas
- Stack de recursão controlado
- Sem alocação dinâmica

## Conclusão

O Tema 4 proporciona uma compreensão completa e prática das estruturas de repetição em C. A progressão através dos três níveis permite ao estudante dominar desde conceitos básicos até técnicas avançadas, sempre com aplicação prática através da simulação de movimentos de xadrez.

A escolha do xadrez como contexto oferece exemplos concretos e variados de diferentes tipos de repetição, preparando o estudante para aplicar estes conceitos em qualquer domínio de programação.

## Estatísticas do Projeto

- **Total de Arquivos:** 6 (3 programas + 3 documentações)
- **Linhas de Código:** Aproximadamente 550
- **Funções Implementadas:** 10
- **Estruturas de Repetição:** 15+ implementações
- **Técnicas Diferentes:** 12

## Autor

Guilher Martinez  
Tema: 4 - Estruturas de Repetição em C  
Data: Setembro 2025  
ADA Tech - Estácio
