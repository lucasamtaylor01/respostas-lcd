#include <stdio.h>

int main(){
    printf("**DIVISORES DE N**\n");
    int n;
    int divisor = 1;

    do{
        printf("Entre com n (sendo n>0): ");
        scanf("%d", &n);
        if (n<=0){
            printf("Valor inválido! Tente novamente...");
        }
    } while (n<=0);
    
    while (1){
        if (n%divisor==0){
            printf("O número %d é dividor de %d \n", divisor, n);
        }
        divisor++;
        if (divisor > n/2){
            break;
        }
    }
    return 0;
}