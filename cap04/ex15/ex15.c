#include <stdio.h>
#include <math.h>

int main(){
    printf("**EQUAÇÃO DE SEGUNDO GRAU**\n");
    int a, b, c;
    printf("Entre com os coeficientes a, b e c da expressão ax²+bx+c = 0: ");
    scanf("%d %d %d", &a, &b, &c);

    // Novamente, tudo int por questão estética e para facilitar
    int delta;
    int x, x1, x2;

    delta = pow(b, 2) - 4*a*c;
    if(delta < 0){
        printf("Não possui raizes reais.\n");
    }else{
        if(delta == 0){
            x = -b / 2*a;
            printf("Raiz única: %d \n", x);
        }else{
            x1 = (-b + sqrt(delta)) / 2*a;
            x2 = (-b - sqrt(delta)) / 2*a;
            printf("As raízes da equação são: %d e %d\n", x1, x2);
        }
    }
    return 0;
}