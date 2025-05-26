#include ‹stdio.h›
#include <locale.h>
 
int main() {

setlocale(0, "Portuguese") ;
int nros [5], i;
// entrada - capturar um número e guardar em um array, repetindo 5 vezes
for (i = 0; i < 5; i++) {
printf ("Digite um número: "); scanf ("%d", &nros[i]);
}
//saida - escrever número por número, todos Lidos na entrada // na ordem crescente dos índices ?> de 0 até 4
for (i = 0; i < 5; i++)
printf("%d\t", nros[i]);
printf ("\n"):
//na ordem descrescente dos índices -> 4 até e
for (1 = 4; i >= 0; i--)
printf("%d\t", nros(i]);
}
