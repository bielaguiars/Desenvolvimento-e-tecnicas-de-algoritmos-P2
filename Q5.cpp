#include <stdio.h>

int main() {
    char resposta;

    do {
        int vlr1, vlr2, sm;


        printf("Digite o primeiro valor: ");
        scanf("%d", &vlr1);

        printf("Digite o segundo valor: ");
        scanf("%d", &vlr2);

 
        sm = vlr1 + vlr2;


        printf("A soma dos valores �: %d\n", sm);

 
        printf("Novo C�lculo (S/N)? ");
        scanf(" %c", &resposta); 

    } while (resposta == 'S' || resposta == 's');

    printf("Fim dos C�lculos\n");

    return 0;
}
