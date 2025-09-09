#include <stdio.h>

int main() {
  int idade;
  float renda;

  printf("Digite a sua idade: ");
  scanf("%d", &idade);
  printf("Digite a sua renda mensal: \n");
  scanf("%f", &renda);

  if (idade < 18 || idade > 60) {
    if (renda < 2000.0) {
      printf("Você está qualificado para o desconto especial\n");
    } else {
      printf("Você não está qualificado para o desconto devido à renda\n");
    }
  } else {
    printf("Você não está qualificado para o desconto devido à idade\n");
  }

  return 0;
}






int main() {
  int idade, dependentes;
  float renda;

  printf("Digite a sua idade: \n");
  scanf("%d", &idade);
  printf("Digite a sua renda mensal: \n");
  scanf("%f", &renda);
  printf("Digite o número de dependentes: \n");
  scanf("%d", &dependentes);

  if (idade >= 18 && idade <= 65) {
    if (renda < 3000.0) {
      if (dependentes > 2) {
        printf("Você está qualificado para os benefícios sociais\n");
      } else {
        printf("Você não está qualificado para os benefícios devido ao número de dependentes\n");
      }
    } else {
      printf("Você não está qualificado para os benefícios devido à renda\n");
    }
  } else {
    printf("Você não está qualificado para os benefícios devido à idade\n");
  }

  return 0;
}


int main() {
  int opcao;

  printf("Escolha uma opção:\n");
  printf("1. Verificar saldo\n");
  printf("2. Fazer depósito\n");
  printf("3. Fazer saque\n");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      printf("Saldo atual: R$ 1.000,00\n");
      break;
    case 2:
      printf("Depósito realizado com sucesso\n");
      break;
    case 3:
      printf("Saque realizado com sucesso\n");
      break;
    default:
      printf("Opção inválida\n");
  }

  return 0;
}


int main() {
  int dia = 3;

  if (dia == 1) {
    printf("Domingo\n");
  } else if (dia == 2) {
    printf("Segunda-feira\n");
  } else if (dia == 3) {
    printf("Terça-feira\n");
  } else if (dia == 4) {
    printf("Quarta-feira\n");
  } else if (dia == 5) {
    printf("Quinta-feira\n");
  } else if (dia == 6) {
    printf("Sexta-feira\n");
  } else if (dia == 7) {
    printf("Sábado\n");
  } else {
    printf("Dia inválido\n");
  }

  return 0;
}


int main() {
  int dia = 3;

  switch (dia) {
    case 1:
      printf("Domingo\n");
      break;
    case 2:
      printf("Segunda-feira\n");
      break;
    case 3:
      printf("Terça-feira\n");
      break;
    case 4:
      printf("Quarta-feira\n");
      break;
    case 5:
      printf("Quinta-feira\n");
      break;
    case 6:
      printf("Sexta-feira\n");
      break;
    case 7:
      printf("Sábado\n");
      break;
    default:
      printf("Dia inválido\n");
  }

  return 0;
}