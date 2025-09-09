#include <stdio.h>
#include <string.h>

/*
 * SUPER TRUNFO - NÍVEL AVENTUREIRO
 * Desafio: Interatividade no Super Trunfo
 * 
 * Este programa implementa um sistema interativo completo para o jogo Super Trunfo,
 * permitindo ao usuário escolher o atributo de comparação através de um menu dinâmico.
 * Utiliza estruturas de decisão aninhadas para lógica complexa de comparação.
 * 
 * Funcionalidades:
 * - Menu interativo com estrutura switch-case
 * - Cadastro completo de duas cartas de países
 * - Escolha dinâmica do atributo de comparação
 * - Lógica de comparação com regras específicas por atributo
 * - Tratamento de empates e entradas inválidas
 * - Sistema de densidade demográfica com regra invertida
 */

int main() {
    // ==================== DECLARAÇÃO DE VARIÁVEIS ====================
    
    // Variáveis para a Carta 1
    char nomePais1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadeDemografica1;

    // Variáveis para a Carta 2
    char nomePais2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadeDemografica2;

    // Variáveis de controle
    int opcaoMenu;
    int continuarJogo = 1;
    char jogarNovamente;

    // ==================== CABEÇALHO DO PROGRAMA ====================
    printf("╔══════════════════════════════════════════════════════════════╗\n");
    printf("║                 SUPER TRUNFO - NÍVEL AVENTUREIRO             ║\n");
    printf("║                    Interatividade Avançada                   ║\n");
    printf("╚══════════════════════════════════════════════════════════════╝\n\n");

    printf("🌍 Bem-vindo ao Super Trunfo dos Países! 🌍\n");
    printf("Cadastre duas cartas de países e escolha como compará-las!\n\n");

    // ==================== LOOP PRINCIPAL DO JOGO ====================
    while (continuarJogo) {
        
        // ==================== CADASTRO DA CARTA 1 ====================
        printf("═══════════════════════════════════════════════════════════════\n");
        printf("📝 CADASTRO DA CARTA 1\n");
        printf("═══════════════════════════════════════════════════════════════\n");
        
        printf("🏳️  Nome do país: ");
        scanf("%s", nomePais1);
        
        printf("👥 População (habitantes): ");
        scanf("%d", &populacao1);
        
        printf("🗺️  Área (km²): ");
        scanf("%f", &area1);
        
        printf("💰 PIB (em bilhões de dólares): ");
        scanf("%f", &pib1);
        
        printf("🏛️  Pontos turísticos: ");
        scanf("%d", &pontosTuristicos1);

        // Cálculo da densidade demográfica para a Carta 1
        if (area1 > 0) {
            densidadeDemografica1 = (float)populacao1 / area1;
        } else {
            densidadeDemografica1 = 0;
            printf("⚠️  Aviso: Área inválida, densidade definida como 0\n");
        }

        // ==================== CADASTRO DA CARTA 2 ====================
        printf("\n═══════════════════════════════════════════════════════════════\n");
        printf("📝 CADASTRO DA CARTA 2\n");
        printf("═══════════════════════════════════════════════════════════════\n");
        
        printf("🏳️  Nome do país: ");
        scanf("%s", nomePais2);
        
        printf("👥 População (habitantes): ");
        scanf("%d", &populacao2);
        
        printf("🗺️  Área (km²): ");
        scanf("%f", &area2);
        
        printf("💰 PIB (em bilhões de dólares): ");
        scanf("%f", &pib2);
        
        printf("🏛️  Pontos turísticos: ");
        scanf("%d", &pontosTuristicos2);

        // Cálculo da densidade demográfica para a Carta 2
        if (area2 > 0) {
            densidadeDemografica2 = (float)populacao2 / area2;
        } else {
            densidadeDemografica2 = 0;
            printf("⚠️  Aviso: Área inválida, densidade definida como 0\n");
        }

        // ==================== EXIBIÇÃO DOS DADOS CADASTRADOS ====================
        printf("\n╔══════════════════════════════════════════════════════════════╗\n");
        printf("║                    CARTAS CADASTRADAS                       ║\n");
        printf("╚══════════════════════════════════════════════════════════════╝\n");

        printf("\n🏳️  CARTA 1 - %s\n", nomePais1);
        printf("   👥 População: %d habitantes\n", populacao1);
        printf("   🗺️  Área: %.2f km²\n", area1);
        printf("   💰 PIB: %.2f bilhões de dólares\n", pib1);
        printf("   🏛️  Pontos turísticos: %d\n", pontosTuristicos1);
        printf("   📊 Densidade demográfica: %.2f hab/km²\n", densidadeDemografica1);

        printf("\n🏳️  CARTA 2 - %s\n", nomePais2);
        printf("   👥 População: %d habitantes\n", populacao2);
        printf("   🗺️  Área: %.2f km²\n", area2);
        printf("   💰 PIB: %.2f bilhões de dólares\n", pib2);
        printf("   🏛️  Pontos turísticos: %d\n", pontosTuristicos2);
        printf("   📊 Densidade demográfica: %.2f hab/km²\n", densidadeDemografica2);

        // ==================== MENU INTERATIVO ====================
        printf("\n╔══════════════════════════════════════════════════════════════╗\n");
        printf("║                    MENU DE COMPARAÇÃO                       ║\n");
        printf("╚══════════════════════════════════════════════════════════════╝\n");
        printf("\n🎯 Escolha o atributo para comparação:\n\n");
        printf("   1️⃣  População (maior população vence)\n");
        printf("   2️⃣  Área (maior área vence)\n");
        printf("   3️⃣  PIB (maior PIB vence)\n");
        printf("   4️⃣  Pontos Turísticos (mais pontos vencem)\n");
        printf("   5️⃣  Densidade Demográfica (MENOR densidade vence)\n");
        printf("   0️⃣  Sair do jogo\n");
        printf("\n═══════════════════════════════════════════════════════════════\n");
        printf("Digite sua opção: ");
        scanf("%d", &opcaoMenu);

        // ==================== LÓGICA DE COMPARAÇÃO COM SWITCH ====================
        switch (opcaoMenu) {
            case 1: // Comparação por População
                printf("\n🏆 BATALHA POR POPULAÇÃO 🏆\n");
                printf("═══════════════════════════════════════════════════════════════\n");
                printf("%s: %d habitantes\n", nomePais1, populacao1);
                printf("%s: %d habitantes\n", nomePais2, populacao2);
                printf("───────────────────────────────────────────────────────────────\n");

                // Estrutura de decisão aninhada para população
                if (populacao1 > populacao2) {
                    int diferenca = populacao1 - populacao2;
                    printf("🎉 RESULTADO: %s venceu!\n", nomePais1);
                    printf("📈 Vantagem: %d habitantes a mais\n", diferenca);
                    
                    // Análise adicional aninhada
                    if (diferenca > 1000000) {
                        printf("💫 Diferença EXPRESSIVA de mais de 1 milhão de habitantes!\n");
                    } else if (diferenca > 100000) {
                        printf("⭐ Diferença significativa de mais de 100 mil habitantes\n");
                    } else {
                        printf("✨ Diferença moderada na população\n");
                    }
                } else if (populacao2 > populacao1) {
                    int diferenca = populacao2 - populacao1;
                    printf("🎉 RESULTADO: %s venceu!\n", nomePais2);
                    printf("📈 Vantagem: %d habitantes a mais\n", diferenca);
                    
                    // Análise adicional aninhada
                    if (diferenca > 1000000) {
                        printf("💫 Diferença EXPRESSIVA de mais de 1 milhão de habitantes!\n");
                    } else if (diferenca > 100000) {
                        printf("⭐ Diferença significativa de mais de 100 mil habitantes\n");
                    } else {
                        printf("✨ Diferença moderada na população\n");
                    }
                } else {
                    printf("🤝 EMPATE! Ambos os países têm a mesma população.\n");
                }
                break;

            case 2: // Comparação por Área
                printf("\n🏆 BATALHA POR ÁREA TERRITORIAL 🏆\n");
                printf("═══════════════════════════════════════════════════════════════\n");
                printf("%s: %.2f km²\n", nomePais1, area1);
                printf("%s: %.2f km²\n", nomePais2, area2);
                printf("───────────────────────────────────────────────────────────────\n");

                // Estrutura de decisão aninhada para área
                if (area1 > area2) {
                    float diferenca = area1 - area2;
                    printf("🎉 RESULTADO: %s venceu!\n", nomePais1);
                    printf("📏 Vantagem: %.2f km² a mais\n", diferenca);
                    
                    // Análise adicional aninhada
                    if (diferenca > 1000000) {
                        printf("🌍 Diferença GIGANTESCA de mais de 1 milhão de km²!\n");
                    } else if (diferenca > 100000) {
                        printf("🗺️  Diferença muito grande de mais de 100 mil km²\n");
                    } else {
                        printf("📐 Diferença considerável na área territorial\n");
                    }
                } else if (area2 > area1) {
                    float diferenca = area2 - area1;
                    printf("🎉 RESULTADO: %s venceu!\n", nomePais2);
                    printf("📏 Vantagem: %.2f km² a mais\n", diferenca);
                    
                    // Análise adicional aninhada
                    if (diferenca > 1000000) {
                        printf("🌍 Diferença GIGANTESCA de mais de 1 milhão de km²!\n");
                    } else if (diferenca > 100000) {
                        printf("🗺️  Diferença muito grande de mais de 100 mil km²\n");
                    } else {
                        printf("📐 Diferença considerável na área territorial\n");
                    }
                } else {
                    printf("🤝 EMPATE! Ambos os países têm a mesma área territorial.\n");
                }
                break;

            case 3: // Comparação por PIB
                printf("\n🏆 BATALHA ECONÔMICA (PIB) 🏆\n");
                printf("═══════════════════════════════════════════════════════════════\n");
                printf("%s: $%.2f bilhões\n", nomePais1, pib1);
                printf("%s: $%.2f bilhões\n", nomePais2, pib2);
                printf("───────────────────────────────────────────────────────────────\n");

                // Estrutura de decisão aninhada para PIB
                if (pib1 > pib2) {
                    float diferenca = pib1 - pib2;
                    printf("🎉 RESULTADO: %s venceu!\n", nomePais1);
                    printf("💰 Vantagem: $%.2f bilhões a mais no PIB\n", diferenca);
                    
                    // Análise econômica aninhada
                    if (diferenca > 1000) {
                        printf("💎 Economia DOMINANTE com mais de $1 trilhão de diferença!\n");
                    } else if (diferenca > 100) {
                        printf("🏦 Economia muito superior com mais de $100 bilhões\n");
                    } else {
                        printf("📊 Vantagem econômica moderada\n");
                    }
                } else if (pib2 > pib1) {
                    float diferenca = pib2 - pib1;
                    printf("🎉 RESULTADO: %s venceu!\n", nomePais2);
                    printf("💰 Vantagem: $%.2f bilhões a mais no PIB\n", diferenca);
                    
                    // Análise econômica aninhada
                    if (diferenca > 1000) {
                        printf("💎 Economia DOMINANTE com mais de $1 trilhão de diferença!\n");
                    } else if (diferenca > 100) {
                        printf("🏦 Economia muito superior com mais de $100 bilhões\n");
                    } else {
                        printf("📊 Vantagem econômica moderada\n");
                    }
                } else {
                    printf("🤝 EMPATE! Ambos os países têm o mesmo PIB.\n");
                }
                break;

            case 4: // Comparação por Pontos Turísticos
                printf("\n🏆 BATALHA TURÍSTICA 🏆\n");
                printf("═══════════════════════════════════════════════════════════════\n");
                printf("%s: %d pontos turísticos\n", nomePais1, pontosTuristicos1);
                printf("%s: %d pontos turísticos\n", nomePais2, pontosTuristicos2);
                printf("───────────────────────────────────────────────────────────────\n");

                // Estrutura de decisão aninhada para pontos turísticos
                if (pontosTuristicos1 > pontosTuristicos2) {
                    int diferenca = pontosTuristicos1 - pontosTuristicos2;
                    printf("🎉 RESULTADO: %s venceu!\n", nomePais1);
                    printf("🏛️  Vantagem: %d pontos turísticos a mais\n", diferenca);
                    
                    // Análise turística aninhada
                    if (diferenca > 20) {
                        printf("🌟 Destino turístico EXCEPCIONAL com muitas atrações!\n");
                    } else if (diferenca > 10) {
                        printf("🎯 Destino turístico muito atrativo\n");
                    } else {
                        printf("✨ Ligeira vantagem turística\n");
                    }
                } else if (pontosTuristicos2 > pontosTuristicos1) {
                    int diferenca = pontosTuristicos2 - pontosTuristicos1;
                    printf("🎉 RESULTADO: %s venceu!\n", nomePais2);
                    printf("🏛️  Vantagem: %d pontos turísticos a mais\n", diferenca);
                    
                    // Análise turística aninhada
                    if (diferenca > 20) {
                        printf("🌟 Destino turístico EXCEPCIONAL com muitas atrações!\n");
                    } else if (diferenca > 10) {
                        printf("🎯 Destino turístico muito atrativo\n");
                    } else {
                        printf("✨ Ligeira vantagem turística\n");
                    }
                } else {
                    printf("🤝 EMPATE! Ambos os países têm o mesmo número de pontos turísticos.\n");
                }
                break;

            case 5: // Comparação por Densidade Demográfica (REGRA INVERTIDA)
                printf("\n🏆 BATALHA POR QUALIDADE DE VIDA (Densidade Demográfica) 🏆\n");
                printf("═══════════════════════════════════════════════════════════════\n");
                printf("⚠️  ATENÇÃO: Nesta categoria, MENOR densidade vence!\n");
                printf("   (Menor densidade = melhor qualidade de vida)\n");
                printf("───────────────────────────────────────────────────────────────\n");
                printf("%s: %.2f hab/km²\n", nomePais1, densidadeDemografica1);
                printf("%s: %.2f hab/km²\n", nomePais2, densidadeDemografica2);
                printf("───────────────────────────────────────────────────────────────\n");

                // Estrutura de decisão aninhada para densidade (REGRA INVERTIDA)
                if (densidadeDemografica1 < densidadeDemografica2) {
                    float diferenca = densidadeDemografica2 - densidadeDemografica1;
                    printf("🎉 RESULTADO: %s venceu!\n", nomePais1);
                    printf("🌿 Vantagem: %.2f hab/km² a menos (melhor qualidade de vida)\n", diferenca);
                    
                    // Análise de qualidade de vida aninhada
                    if (densidadeDemografica1 < 50) {
                        printf("🏞️  Densidade EXCELENTE! País com muito espaço e qualidade de vida\n");
                    } else if (densidadeDemografica1 < 200) {
                        printf("🌳 Densidade boa, país bem distribuído\n");
                    } else {
                        printf("🏙️  Densidade moderada, país mais urbanizado\n");
                    }
                } else if (densidadeDemografica2 < densidadeDemografica1) {
                    float diferenca = densidadeDemografica1 - densidadeDemografica2;
                    printf("🎉 RESULTADO: %s venceu!\n", nomePais2);
                    printf("🌿 Vantagem: %.2f hab/km² a menos (melhor qualidade de vida)\n", diferenca);
                    
                    // Análise de qualidade de vida aninhada
                    if (densidadeDemografica2 < 50) {
                        printf("🏞️  Densidade EXCELENTE! País com muito espaço e qualidade de vida\n");
                    } else if (densidadeDemografica2 < 200) {
                        printf("🌳 Densidade boa, país bem distribuído\n");
                    } else {
                        printf("🏙️  Densidade moderada, país mais urbanizado\n");
                    }
                } else {
                    printf("🤝 EMPATE! Ambos os países têm a mesma densidade demográfica.\n");
                }
                break;

            case 0: // Sair do jogo
                printf("\n👋 Obrigado por jogar o Super Trunfo!\n");
                printf("🎮 Até a próxima batalha de cartas!\n");
                continuarJogo = 0;
                break;

            default: // Tratamento de entrada inválida
                printf("\n❌ OPÇÃO INVÁLIDA!\n");
                printf("═══════════════════════════════════════════════════════════════\n");
                printf("⚠️  Por favor, escolha uma opção válida do menu (0-5).\n");
                printf("💡 Dica: Verifique se digitou apenas números.\n");
                break;
        }

        // ==================== OPÇÃO DE JOGAR NOVAMENTE ====================
        if (opcaoMenu >= 1 && opcaoMenu <= 5) {
            printf("\n═══════════════════════════════════════════════════════════════\n");
            printf("🔄 Deseja fazer uma nova comparação com as mesmas cartas?\n");
            printf("   Digite 's' para SIM ou 'n' para cadastrar novas cartas: ");
            scanf(" %c", &jogarNovamente);
            
            if (jogarNovamente == 'n' || jogarNovamente == 'N') {
                printf("\n🆕 Preparando cadastro de novas cartas...\n");
                // O loop continua para cadastrar novas cartas
            } else if (jogarNovamente == 's' || jogarNovamente == 'S') {
                printf("\n🔁 Retornando ao menu de comparação...\n");
                // Pula o cadastro e vai direto para o menu
                goto menu_comparacao;
            } else {
                printf("\n🔄 Opção não reconhecida. Cadastrando novas cartas...\n");
            }
        }
        
        // Label para retornar diretamente ao menu quando escolher fazer nova comparação
        menu_comparacao:;
        
    } // Fim do while principal

    printf("\n╔══════════════════════════════════════════════════════════════╗\n");
    printf("║                    JOGO FINALIZADO                          ║\n");
    printf("║            Obrigado por jogar Super Trunfo!                 ║\n");
    printf("║                Nível Aventureiro Concluído                  ║\n");
    printf("╚══════════════════════════════════════════════════════════════╝\n");

    return 0;
}
