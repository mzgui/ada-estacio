#include <stdio.h>

// int main() {
//     int i = 0;
//     while (i <= 5){
//         if (i % 2 == 0){
//             printf("%d é par\n", i);
//         } else {
//             printf("%d é ímpar\n", i);
//         }
//         i++;
//     }
//     return 0;
// }

// int main(){
//     int numero;

//     do {
//         printf("Digite um número par para sair do programa: ");
//         scanf("%d", &numero);

//         if(numero % 2 == 0) {
//             printf("Você digitou um número par. Saindo do programa...\n");
//         }
//         else {
//             printf("Número ímpar! Tente novamente.\n");
//         }   
//     } while (numero % 2 != 0);

//     return 0;
//     }

int main (){

    int numero, i;
    printf("Digite um número para calcularmos a tabuada... ");
    scanf("%d", &numero);

    printf("Tabuada do %d: \n", numero);
    for (i = 0; i <= 10; i++){
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
    return 0;
}