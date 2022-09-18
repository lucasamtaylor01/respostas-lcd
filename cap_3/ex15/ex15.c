#include <stdio.h>

int main(){
    int numero, numero_inverso;
    int a, b, c;
    
    printf("**INVERTENDO O NÚMERO\n Insira um número entre 100 e 999: ");
    scanf("%d", &numero);

    if (numero < 100 || numero > 999){
        return 1;
    }
    a = numero / 100;
    b = (numero%100) / 10;
    c = (numero%100) % 10;

    numero_inverso = c*100 + b*10 + a;
    printf("O invertendo os algorismos de %d, temos %d\n", numero, numero_inverso);
    return 0;
}