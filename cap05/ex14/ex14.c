#include <stdio.h>

int main(){
    int n;
    printf("Entre com o valor de n: ");
    scanf("%d", &n);

    int a, b, c;
    a = 0;
    b = 1;
    int contador = 0;
    printf("0 1 ");
    while (contador < n-2){
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
        contador++;
    }
    printf("\nFIM!\n");
    return 0;
}