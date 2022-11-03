#include <stdio.h>
int elevado(x, y){
    int elevado = 1;
    for (int i = 0; i < y; i++){
        elevado*=x;
    }
    return elevado;
    
}
int main(){
    int base, expoente;
    printf("Insira a base: ");
    scanf("%d", &base);
    printf("Insira o expoente: ");
    scanf("%d", &expoente);
    int aaa =
    printf("%d^%d = %d\n", base, expoente, elevado(base, expoente));
    return 0;
}