#include <stdio.h>

int main() {
    int vlrs[5];
    int maior, menor;

    printf("Digite 5 valores positivos inteiros:\n");
    for (int i = 0; i < 5; i++) {
        do {
            printf("Valor %d: ", i + 1);
            scanf("%d", &vlrs[i]);
            if (vlrs[i] < 0) {
                printf("insira um valor positivo.\n");
            }
        } while (vlrs[i] < 0);
    }

    maior = menor = vlrs[0];

    for (int i = 0; i < 5; i++) {
        if (vlrs[i] > maior) {
            maior = vlrs[i];
        }
        if (vlrs[i] < menor) {
            menor = vlrs[i];
        }
    }

    printf("\nValores digitados:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vlrs[i]);
    }
    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}

