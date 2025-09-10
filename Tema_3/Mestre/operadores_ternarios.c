#include <stdio.h>

// ## Idade
int main (){
        int idade;
        int resultado;
        printf("Digite sua idade: \n");
        scanf("%d", &idade);
        resultado = idade >= 18 ? 1 : 0 ;
        if (resultado == 1){
            printf("Você é maior de idade! \n");
        } else {
            printf("Você é menor de idade! \n");
        }

// // ## Temperatura


  int temperatura;
  char* estado;

  printf("Digite a temperatura: \n");
  scanf("%d", &temperatura);

  estado = (temperatura > 30) ? "Calor" : "Frio";

  printf("Estado: %s\n", estado);


  // ## Maior

  int num1 = 10, num2 = 20;
  int maior;

  maior = (num1 > num2) ? num1 : num2;

  printf("O maior número é: %d\n", maior);


  return 0;
}