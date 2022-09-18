#include <stdio.h>

int main(){
    float x;
    printf("Escolha um número: ");
    scanf("%f", &x);
    float quinta_parte = x/5;

    printf("A quinta parte de %f é: %f \n", x, quinta_parte);
    return 0;
}