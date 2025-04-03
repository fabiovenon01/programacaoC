#include <stdio.h>

int main() {
    // declarar variaveis produto, u i estoque, doble valor unitario, 
    // u i quantidade minima
    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB;


    // exibir as informaçoes dos produtos
    printf("Produto %s tem estoque %u e o valor unitario e R$ %.3f\n", produtoA, estoqueA, valorA); // %s = string, %u = unsigned numero positivo, %.3f para mostrar 3 caracteres depois do . no float
    printf("Produto %s tem estoque %u e o valor unitario e R$ %.3f\n", produtoB, estoqueB, valorB);

    // comparacoes com o valor minimo de estoque
    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("O produto %s tem estoque minimo de %d\n", produtoA, resultadoA);
    printf("O produto %s tem estoque minimo de %d\n", produtoB, resultadoB);

    // comparaçoes entre os valores totais dos produtos
    printf("O valor total de A (R$ %.3f) e maior que o valor total de B (R$ %.3f): %d\n", estoqueA * valorA, estoqueB * valorB, (estoqueA * valorA) > (estoqueB * valorB));

    return 0;
}