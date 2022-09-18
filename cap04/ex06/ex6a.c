#include <stdio.h>

int main(){
    // Declarando a variável
    int primeiro_termo, ultimo_termo, n, soma;
    
    // Atribuindo valores à variáveis
    primeiro_termo = 0;
    n = 50;
    ultimo_termo = (n-1)*2;
    soma = (n*(primeiro_termo+ultimo_termo))/2;

    // Imprimindo as variáveis
    printf("A soma dos 50 primeiros números pares é: %d", soma);
    printf("\n");
    return 0;
}