#include <stdio.h>

int main(){
    //Definição e atribuição de valores
    int v[5];
    float media, soma;
    soma = 0;

    // Leitura dos valores
    for (int i = 0; i < 5; i++){
        printf("Defina o valor de v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    // Lógica para a média
    for (int i = 0; i < 5; i++){
        soma+=v[i];
    }
    media = soma / 5;

    // Impressão dos valores
    printf("Os valores inseridos foram: ");
    for (int i = 0; i < 5; i++){
        printf("%d ", v[i]);
    }
    
    //Impressão da média
    printf("\nA média desses valores é: %f\n", media);
    return 0;
}