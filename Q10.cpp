#include <stdio.h>
#include <string.h>

void encode_zenit_polarz(char *str) {
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'Z') {
            str[i] = 'P';
        } else if (str[i] == 'P') {
            str[i] = 'Z';
        } else if (str[i] == 'z') {
            str[i] = 'p';
        } else if (str[i] == 'p') {
            str[i] = 'z';
        }
    }
}

int main() {
    char str[100];

    printf("Digite uma string para codificar: ");
    fgets(str, sizeof(str), stdin);


    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    encode_zenit_polarz(str);
    
    printf("String codificada: %s\n", str);

    return 0;
}

