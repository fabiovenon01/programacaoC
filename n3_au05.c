#include <stdio.h>

int main() {
    double numeroPreciso = 3.141592653589793;
    long double numeroMuitoPReciso = 3.141592653589793238463;

    printf("Numero preciso (double): %.15f\n", numeroPreciso);
    printf("Numero muito preciso (long double): %.21Lf\n", numeroMuitoPReciso);

    return 0;
}