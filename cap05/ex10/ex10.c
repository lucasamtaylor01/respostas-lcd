#include <stdio.h>

int main(){
    int contador, n;
    float media, soma;
    soma = contador = 0;

    while (contador <10){
        printf("Determine o valor de n: ");
        scanf("%d", &n);
        if (n >= 0){
           soma+=n;
           contador++; 
        }else{
            continue;
        }
    }

    media = soma / 10;
    printf("A média é: %f\n", media);
    

    return 0;
}