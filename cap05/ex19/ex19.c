#include <stdio.h>

int main(){
    // Declaração de variáveis e atribuição de valores
    int denominador, numerador, soma;
    denominador = 1;
    numerador = 1;
    soma = 0;

    // Lógica da soma
    while(numerador <= 99){
        soma+= numerador/denominador;
        numerador +=2;
        denominador +=1;
    }

    printf("A soma é: %d \n", soma);
    return 0;
}