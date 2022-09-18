#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    printf("Valor lido: %f \n", x);
    return 0;

    /* O programa não funcionou, pois x é uma variável do tipo int.
    Ao ser invocada do tipo float (%f), não rolou. */
    
}