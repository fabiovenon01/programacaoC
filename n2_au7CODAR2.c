#include <stdio.h>

int main (){
    float nota1, nota2 , nota3; // com int o resultado sempre sera numero inteiro , com float a nota vai aparecer variavel
    float media;                // trocar pra float para aparecer variavel

    printf("*** Programa de Calculo de Media ***\n");
    
    printf("Digite sua Primeira Nota: \n");
    scanf("%f", &nota1);                    // mudar pra %f para o resultado aparecer variavel

    printf("Digite sua Segunda Nota: \n");
    scanf("%f", &nota2);                    // mudar pra %f para o resultado aparecer variavel

    printf("Digite sua Terceira Nota: \n");
    scanf("%f", &nota3);                    // mudar pra %f para o resultado aparecer variavel

    media = (nota1 + nota2 + nota3) / 3;
    printf("A media é: %.1f", media);        // mudar pra %f para o resultado aparecer variavel e %.1f ou %.2f e etc para aparecer o numero de cadas decimais necessarias

    return 0;
}