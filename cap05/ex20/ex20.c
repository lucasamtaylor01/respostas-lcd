#include <stdio.h>

int main(){
    // Declaração e atribuição de valores para as variáveis
    int n;
    float fatorial, soma, i, j;
    fatorial = i = j = 1;

    //Definição de n pelo usuário e validação
    do{
        printf("Entre com o valor de n: ");
        scanf("%d", &n);
        if (n<=0){
            printf("É necessário que n > 0. Tente novamente.\n");
        }
    } while (n <=0);

    //Lógica para a soma
    while (i <= n){
        // Lógica para o fatorial
        while (fatorial <= j){ 
            fatorial *=j;
            j--;
        }
        soma += (1/fatorial);
        i++;
        j = i;
    }
    // Apresentação dos valores para o usuário
    printf("A soma é %f\n", soma);
    return 0;
}
