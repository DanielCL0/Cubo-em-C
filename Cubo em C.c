
#include <stdio.h>

void quadradoPreenchido(int x) {
  for (int i = 0; i < x; i++) {
    for (int j = 0; j < x; j++) {
      printf("*");
    }
    printf("\n");
  }
}

void imprimaBorda(int x) {
  for (int i = 0; i < x; i++) {
    printf("*");
  }
  if (x != 1) {
    printf("\n");
  }

  for (int i = 2; i < x; i++) {
    printf("*");
    for (int j = 2; j < x; j++) {
      printf(" ");
    }
    printf("*\n");
  }
  if (x != 1) {
    for (int i = 0; i < x; i++) {
      printf("*");
    }
  }
}

void imprimaBordaDiagPrin(int x) {
  for (int i = 0; i < x; i++) {
    printf("*");
  }
  if (x != 1) {
    printf("\n");
  }
  int contador = 2;
  for (int i = 2; i < x; i++, contador++) {
    printf("*");
    for (int j = 2; j < x; j++) {
      if (j == contador) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("*\n");
  }
  if (x != 1) {
    for (int i = 0; i < x; i++) {
      printf("*");
    }
  }
}

void imprimaBordaDiagSec(int x) {
  for (int i = 0; i < x; i++) {
    printf("*");
  }
  if (x != 1) {
    printf("\n");
  }
  int contador = x - 1;
  for (int i = 2; i < x; i++, contador--) {
    printf("*");
    for (int j = 2; j < x; j++) {
      if (j == contador) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("*\n");
  }
  if (x != 1) {
    for (int i = 0; i < x; i++) {
      printf("*");
    }
  }
}

void imprimaDivisaoHorizontal(int x) {
  for (int i = 0; i < x; i++) {
    printf("*");
  }
  if (x != 1) {
    printf("\n");
  }
  if (x % 2 == 0) {
    for (int i = 2; i < x; i++) {
      printf("*");
      for (int j = 2; j < x; j++) {
        printf(" ");
      }
      printf("*\n");
    }
  } else {
    int meio = (x / 2) + 1;
    for (int i = 2; i < x; i++) {
      printf("*");
      if (i == meio) {
        for (int j = 2; j < x; j++) {
          printf("*");
        }
        printf("*\n");
      } else {
        for (int j = 2; j < x; j++) {
          printf(" ");
        }
        printf("*\n");
      }
    }
  }
  if (x != 1) {
    for (int i = 0; i < x; i++) {
      printf("*");
    }
  }
}

void imprimaDivisaoVertical(int x) {
  for (int i = 0; i < x; i++) {
    printf("*");
  }
  if (x != 1) {
    printf("\n");
  }
  if (x % 2 == 0) {
    for (int i = 2; i < x; i++) {
      printf("*");
      for (int j = 2; j < x; j++) {
        printf(" ");
      }
      printf("*\n");
    }
  } else {
    int meio = (x / 2) + 1;
    for (int i = 2; i < x; i++) {
      printf("*");
      for (int j = 2; j < x; j++) {
        if (j == meio) {
          printf("*");
        } else {
          printf(" ");
        }
      }
      printf("*\n");
    }
  }

  if (x != 1) {
    for (int i = 0; i < x; i++) {
      printf("*");
    }
  }
}

int main() {
  int num;
  char letra;

  printf("Entre com um número inteiro : ");
  scanf("%d", &num);
  getchar();
  printf("Entre com um caractere : ");
  scanf("%c", &letra);
  getchar();
  switch (letra) {
  case 'c':
    quadradoPreenchido(num);
    break;
  case 'b':
    imprimaBorda(num);
    break;
  case 'p':
    imprimaBordaDiagPrin(num);
    break;
  case 's':
    imprimaBordaDiagSec(num);
    break;
  case 'h':
    imprimaDivisaoHorizontal(num);
    break;
  case 'v':
    imprimaDivisaoVertical(num);
    break;
  default:
    printf("Não existe essa opção");
  }
}