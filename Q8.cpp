#include <stdio.h>

int main() {
    int mtrx[3][4];
    int maior, menor;

    printf("Insira um valor na matriz:\n");

    if (scanf("%d", &mtrx[0][0]) != 1) {
        printf("Valor inválido. Por favor insira um número inteiro.\n");
        return 1;
    }

    maior = menor = mtrx[0][0]; // Inicialize ambas as variáveis com o primeiro valor da matriz

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (scanf("%d", &mtrx[i][j]) != 1) {
                printf("Valor inválido. Por favor insira um número inteiro.\n");
                return 1;
            }

            if (mtrx[i][j] > maior) {
                maior = mtrx[i][j];
            }
            if (mtrx[i][j] < menor) {
                menor = mtrx[i][j];
            }
        }
    }

    printf("O maior número da matriz é %d\n", maior);
    printf("O menor número da matriz é %d\n", menor);
    return 0;
}

