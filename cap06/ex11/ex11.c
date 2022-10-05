#include <stdio.h>
#include <math.h>

/* Por estética, acabei usando o int, mas como o ex pede em float,
é só mudar a linha  8 de int para float e as devidas conversões de %d -> %f */

int main(){
    int a[20], b[100];

    for (int i = 0; i < 20; i++){
        printf("Entre com o valor de a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 20; i++){
        b[i] = pow(a[i], 2);
    }

    printf("\n");
    for (int i = 0; i < 20; i++){
        printf("a[%d] = %d || b[%d] = %d\n",i, a[i], i, b[i]);
    }

    printf("\n");
    return 0; 
}