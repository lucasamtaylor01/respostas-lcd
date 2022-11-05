#include <stdio.h>

void exclamacao(int n){
    int contador = 1;
    while(contador<=n){
        for (int i = 0; i < contador; i++){
            printf("!");
        }
        printf("\n");
        contador++;
    }
}
int main(){
    int n;
    printf("Insira o valor de n: ");
    scanf("%d", &n);
    exclamacao(n);
    return 0;
}