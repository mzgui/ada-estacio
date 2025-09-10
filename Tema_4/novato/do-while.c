#include <stdio.h>
 
// Exemplo de uso do do-while
int main (){
    int opcao;
    do{
        printf("Menu:\n");
        printf("1. Opção 1\n");
        printf("2. Opção 2\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: \n");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("Você escolheu a opção 1\n");
            break;
        case 2:
            printf("Você escolheu a opção 2\n");
            break;
        case 3:
            printf("Saindo...\n");
            break;
        default:
            printf("Opção inválida!\n");
            break;
        }
    } while (opcao != 3);

    return 0;
}