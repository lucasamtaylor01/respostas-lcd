#include <stdio.h>

float serie(int n){
    float denominador, numerador, k, valor;

    numerador = 2;
    denominador = 4;
    k = 1;
    valor = numerador/denominador;
    while(1){
        
        numerador+=(2*k)+1;
        k++;
        denominador++;
        if(numerador >= (n*n)+1 || denominador >= n+3){
            return valor;
        }
        valor+=(numerador/denominador);
    }
    
}

int main(){
    int n;
    printf("Insira o valor de n: ");
    scanf("%d", &n);
    printf("O resultado da série é: %.2f\n", serie(n));
    return 0;
}