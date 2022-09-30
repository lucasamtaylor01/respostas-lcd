#include <stdio.h>

int main(){
    // Declara o vetor e define o tamanho
    int v[6];

    //Leitura dos valores
    for (int i = 0; i < 6; i++){
        printf("Entre com o valor de v[%d]: ", i);
        scanf("%d", &v[i]);
    }
    
    //Impressão dos valores
    for (int i = 0; i <6; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
    return 0;
}