#include <stdio.h>

// if (a > 0 && b > 0) {
//   printf("Ambos são positivos.\n");
// }

// if (a > 0 || b > 0) {
//   printf("Pelo menos um é positivo.\n");
// }

// if (!a) {
//   printf("a é zero.\n");
// }

// int main() {
//   int a = 5;
//   int b = 10;

//   if (a > 0 && b > 0) {
//     printf("Ambos os números são positivos\n");
//   }

//   return 0;
// }

// int main() {
//   int a = 5;
//   int b = -10;

//   if (a > 0 || b > 0) {
//     printf("Pelo menos um dos números é positivo\n");
//   }

//   return 0;
// }

// int main() {
//   int a = -5;

//   if (!(a > 0)) {
//     printf("a não é um número positivo\n");
//   }

//   return 0;
// }

// int main() {
//   int a = 5;
//   int b = -10;
//   int c = 0;

//   if (a > 0 && b < 0 || c == 0) {
//     printf("A condição é verdadeira\n");
//   } else {
//     printf("A condição é falsa\n");
//   }

//   return 0;
// }

// int main() {
//   int idade = 20;
//   float altura = 1.75;

//   if (idade >= 18 && idade <= 30 && altura > 1.70) {
//     printf("Você está na faixa etária e tem a altura adequada\n");
//   } else {
//     printf("Você não atende aos critérios\n");
//   }

//   return 0;
// }


int main() {
  float temperatura = 25.0;
  float umidade = 55.0;

  if (temperatura >= 20.0 && temperatura <= 30.0 && umidade > 50.0) {
    printf("As condições estão favoráveis\n");
  } else {
    printf("As condições não estão favoráveis\n");
  }

  return 0;
}