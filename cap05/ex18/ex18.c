#include <stdio.h>

int main(){
    // Declaração da variável e lógica de validação de n
    int n;
    do{
        printf("Insira o valor de n: ");
        scanf("%d", &n);
        if (n <= 0){
            printf("É necessário que n seja maior que 0. Tente novamente. \n");
        }
    } while (n <= 0);

    // Lógica para verificação se n é primo ou não.
    for (int divisor = 2; ; divisor++){
        if (n%divisor==0){
            printf("Não é primo.\n");
            break;
        }
        if (divisor > n/2){
            printf("É primo!\n");
            break;
        }
        
    }
    return 0;
}