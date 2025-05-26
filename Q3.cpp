#include <stdio.h>

int main() {
    int terms = 15;
    int first = 1, second = 1, next;


    printf("1, 1, ");

 
    for (int i = 3; i <= terms; i++) {
        next = first + second;
        printf("%d, ", next);
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}

