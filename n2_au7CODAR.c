#include <stdio.h>

int main (){
    int nota1, nota2 , nota3; // com int o resultado sempre sera numero inteiro , com float a nota vai aparecer variavel
    int media;                // trocar pra float para aparecer variavel

    printf("*** Programa de Calculo de Media ***\n");
    
    printf("Digite sua Primeira Nota: \n");
    scanf("%d", &nota1);                    // mudar pra %f para o resultado aparecer variavel

    printf("Digite sua Segunda Nota: \n");
    scanf("%d", &nota2);                    // mudar pra %f para o resultado aparecer variavel

    printf("Digite sua Terceira Nota: \n");
    scanf("%d", &nota3);                    // mudar pra %f para o resultado aparecer variavel

    media = (nota1 + nota2 + nota3) / 3;
    printf("A media é: %d", media);        // mudar pra %f para o resultado aparecer variavel e %.1f ou %.2f e etc para aparecer o numero de cadas decimais necessarias

    return 0;
}