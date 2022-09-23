#include <stdio.h>

int main(){
    int soma, k;
    soma = 0;
    k = 1;
    while(k <= 50){
        soma = soma+(2*k);
        k++;
    }
    printf("%d \n", soma);
    return 0;
}