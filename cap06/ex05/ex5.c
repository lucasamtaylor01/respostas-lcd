#include <stdio.h>

int main(){
    //Declaração de variáveis
    int v[8], x, y, soma;

    // Atribuição de valores aos vetores
    for (int i = 0; i < 8; i++){
        printf("Defina o valor de v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    //Apresentação dos valores vetoriais
    printf("\n**VALORES VETORIAIS**\n");
    for (int i = 0; i < 8; i++){
        printf("v[%d] = %d ", i, v[i]);
        if ((i+1) < 7 && (i+1)%2==0){
            printf("\n");
        }     
    }
    printf("\n\n");
    
    // Seleção e validação do indíce X
    do{
        printf("Selecione o indíce de X: ");
        scanf("%d", &x);
        if (x < 0 || x > 7){
            printf("Não há indíce nesse intervalo. Tente novamente.\n");
        }
        
    } while (x < 0 || x > 7);

    // Seleção e validação do indíce Y
    do{
        printf("Selecione o indíce de Y: ");
        scanf("%d", &y);
        if (y < 0 || y > 7){
            printf("Não há indíce nesse intervalo. Tente novamente.\n");
        }
        if (y == x){
            printf("Você escolheu o mesmo valor de x, escolha outro. \n");
        }
        
    } while (y < 0 || y > 7 || y == x);    
    
    //Lógica da soma
    soma = v[x] + v[y];
    
    //Apresentação dos resultados ao usuário
    printf("\nA soma de v[%d] e v[%d] é: %d.\n", x, y, soma);

    
    return 0;
}