#include <stdio.h>

long long int potencia(int base, int exponente) {
    long long int resultado = 1;
    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }
    return resultado;
}

void potenciasDe3() {
    for (int i = 0; i <= 15; i++) {
        printf("3 elevado a %d = %lld\n", i, potencia(3, i));
    }
}

int main() {
    potenciasDe3();
    return 0;
}
