#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolhaJogador, escolhaComputador;
    srand(time(0));

    printf("=== JOKENPÔ ===\n");
    printf("Escolha sua jogada:\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha: " );
    scanf("%d", &escolhaJogador);

    escolhaComputador = rand() % 3 + 1;

    switch (escolhaJogador) 
        {
        case 1:
            printf("Você escolheu Pedra.\n");
            break;
        case 2:
            printf("Você escolheu Papel.\n");
            break;
        case 3:
            printf("Você escolheu Tesoura.\n");
            break;
        default:
            printf("Escolha inválida.\n");
            break;
        }
    switch (escolhaComputador) 
        {
        case 1:
            printf("O computador escolheu Pedra.\n");
            break;
        case 2:
            printf("O computador escolheu Papel.\n");
            break;
        case 3:
            printf("O computador escolheu Tesoura.\n");
            break;
        default:
            printf("Escolha inválida.\n");
            break;
    }
    if (escolhaJogador == escolhaComputador) {
        printf("Empate!\n");
    } else if ((escolhaJogador == 1 && escolhaComputador == 3) ||
               (escolhaJogador == 2 && escolhaComputador == 1) ||
               (escolhaJogador == 3 && escolhaComputador == 2)) {
        printf("Você ganhou!\n");
    } else {
        printf("Você perdeu!\n");
    }
    return 0;
}