#include <stdio.h>

int main () {
    float numero1 = 10.2;
    int numero2 = 10;

    printf("numero1 > numero2: %d\n", numero1 > numero2);  
    printf("numero1 == numero2: %d\n", numero1 == numero2);
    printf("numero1 > numero2: %d\n", (int)numero1 > numero2);// se for pra aparecer a forma explicita basta acrescentar o (int) , que nada mias e do que ignorar o valor apois o ponto
    printf("numero1 == numero2: %d\n", (int)numero1 == numero2);// se for pra aparecer a forma explicita basta acrescentar o (int) , que nada mias e do que ignorar o valor apois o ponto
    return 0;
}