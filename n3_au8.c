#include <stdio.h>

int main () {
    int a = 10;
    int b = 20;

    // a>b - maior que
    // a<b - menor que
    // a=b - maior ou igual
    // a<=b - menor ou igual
    // a==b - igual a
    // a!=b - diferente de
    // sendo o retorno 1 verdadeiro e o retorno 0 falso

    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);

    return 0;
}