#include <stdio.h>

int main(){
    //Declaração de variáveis
    int x[10], maior, menor;

    //Inserindo os valores para o vetor
    for (int i = 0; i < 10; i++){
        printf("Entre com o valor de v[%d]: ", i);
        scanf("%d", &x[i]);
    }

    //Declarando o primeiro como maior e menor
    maior = menor = x[0];

    //Lógica para achar o menor e o maior
    for (int i = 1; i < 10; i++){
        if (x[i] > maior){
            maior = x[i];
        }
        if (x[i] < menor){
            menor = x[i];
        }
    }
    
    //Apresentação do resultado para o usuário
    printf("\nO menor valor do array é: %d\nO maior valor do array é: %d\n", menor, maior);
    
    return 0;
}