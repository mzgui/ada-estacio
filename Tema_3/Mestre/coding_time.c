#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main (){
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    // Gerar número aleatório
    srand(time(0));
    numeroComputador = rand() % 100 + 1; // Número entre 1 e 100

    // Inicio do jogo
    printf("=== Jogo de Maior, Menor ou Igual ===\n");
    printf("Escolha o tipo de comparação:\n");
    printf("M - Maior\n");
    printf("m - Menor\n");
    printf("I - Igual\n");

    printf("Digite sua escolha (M/m/I): ");
    scanf(" %c", &tipoComparacao);
    printf("Digite um número entre 1 e 100: ");
    scanf("%d", &numeroJogador);

    // Exibir Número compuitador
    printf("Número do Computador: %d\n", numeroComputador);

    // Lógica de comparação usando operadores ternários

    switch (tipoComparacao) {
        case 'M':
            printf("Você escolheu comparar se seu número é MAIOR.\n");
            resultado = (numeroJogador > numeroComputador) ? 1 : 0;
            if (resultado == 1) {
                printf("Você acertou! Seu número é maior.\n");
            } else {
                printf("Você errou! Seu número não é maior.\n");
            }
            break;
        case 'm':
            resultado = (numeroJogador < numeroComputador) ? 1 : 0;
            if (resultado == 1) {
                printf("Você acertou! Seu número é menor.\n");
            } else {
                printf("Você errou! Seu número não é menor.\n");
            }
            break;
        case 'I':
            resultado = (numeroJogador == numeroComputador) ? 1 : 0;
            if (resultado == 1) {
                printf("Vocês acertou! Seu número é igual ao do computador.\n");
            } else {
                printf("Você errou! Seu número não é igual ao do computador.\n");
            }
            break;
        default:
            printf("Opção inválida! Use M, m ou I.\n");
            break;
    }

    return 0;
}