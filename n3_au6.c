#include <stdio.h>

int main () {
    unsigned long int numeroGrandePositivo = 4000000000;
    unsigned int numeroPositivo  = 4000000000;
    long int numeroGrande = 4000000000;
    int numero = 4000000000; // veja e no resultadoo int naoconseguira mostra o numero corretamente

    printf("Numero positivo grande: %lu\n", numeroGrandePositivo);
    printf("Numero Positivo: %u\n", numeroPositivo);
    printf("Numero grande: %ld\n", numeroGrande);
    printf("Numero: %d\n", numero);

    return 0;

}