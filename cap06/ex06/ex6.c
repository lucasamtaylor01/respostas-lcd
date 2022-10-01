#include <stdio.h>

int main(){
    //Declaração do vetor
    int v[10];

    //Entrada dos valores de v
    for (int i = 0; i < 10; i++){
        printf("Entre com o valor de v[%d]: ", i);
        scanf("%d", &v[i]);        
    }

    printf("\n");
    //Leitura e verificação se é par ou não
    for (int i = 0; i < 10; i++){
        if (v[i]%2==0){
            printf("É %d que está em v[%d] é par\n",v[i], i);
        }
    }

    return 0;
}