#include <stdio.h>

int main(){
    int contador, n;
    float soma, media;
    contador = soma = 0;

    for (int contador = 0; contador <10; contador++){
        printf("Insira o valor de a%d: ", contador);
        scanf("%d", &n);
        soma += n;
    }

    media = soma / 10;
    printf("A média dos números inseridos é: %f\n", media);
    return 0;
}