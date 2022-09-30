#include <stdio.h>

int main(){
    int n;
    float soma = 0;

    printf("Insira o número n: ");
    scanf("%d", &n);

    for (float i = 1; i <= n; i++){
        soma += (1/i);   
    }

    printf("O harmônico de n é: %f \n", soma);
    return 0;
}