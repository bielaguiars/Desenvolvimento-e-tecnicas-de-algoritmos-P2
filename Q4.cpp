#include <stdio.h>
int main() {
    int ano_de_nasc, idade;
    char categorias[20];
    printf("Write the swimmer's year of birth: ");
    scanf("%d", &ano_de_nasc);
    idade = 2021 - ano_de_nasc;
    if (idade >= 5 && idade < 7) {
        printf(categorias, "Children A");
    } else if (idade >= 8 && idade < 10) {
        printf(categorias, "Children B");
    } else if (idade >= 11 && idade < 13) {
        printf(categorias, "Juvenile A");
    } else if (idade >= 14 && idade < 17) {
        printf(categorias, "Juvenile B");
    } else {
        printf(categorias, "Senior");
    }
    printf("Swimmer with age \"%d\" and category \"%s\"\n", idade, categorias);
}
/* botei usando switch case como comentário pois não sabia se mandava como outra questão

#include <stdio.h>

int main() {
    int ano_de_nasc, idade;
    char categorias[20];

    printf("Escreva o ano de nascimento do nadador: ");
    scanf("%d", &ano_de_nasc);

    idade = 2021 - ano_de_nasc;

    switch (idade) {
        case 5:
        case 6:
        case 7:
            strcpy(categorias, "Infantil A");
            break;
        case 8:
        case 9:
        case 10:
            strcpy(categorias, "Infantil B");
            break;
        case 11:
        case 12:
        case 13:
            strcpy(categorias, "Juvenil A");
            break;
        case 14:
        case 15:
        case 16:
        case 17:
            strcpy(categorias, "Juvenil B");
            break;
        default:
            strcpy(categorias, "Sênior");
    }

    printf("Nadador de idade "%d" é da categoria "%s"\n", idade, categoria);

    return 0;
}
*/

