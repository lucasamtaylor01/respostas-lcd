#include <stdio.h>

int main(){
    int x;
    printf("Digite um número inteiro: ");
    scanf("%d", &x);
    if (x % 2 == 0){
        printf("%d é um número par\n", x);
    }else{
        printf("%d é um número ímpar\n", x);
    }
    return 0;
}