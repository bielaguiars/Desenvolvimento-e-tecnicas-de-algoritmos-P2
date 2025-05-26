#include <stdio.h>

long long int potencia(int b, int ex) {
    long long int resultado = 1;
    for (int i = 0; i < ex; i++) {
        resultado *= b;
    }
    return resultado;
}

int main() {
    int b, ex;

    printf("Digite o valor da base: ");
    scanf("%d", &b);
    printf("Digite o valor do expoente: ");
    scanf("%d", &ex);

    printf("%d elevado a %d = %lld\n", b, ex, potencia(b, ex));

    return 0;
}
