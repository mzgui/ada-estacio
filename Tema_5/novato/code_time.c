#include <stdio.h>


int main(){
    int index;
    const char * nomeAlunos[5][3] = {
        {"Ana","Portugues: 10","Matematica: 9"}, 
        {"Bruno","Portugues: 8","Matematica: 7"}, 
        {"Carlos","Portugues: 6","Matematica: 5"}, 
        {"Daniela","Portugues: 9","Matematica: 10"}, 
        {"Eduardo","Portugues: 7","Matematica: 8"}
    };
    printf("=== Boas-vindas ao sistema de notas dos alunos ===\n");
    printf("Alunos disponíveis:\n");
    printf("Para Ana, digite 0\n");
    printf("Para Bruno, digite 1\n");
    printf("Para Carlos, digite 2\n");
    printf("Para Daniela, digite 3\n");
    printf("Para Eduardo, digite 4\n");
    printf("Digite o índice do aluno (0-4): ");
    scanf("%d", &index);

    printf("A note do %s sao %s, %s .... \n", nomeAlunos[index][0], nomeAlunos[index][1], nomeAlunos[index][2]);
    
    return 0;
}