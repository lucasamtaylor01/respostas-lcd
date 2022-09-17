#include <stdio.h>

int main(){
    float x;
    scanf("%f", &x);
    printf("Valor lido: %d \n", x);
    return 0;

    /* O programa não funcionou, pois x é uma variável do tipo float.
    Ao ser invocada do tipo int (d%), não rolou. */
    
}