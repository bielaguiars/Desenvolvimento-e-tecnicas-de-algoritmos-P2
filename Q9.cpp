#include <stdio.h>

int main() {
    char nome[100]; 


    printf("Digite o nome completo: ");
    scanf(" %[^\n]s", nome);


    printf("a) Nome em texto normal: %s\n", nome);


    printf("b) Cada palavra do nome em linhas diferentes:\n");
    int i = 0;
    while (nome[i] != '\0') {
        if (nome[i] != ' ') {
            putchar(nome[i]);
        } else {
            putchar('\n');
        }
        i++;
    }
    putchar('\n'); 

    return 0;
}
