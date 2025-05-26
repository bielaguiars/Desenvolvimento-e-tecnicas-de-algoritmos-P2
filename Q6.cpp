#include <stdio.h>


typedef struct {
    char nome[50];
    float largura;
    float comprimento;
    float area;
} Ccomodo;

int main() {
    Ccomodo comodos[50]; 
    int n_cmds = 0; 
    char continuar;

    
    do {
        printf("digite o nome do comodo: ");
        scanf("%s", comodos[n_cmds].nome); 

        printf("digite a largura do comodo em m: ");
        scanf("%f", &comodos[n_cmds].largura); 

        printf("digite o comprimento do comodo em m: ");
        scanf("%f", &comodos[n_cmds].comprimento);

        
        comodos[n_cmds].area = comodos[n_cmds].largura * comodos[n_cmds].comprimento;

        n_cmds++; 

        printf("deseja continuar calculando outros comodos? (S/N): ");
        scanf(" %c", &continuar);
    } while (continuar == 'S' || continuar == 's');

  
    float area_total = 0;
    printf("\nfale o comodo detalhadamente:\n");
    for (int i = 0; i < n_cmds; i++) {
        printf("Cômodo: %s, Largura: %.2f m, Comprimento: %.2f m, Área: %.2f m²\n",
               comodos[i].nome, comodos[i].largura, comodos[i].comprimento, comodos[i].area);
        area_total += comodos[i].area; 
    }
    printf("área da residência: %.2f m²\n", area_total);

    return 0;
}

