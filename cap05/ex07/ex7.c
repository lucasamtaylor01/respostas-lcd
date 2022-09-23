#include <stdio.h>

int main(){
    int contador, n, soma;
    contador = soma = 0;

    while (contador < 10){
        printf("Insira o valor de n: ");
        scanf("%d", &n);
        soma += n;
        contador++;
    }

    printf("A soma dos números inseridos é: %f\n", soma);
    return 0;
}