#include <stdio.h>
// // Estruturas de decisão aninhadas
// if (condicao1) {
//   if (condicao2) {
//     // Código a ser executado se condicao1 e condicao2 forem verdadeiras
//   }
// }


// //Estruturas de decisão encadeadas
// if (condicao1) {
//   // Código a ser executado se condicao1 for verdadeira
// } else if (condicao2) {
//   // Código a ser executado se condicao1 for falsa e condicao2 for verdadeira
// } else {
//   // Código a ser executado se todas as condições anteriores forem falsas
// }

// int main(){
//     int idade;

//     printf("Digite sua idade: \n");
//     scanf("%d", &idade);


//   if (idade < 12) {
//     printf("Você é uma criança\n");
//   } else if (idade >= 12 && idade < 18) {
//     printf("Você é um adolescente\n");
//   } else if (idade >= 18 && idade < 60) {
//     printf("Você é um adulto\n");
//   } else {
//     printf("Você é um idoso\n");
//   }

//     return 0;
// }

int main() {
  int nota;
  printf("Digite a sua Nota: \n");
  scanf("%d", &nota);

  if (nota >= 90) {
    printf("Sua nota é A\n");
  } else if (nota >= 80) {
    printf("Sua nota é B\n");
  } else if (nota >= 70) {
    printf("Sua nota é C\n");
  } else if (nota >= 60) {
    printf("Sua nota é D\n");
  } else {
    printf("Sua nota é F\n");
  }

  return 0;
}

