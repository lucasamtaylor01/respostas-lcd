#include <stdio.h>

int main(){
    int menor, maior, n, contador;
    printf("Defina o valor de a0: ");
    scanf("%d", &n);
    menor = maior = n;
    
    for (contador = 1; contador < 10; contador++){
        printf("Defina o valor de a%d: ", contador);
        scanf("%d", &n);
        if (n < menor){
            menor = n;
        }
        if(n > maior){
            maior = n;
        }
    }
    printf("O menor número é: %d.\nO maior número é: %d.\n",menor, maior);
    
    return 0;
}