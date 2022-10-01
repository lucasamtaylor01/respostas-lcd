#include <stdio.h>

int main(){
    //Declaração de variáveis e atribuição do valor inicial de j
    int v[100];
    int j = 0;

    //Lógica de formação do vetor v[]
    for (int i = 0; i < 100; i++){
        if (j%7!=0){
            v[i] = j;
        }else{
            j++;
            v[i] = j;
        }
        j++;
    }
    
    // Apresentação do resultado ao usuário
    for (int i = 0; i < 100; i++){
        printf("v[%d] = %d\t", i, v[i]);
        if ((i+1)<100 && (i+1)%4==0){
            printf("\n");
        }
    }
    printf("\n");
    
    return 0;
}