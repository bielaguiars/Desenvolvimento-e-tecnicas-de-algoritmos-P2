#include <stdio.h>

int main() {
    int nmrs[10];
    int i, nmr, contador3 = 0;


    printf("Digite 10 números:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &nmrs[i]);
    }


    for (i = 0; i < 10; i++) {
        if (nmrs[i] == 3) {
            contador3++;
        }
    }

    printf("a) O número 3 aparece %d vezes no vetor.\n", contador3);


    printf("b) Digite o número que deseja pesquisar: ");
    scanf("%d", &nmr);

    int cntdrNmro = 0;
    for (i = 0; i < 10; i++) {
        if (nmrs[i] == nmr) {
            cntdrNmro++;
        }
    }

    printf("O número %d aparece %d vezes no vetor.\n", nmr, cntdrNmro);

    return 0;
}
