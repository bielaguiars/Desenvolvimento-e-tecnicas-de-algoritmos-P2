#include <stdio.h>

int main() {
    int numero1, numero2, numero3;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &numero3);

    if (numero1 < numero2 && numero1 < numero3) {
        printf("o menor numero e: %d\n", numero1);
    } else if (numero2 < numero1 && numero2 < numero3) {
        printf("o menor numero e: %d\n", numero2);
    } else 
	    printf("o menor numero e: %d\n", numero3);
    }

