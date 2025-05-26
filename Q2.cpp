#include <stdio.h>

int main() {
    int num;

    printf("Escreva um numero: ");
    scanf("%d", &num);

    if (num >= 10 && num <= 15) {
        printf("O numero esta entre 10 e 15.\n");
    } else {
        printf("O numero nao esta entre 10 e 15.\n");
    }


}
