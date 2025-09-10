#include <stdio.h>
#include <string.h>

/*
 * ===================================================================
 * SUPER TRUNFO - NÍVEL MESTRE
 * Implementando Comparações Avançadas com Atributos Múltiplos em C
 * ===================================================================
 * 
 * Este é o desafio final do Super Trunfo! Este programa implementa:
 * - Escolha de DOIS atributos diferentes para comparação
 * - Menus dinâmicos que se adaptam às escolhas do jogador
 * - Comparação avançada com soma de atributos
 * - Operador ternário para código mais elegante
 * - Tratamento robusto de empates e entradas inválidas
 * - Interface intuitiva
 * 
 * Funcionalidades:
 * - Menu dinâmico para escolha do primeiro atributo
 * - Menu dinâmico para escolha do segundo atributo (excluindo o primeiro)
 * - Comparação individual de cada atributo
 * - Soma dos valores dos atributos para cada carta
 * - Determinação do vencedor baseada na soma total
 * - Exibição detalhada e organizada dos resultados
 */

// Estrutura para organizar os dados de uma carta
typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadeDemografica;
} Carta;

// Função para inicializar as cartas pré-cadastradas
void inicializarCartas(Carta *carta1, Carta *carta2) {
    // Carta 1: Brasil
    strcpy(carta1->nome, "Brasil");
    carta1->populacao = 215000000;
    carta1->area = 8515767.0;
    carta1->pib = 2055.5;
    carta1->pontosTuristicos = 45;
    carta1->densidadeDemografica = (float)carta1->populacao / carta1->area;

    // Carta 2: Estados Unidos
    strcpy(carta2->nome, "Estados Unidos");
    carta2->populacao = 331000000;
    carta2->area = 9833517.0;
    carta2->pib = 21427.7;
    carta2->pontosTuristicos = 63;
    carta2->densidadeDemografica = (float)carta2->populacao / carta2->area;
}

// Função para exibir as informações das cartas
void exibirCartas(Carta carta1, Carta carta2) {
    printf("\n============================================================\n");
    printf("=== CARTAS CADASTRADAS ===\n");
    printf("============================================================\n");
    
    printf("\n🇧🇷 CARTA 1: %s\n", carta1.nome);
    printf("   População: %d habitantes\n", carta1.populacao);
    printf("   Área: %.2f km²\n", carta1.area);
    printf("   PIB: %.1f bilhões USD\n", carta1.pib);
    printf("   Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf("   Densidade Demográfica: %.2f hab/km²\n", carta1.densidadeDemografica);

    printf("\n🇺🇸 CARTA 2: %s\n", carta2.nome);
    printf("   População: %d habitantes\n", carta2.populacao);
    printf("   Área: %.2f km²\n", carta2.area);
    printf("   PIB: %.1f bilhões USD\n", carta2.pib);
    printf("   Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    printf("   Densidade Demográfica: %.2f hab/km²\n", carta2.densidadeDemografica);
}

// Função para exibir o menu de atributos (dinâmico)
int exibirMenuAtributos(int primeiroAtributo, int isSegundoAtributo) {
    int opcao;
    
    if (isSegundoAtributo) {
        printf("\n============================================================\n");
        printf("=== ESCOLHA DO SEGUNDO ATRIBUTO ===\n");
        printf("============================================================\n");
        printf("⚠️  Nota: O primeiro atributo escolhido não aparece mais nas opções\n");
    } else {
        printf("\n============================================================\n");
        printf("=== ESCOLHA DO PRIMEIRO ATRIBUTO ===\n");
        printf("============================================================\n");
    }
    
    printf("\nEscolha um atributo para comparação:\n\n");

    // Menu dinâmico: só mostra opções disponíveis
    if (primeiroAtributo != 1) printf("1️⃣  População\n");
    if (primeiroAtributo != 2) printf("2️⃣  Área\n");
    if (primeiroAtributo != 3) printf("3️⃣  PIB\n");
    if (primeiroAtributo != 4) printf("4️⃣  Pontos Turísticos\n");
    if (primeiroAtributo != 5) printf("5️⃣  Densidade Demográfica\n");
    
    printf("\n📝 Digite sua escolha: ");
    scanf("%d", &opcao);
    
    return opcao;
}

// Função para obter o nome do atributo
char* getNomeAtributo(int atributo) {
    switch(atributo) {
        case 1: return "População";
        case 2: return "Área";
        case 3: return "PIB";
        case 4: return "Pontos Turísticos";
        case 5: return "Densidade Demográfica";
        default: return "Atributo Inválido";
    }
}

// Função para obter o valor de um atributo específico de uma carta
float getValorAtributo(Carta carta, int atributo) {
    switch(atributo) {
        case 1: return (float)carta.populacao;
        case 2: return carta.area;
        case 3: return carta.pib;
        case 4: return (float)carta.pontosTuristicos;
        case 5: return carta.densidadeDemografica;
        default: return 0.0;
    }
}

// Função para validar se a opção escolhida está disponível
int validarOpcao(int opcao, int primeiroAtributo, int isSegundoAtributo) {
    // Verificar se a opção está no range válido (1-5)
    if (opcao < 1 || opcao > 5) {
        return 0; // Inválida
    }
    
    // Se é o segundo atributo, verificar se não é igual ao primeiro
    if (isSegundoAtributo && opcao == primeiroAtributo) {
        return 0; // Inválida
    }
    
    return 1; // Válida
}

// Função para comparar um atributo específico entre duas cartas
int compararAtributo(Carta carta1, Carta carta2, int atributo) {
    float valor1 = getValorAtributo(carta1, atributo);
    float valor2 = getValorAtributo(carta2, atributo);
    
    // Regra especial: Para densidade demográfica, menor valor vence
    if (atributo == 5) {
        return (valor1 < valor2) ? 1 : (valor1 > valor2) ? 2 : 0;
    }
    
    // Regra geral: Maior valor vence
    return (valor1 > valor2) ? 1 : (valor1 < valor2) ? 2 : 0;
}

// Função principal de comparação avançada
void compararCartasAvancado(Carta carta1, Carta carta2, int atributo1, int atributo2) {
    printf("\n============================================================\n");
    printf("=== COMPARAÇÃO AVANÇADA - DOIS ATRIBUTOS ===\n");
    printf("============================================================\n");
    
    // Obter valores dos atributos para cada carta
    float valor1_attr1 = getValorAtributo(carta1, atributo1);
    float valor2_attr1 = getValorAtributo(carta2, atributo1);
    float valor1_attr2 = getValorAtributo(carta1, atributo2);
    float valor2_attr2 = getValorAtributo(carta2, atributo2);
    
    // Comparar cada atributo individualmente
    int resultado1 = compararAtributo(carta1, carta2, atributo1);
    int resultado2 = compararAtributo(carta1, carta2, atributo2);
    
    printf("\n📊 COMPARAÇÃO INDIVIDUAL DOS ATRIBUTOS:\n");
    printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    
    // Exibir resultado do primeiro atributo
    printf("\n🔍 %s:\n", getNomeAtributo(atributo1));
    printf("   %s: %.2f\n", carta1.nome, valor1_attr1);
    printf("   %s: %.2f\n", carta2.nome, valor2_attr1);
    
    if (resultado1 == 1) {
        printf("   🏆 Vencedor: %s\n", carta1.nome);
    } else if (resultado1 == 2) {
        printf("   🏆 Vencedor: %s\n", carta2.nome);
    } else {
        printf("   🤝 Resultado: Empate!\n");
    }
    
    // Exibir resultado do segundo atributo
    printf("\n🔍 %s:\n", getNomeAtributo(atributo2));
    printf("   %s: %.2f\n", carta1.nome, valor1_attr2);
    printf("   %s: %.2f\n", carta2.nome, valor2_attr2);
    
    if (resultado2 == 1) {
        printf("   🏆 Vencedor: %s\n", carta1.nome);
    } else if (resultado2 == 2) {
        printf("   🏆 Vencedor: %s\n", carta2.nome);
    } else {
        printf("   🤝 Resultado: Empate!\n");
    }
    
    // Calcular soma dos atributos para cada carta
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("📈 SOMA DOS ATRIBUTOS:\n");
    
    float soma1 = valor1_attr1 + valor1_attr2;
    float soma2 = valor2_attr1 + valor2_attr2;
    
    printf("   %s: %.2f + %.2f = %.2f\n", carta1.nome, valor1_attr1, valor1_attr2, soma1);
    printf("   %s: %.2f + %.2f = %.2f\n", carta2.nome, valor2_attr1, valor2_attr2, soma2);
    
    // Determinar vencedor final usando operador ternário
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("🏆 RESULTADO FINAL:\n");
    
    char* vencedorFinal = (soma1 > soma2) ? carta1.nome : 
                         (soma2 > soma1) ? carta2.nome : 
                         "EMPATE";
    
    if (strcmp(vencedorFinal, "EMPATE") == 0) {
        printf("   🤝 EMPATE! Ambas as cartas têm a mesma soma de atributos!\n");
        printf("   📊 Soma igual: %.2f\n", soma1);
    } else {
        printf("   🎉 VENCEDOR: %s!\n", vencedorFinal);
        printf("   📊 Diferença: %.2f pontos\n", (soma1 > soma2) ? (soma1 - soma2) : (soma2 - soma1));
    }
    
    printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
}

int main() {
    Carta carta1, carta2;
    int primeiroAtributo, segundoAtributo;
    int opcaoValida = 0;
    
    printf("════════════════════════════════════════════════════════════════\n");
    printf("🏆 SUPER TRUNFO - NÍVEL MESTRE 🏆\n");
    printf("Comparações Avançadas com Atributos Múltiplos\n");
    printf("════════════════════════════════════════════════════════════════\n");
    printf("🎯 Bem-vindo ao desafio final do Super Trunfo!\n");
    printf("📊 Neste nível, você pode escolher DOIS atributos para comparação\n");
    printf("⚡ O vencedor será determinado pela soma dos valores dos atributos\n");
    printf("════════════════════════════════════════════════════════════════\n");
    
    // Inicializar cartas pré-cadastradas
    inicializarCartas(&carta1, &carta2);
    
    // Exibir as cartas cadastradas
    exibirCartas(carta1, carta2);
    
    // Escolha do primeiro atributo
    do {
        primeiroAtributo = exibirMenuAtributos(0, 0); // 0 = sem restrições, 0 = não é segundo atributo
        
        opcaoValida = validarOpcao(primeiroAtributo, 0, 0);
        
        if (!opcaoValida) {
            printf("\n❌ ERRO: Opção inválida! Por favor, escolha uma opção entre 1 e 5.\n");
            printf("⏳ Pressione Enter para tentar novamente...");
            getchar(); // Limpar buffer
            getchar(); // Aguardar Enter
        }
    } while (!opcaoValida);
    
    printf("\n✅ Primeiro atributo escolhido: %s\n", getNomeAtributo(primeiroAtributo));
    
    // Escolha do segundo atributo (menu dinâmico)
    opcaoValida = 0;
    do {
        segundoAtributo = exibirMenuAtributos(primeiroAtributo, 1); // Passar primeiro atributo, 1 = é segundo atributo
        
        opcaoValida = validarOpcao(segundoAtributo, primeiroAtributo, 1);
        
        if (!opcaoValida) {
            if (segundoAtributo == primeiroAtributo) {
                printf("\n❌ ERRO: Você não pode escolher o mesmo atributo duas vezes!\n");
                printf("🔄 O atributo '%s' já foi selecionado.\n", getNomeAtributo(primeiroAtributo));
            } else {
                printf("\n❌ ERRO: Opção inválida! Escolha uma das opções disponíveis.\n");
            }
            printf("⏳ Pressione Enter para tentar novamente...");
            getchar(); // Limpar buffer
            getchar(); // Aguardar Enter
        }
    } while (!opcaoValida);
    
    printf("\n✅ Segundo atributo escolhido: %s\n", getNomeAtributo(segundoAtributo));
    
    // Confirmação das escolhas
    printf("\n📋 RESUMO DAS ESCOLHAS:\n");
    printf("   1º Atributo: %s\n", getNomeAtributo(primeiroAtributo));
    printf("   2º Atributo: %s\n", getNomeAtributo(segundoAtributo));
    printf("\n⚡ Iniciando comparação avançada...\n");
    
    // Realizar comparação avançada
    compararCartasAvancado(carta1, carta2, primeiroAtributo, segundoAtributo);
    
    // Informações finais
    printf("\n════════════════════════════════════════════════════════════════\n");
    printf("🎊 PARABÉNS! Você completou o NÍVEL MESTRE do Super Trunfo!\n");
    printf("🏆 Você dominou:\n");
    printf("   ✅ Menus dinâmicos com switch\n");
    printf("   ✅ Comparações com múltiplos atributos\n");
    printf("   ✅ Operadores ternários para código elegante\n");
    printf("   ✅ Tratamento robusto de entradas inválidas\n");
    printf("   ✅ Estruturas de dados avançadas\n");
    printf("════════════════════════════════════════════════════════════════\n");
    printf("👨‍💻 Desenvolvido para ADA Tech - Estácio | Tema 3 - Nível Mestre\n");
    printf("════════════════════════════════════════════════════════════════\n");
    
    return 0;
}
