#include <stdio.h>

int main () {
    int x = 5;
    float y = 5.0;
    char c = 'a';

    printf("x >= y: %d\n", x >= y);
    printf("x == y: %d\n", x == y);
    printf("x != y: %d\n", x != y);

    printf("x >= c: %d\n", x >= c);
    printf("0 valor ASCII de %c é: %d\n", c, c); // o %c de caracter pega o valor do char c que e o a.

    return 0;
}