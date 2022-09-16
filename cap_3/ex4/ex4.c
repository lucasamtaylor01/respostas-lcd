#include <stdio.h>

int main(){
    const int x = 4;
    float a,b,c,d;
    printf("Digite quatro valores do tipo float: \n");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    float soma, media;
    soma = a+b+c+d;
    media = soma / x;
    printf("A média aritmética dos quatro elementos é: %f", media);
    return 0;
}