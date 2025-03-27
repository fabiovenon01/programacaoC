#include <stdio.h>

int main(){
    int numeroNormal = 2147483647; // valor maximo de int
    long int numeroGrande = 2147483647;

    printf("Numero relugar (int): %d\n", numeroNormal);
    printf("Numero grande (long int): %ld\n", numeroGrande); // ld numero longo

    numeroGrande = 2147483648; // valor maior q  o maximo de int
    printf("Numero grande atualizado (long int): %ld\n", numeroGrande);

    return 0;
    
}