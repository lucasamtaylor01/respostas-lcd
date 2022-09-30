#include <stdio.h>

int main(){
    int n, x, maior, contador;
    contador = 1;

    //Declaração e validação de n
    do{
        printf("Defina o valor de n: ");
        scanf("%d", &n);
        if (n <=0){
            printf("É necessário que o valor seja maior que 0. Tente novamente \n");
        }
        
    } while (n<=0);

    // Entrada do primeiro termno
    printf("Defina o valor de x: ");
    scanf("%d", &x);
    maior = x;

    //Lógica de entrada/análise dos números
    for (int i = 1; i < n; i++){
        printf("Defina o valor de x: ");
        scanf("%d", &x);
        if (x > maior){
            maior = x;
            contador = 0;
        }
        if (x == maior){
            contador+=1;
        }
    }

    //Apresentação do resultado para o usuário
    printf("\nO maior número da sequência fornecida é: %d.\n", maior);
    if (contador == 1){
        printf("E ele apareceu 1 vez.\n");
    }else{
        printf("E ele apareceu %d vezes.\n", contador);
    }
    return 0;
}