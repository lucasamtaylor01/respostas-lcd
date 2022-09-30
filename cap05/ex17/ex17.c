#include <stdio.h>

int main(){
    // Declaração de variáveis e atribuições de valor
    int n, i, contador_elementos, numero_linha;
    i = 1;
    numero_linha = 1;
    contador_elementos = 0;

    // Interação com o usuário
    printf("Insira o valor de n: ");
    scanf("%d", &n);

    // Lógica para a formação do triângulo Floyd
    while (numero_linha <=n){
        printf("%d ", i);
        i++;
        contador_elementos++;
        if (numero_linha == contador_elementos){
            printf("\n");
            numero_linha++;
            contador_elementos = 0;
        }     
    }
    return 0;
}