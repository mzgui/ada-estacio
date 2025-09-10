#include <stdio.h>
//  Exemplo while
int main() {
    int i = 1;
    while (i <= 10) { // loop externo
        int j = 1; // variável do loop interno
        while (j <= 10) { // loop interno
            printf("%d\t", i * j);
            j++; // incremento do contador interno
        }
        printf("\n");
        i++;  // incremento do contador externo

// Exemplo em do-while
//
int o = 1;
    do { // loop externo
        int j = 1;
        do {
            printf("%d\t", o * j);
            j++;
        } while (j <= 10);
        printf("\n");
        o++;
    } while (o <= 10);

    // Verificação de pares de números
    
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if ((i + j) % 2 == 0) {
                printf("(%d, %d)\n", i, j);
            }
        }
    }
    return 0;
}
