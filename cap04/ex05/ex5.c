#include <stdio.h>
#include <math.h>

int main(){
    int x;
    printf("Insira um número inteiro x: ");
    scanf("%d", &x);
    if (x >= 0){
        int x_quadrado = pow(x, 2);
        double raiz_x = sqrt(x);

        printf("x² = %d\n", x_quadrado);
        printf("√x = %f\n", raiz_x);
    }else{
        printf("O número é negativo");
    }
    
    return 0;
}