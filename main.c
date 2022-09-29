#include <stdio.h>

void imprimirMatriz(int vetor[3][3]) {
  int a;
  int j;
  int b;
  for (int i = 0; i < 3; i++) {

    int tamanho;
    for (j = 0; j < 3; j++) {
      printf("Digite a linha:\n");
      scanf("%d", &a);
      printf("Digite a coluna:\n");
      scanf("%d", &b);
      int tamanho = a + b;

      char simbolo = ' ';

      switch (matriz[i][j]) {
      case 0:
        simbolo = ' ';
        break;
      case 1:
        simbolo = 'X';
        break;
      case 2:
        simbolo = '0';
        break;
      default:
        simbolo = '!';
        break;
      }
      if (j < 2) {
        printf("%d | ", vetor[i][j]);
      } else {
        printf("%d ", vetor[i][j]);
      }
    }
    printf("\n");
    if (i < 2) {
      printf("---|---|---");
      printf("\n");
    }
  }
  return vetor[a][b] = 1;
}

int main() {
  int k;
  int cont;
  int a;
  int b;
  for (k = 0; k <= cont; k++) {
    cont++;
    printf("\nDigite a linha:");
    scanf("%d", &a);
    printf("\nDigite a coluna:");
    scanf(" %d", &b);
    int vetor[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    imprimirMatriz(vetor);
  }
}
