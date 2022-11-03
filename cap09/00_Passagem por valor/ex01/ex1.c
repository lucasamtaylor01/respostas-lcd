#include <stdio.h>
int devolve_maior(int x, int y){
    if (x >= y){
        return x;
    }else if (x < y){
        return y;
    }
    
    
}
int main(){
    int x, y;
    printf("Insira o primero valor: ");
    scanf("%d", &x);
    
    printf("Insira o segundo valor: ");
    scanf("%d", &y);

    printf("O maior valor é: %d\n", devolve_maior(x,y));
    return 0;
}