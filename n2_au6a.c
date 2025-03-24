#include <stdio.h>

int main (){
    int a = 10;
    int b = 3;
    float quociente = (float) a / b; // a é explicitamente convertido em float. Ao por (float) força a exatidao da fração (testar sem ele)

    printf("Quociente: %.2f\n", quociente);



return 0;

}