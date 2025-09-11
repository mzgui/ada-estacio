#include <stdio.h>
 
// // Definição de procedimento para imprimir uma mensagem
// void imprimirMensagem() {
//     printf("Olá, mundo!\n");
// }
 
// int main() {
//     // Chamada do procedimento
//     imprimirMensagem();
//     return 0;
// }


// Função recursiva para imprimir números de n até 1
void recursiveLoop(int n) {
    if (n > 0) {
        printf("%d ", n);  // Imprime o valor atual de n
        recursiveLoop(n - 1);  // Chama a si mesma com n - 1
    }
}
 
int main() {
    int numero = 5;
    printf("Contagem regressiva: ");
    recursiveLoop(numero);
    return 0;
}