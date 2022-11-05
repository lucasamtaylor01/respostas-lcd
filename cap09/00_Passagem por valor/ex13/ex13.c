#include <stdio.h>
int somatorio(int n){
    int soma = 0;
    for (int i = 0; i <= n; i++){
        soma+=i;
    }
    return soma;
    
}
int main(){
    int n;
    printf("Entre com o valor de n: ");
    scanf("%d", &n);
    printf("O somatório é: %d\n", somatorio(n));
    return 0;
}