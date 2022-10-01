#include <stdio.h>

int main(){
    //Declaração dos vetores
    int a[10], b[10], c[10];

    //Atribuição de valores do vetores a[] e b[]
    printf("ATRIBUIÇÃO DE VALORES PARA A[]\n");
    for (int i = 0; i < 10; i++){
        printf("Entre com o valor de a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nATRIBUIÇÃO DE VALORES PARA B[]\n");
    for (int i = 0; i < 10; i++){
        printf("Entre com o valor de b[%d]: ", i);
        scanf("%d", &b[i]);
    }   

    //Lógica de formação do vetor c[]
    for (int i = 0; i < 10; i++){
        c[i] = a[i] - b[i];
    }
    
    //Apresentação dos resultados ao usuário
    printf("\n***APRESENTAÇÃO DO VETOR C[]**\n");
    for (int i = 0; i < 10; i++){
        printf("c[%d] = %d\t", i, c[i]);
        if ((i+1) < 10 && (i+1)%2==0){
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}