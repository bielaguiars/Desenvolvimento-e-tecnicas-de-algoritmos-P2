#include <stdio.h>

int main() {
    int taman;
    int linha, coluna;


    printf("Digite o tamanho do quadrado: ");
    scanf("%d", &taman);


    if (taman > 0) {

        for (linha = 1; linha <= taman; linha++) {

            for (coluna = 1; coluna <= taman; coluna++) {
                printf("X ");
            }
            printf("\n"); 
        }
    } else {
        printf("O tamanho deve ser maior que zero.\n");
    }

}
