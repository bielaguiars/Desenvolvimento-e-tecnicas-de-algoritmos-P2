#include �stdio.h�
#include <locale.h>
 
int main() {

setlocale(0, "Portuguese") ;
int nros [5], i;
// entrada - capturar um n�mero e guardar em um array, repetindo 5 vezes
for (i = 0; i < 5; i++) {
printf ("Digite um n�mero: "); scanf ("%d", &nros[i]);
}
//saida - escrever n�mero por n�mero, todos Lidos na entrada // na ordem crescente dos �ndices ?> de 0 at� 4
for (i = 0; i < 5; i++)
printf("%d\t", nros[i]);
printf ("\n"):
//na ordem descrescente dos �ndices -> 4 at� e
for (1 = 4; i >= 0; i--)
printf("%d\t", nros(i]);
}
