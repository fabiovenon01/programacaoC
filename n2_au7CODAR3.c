#include <stdio.h>

int main (){
    int nota1, nota2 , nota3; 
    float media;                

    printf("*** Programa de Calculo de Media ***\n");
    
    printf("Digite sua Primeira Nota: \n");
    scanf("%d", &nota1);                    // como esta usando o int trabalhamos com o numero inteiro %d

    printf("Digite sua Segunda Nota: \n");
    scanf("%d", &nota2);                    // como esta usando o int trabalhamos com o numero inteiro %d                    

    printf("Digite sua Terceira Nota: \n");
    scanf("%d", &nota3);                    // como esta usando o int trabalhamos com o numero inteiro %d                   

    media = (float)(nota1 + nota2 + nota3) / 3; // usando a forma explicita (cast) ira aparecer o valor fracionado sem ele ira aparecer inteiro
    printf("A media é: %.1f", media);  // pode escolher quantas casas decimais vao aparecer e so trocar o %.1f por 2 , 3 e etc      

    return 0;
}