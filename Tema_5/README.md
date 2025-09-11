# Tema 5 - Arrays e Matrizes em C
## Estrutura do Projeto

```
Tema_5/
├── README.md                    # Este arquivo
├── novato/
│   ├── batalha_naval.c         # Implementação básica
│   └── README.md               # Documentação específica
├── aventureiro/
│   ├── batalha_naval.c         # Implementação intermediária
│   └── README.md               # Documentação específica
└── mestre/
    ├── batalha_naval.c         # Implementação avançada
    └── README.md               # Documentação específica
```

## Progressão de Aprendizado

### Nível Novato - Fundamentos
**Foco:** Arrays unidimensionais e matrizes bidimensionais básicas

**Conceitos Aplicados:**
- Declaração e inicialização de matrizes
- Loops aninhados para percorrer matrizes
- Validação básica de posicionamento
- Representação simples de dados

**Funcionalidades:**
- Tabuleiro 10x10
- 2 navios (1 horizontal, 1 vertical)
- Validação de limites e sobreposição
- Exibição básica do tabuleiro

### Nível Aventureiro - Expansão
**Foco:** Múltiplas orientações e estruturas de dados organizadas

**Conceitos Aplicados:**
- Enumerações para organização de código
- Algoritmos para posicionamento diagonal
- Estruturas de configuração
- Validação robusta para múltiplas orientações

**Funcionalidades:**
- 4 navios com orientações variadas
- Suporte para diagonais (principal e secundária)
- Interface visual aprimorada
- Sistema de relatórios detalhados

### Nível Mestre - Excelência
**Foco:** Algoritmos avançados e sistemas complexos

**Conceitos Aplicados:**
- Geração dinâmica de padrões geométricos
- Sobreposição de matrizes
- Ponteiros para funções
- Algoritmos matemáticos (distância Manhattan)

**Funcionalidades:**
- 3 habilidades especiais (Cone, Cruz, Octaedro)
- Áreas de efeito complexas
- Sistema de sobreposição avançado
- Estatísticas completas e análises

## Conceitos Técnicos Abordados

### Arrays e Matrizes
- **Arrays Unidimensionais:** Representação de navios individuais
- **Matrizes Bidimensionais:** Tabuleiro principal e matrizes de habilidades
- **Indexação:** Acesso direto e iterativo a elementos
- **Inicialização:** Preenchimento automático e manual

### Algoritmos de Posicionamento
- **Linear:** Horizontal e vertical simples
- **Diagonal:** Principal (\) e secundária (/)
- **Geométrico:** Cone, cruz e octaedro (losango)
- **Validação:** Limites, sobreposição e integridade

### Estruturas de Controle
- **Loops Aninhados:** Percurso de matrizes bidimensionais
- **Condicionais Complexas:** Validação de múltiplas condições
- **Switch-Case:** Seleção de algoritmos baseada em enumerações

### Organização de Código
- **Modularização:** Funções especializadas para cada tarefa
- **Enumerações:** Organização de tipos e constantes
- **Estruturas:** Agrupamento de dados relacionados
- **Ponteiros:** Referências para funções e arrays

## Evolução da Complexidade

### Progressão Quantitativa
| Aspecto | Novato | Aventureiro | Mestre |
|---------|--------|-------------|--------|
| Navios | 2 | 4 | 3 + 3 habilidades |
| Orientações | 2 | 4 | N/A |
| Algoritmos | 2 | 4 | 7 |
| Linhas de Código | ~200 | ~400 | ~600 |
| Funções | 4 | 6 | 12 |

### Progressão Qualitativa
- **Novato:** Conceitos fundamentais e implementação básica
- **Aventureiro:** Expansão de funcionalidades e melhor organização
- **Mestre:** Algoritmos avançados e sistemas complexos

## Compilação e Execução

### Todos os Níveis
```bash
# Navegar para o diretório específico
cd Tema_5/[novato|aventureiro|mestre]/

# Compilar
gcc -o batalha_naval batalha_naval.c

# Executar
./batalha_naval
```

### Requisitos do Sistema
- Compilador GCC ou compatível
- Sistema operacional: Windows, Linux ou macOS
- Memória: Mínima (uso de arrays estáticos pequenos)


## Autor

Guilher Martinez  
Tema: 5 - Arrays e Matrizes em C  
Data: Setembro 2025  
ADA Tech - Estácio
