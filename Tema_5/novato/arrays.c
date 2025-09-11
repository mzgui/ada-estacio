#include <stdio.h>
 
int main() {
  
    int numeros[5] = {10, 20, 30, 40, 50};  // Inicialização do array com valores

    // Acessando e imprimindo elementos específicos do array
    printf("O primeiro elemento é %d\n", numeros[0]);
    printf("O terceiro elemento é %d\n", numeros[2]);
    printf("O quinto elemento é %d\n", numeros[4]);
 
    // Exemplo com array de floats
     float notas[3] = {85.5, 90.0, 78.0};  // Array de notas de 3 alunos
 
    printf("Nota do primeiro aluno: %.1f\n", notas[0]);
    printf("Nota do segundo aluno: %.1f\n", notas[1]);
    printf("Nota do terceiro aluno: %.1f\n", notas[2]);

    // Exemplo com array de caracteres
    char letras[4] = {'A', 'B', 'C', 'D'};  // Array de caracteres
 
    printf("Primeira letra: %c\n", letras[0]);
    printf("Segunda letra: %c\n", letras[1]);
    printf("Terceira letra: %c\n", letras[2]);
    printf("Quarta letra: %c\n", letras[3]);


    char *nomes[] = {"Alice", "Bob", "Carol"};
    int i;
    for(i = 0; i < 3; i++) {
        printf("%s\n", nomes[i]);
    }
 
    return 0;
}