#include <stdio.h>

int main(){
    int a, b ,c;
    printf("Escolha três valores inteiros para a soma: \n");
    scanf("%d %d %d", &a, &b, &c);
    int soma = a+b+c;
    printf("%d+%d+%d=%d.\n", a, b, c, soma);
    return 0;    
}