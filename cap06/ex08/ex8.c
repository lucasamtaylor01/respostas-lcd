#include <stdio.h>

int main(){
    
    //Declaração de valores e atribuições de valores
    float v[10], soma_positivos;
    int contador_negativos;
    soma_positivos = contador_negativos = 0;

    //Atribuição de valores para o vetor
    for (int i = 0; i < 10; i++){
        printf("Entre com o valor de v[%d]: ", i);
        scanf("%f", &v[i]);
    }

    //Leitura do vetor
    for (int i = 0; i < 10; i++){

        //Lógica para contar negativos
        if (v[i] < 0){
            contador_negativos++;
        }

        //Lógica para somar os valores positivos
        if (v[i] > 0){
            soma_positivos+=v[i];
        }
    }

    //Impressão dos resultados para o usuário
    printf("\nNo array, há %d negativos.\nA soma dos inteiros positivos é: %f\n", contador_negativos, soma_positivos);

    return 0;
}