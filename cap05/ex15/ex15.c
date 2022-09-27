#include <stdio.h>

int main(){
    int n, x, maior, menor;

    // Entrada do primeiro valor
    do{
        printf("Entre com o primeiro valor: ");
        scanf("%d", &n);
        if (n <= 0){
            printf("É necessário que o primeiro valor seja positivo maior que 0. Tente novamente \n");
        }      
    } while (n <=0);

    maior = n;
    menor = n;

    while (1){
        printf("Entre com um novo valor: ");
        scanf("%d", &x);
        if (x < 0){
            break;
        }
        
        if (x < menor){
            menor = x;
        }

        if (x > maior){
            maior = x;
        }    
    }

    printf("O maior valor é %d\nO menor valor é: %d \n", maior, menor);

    
    return 0;
}
