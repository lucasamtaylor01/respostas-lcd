#include <stdio.h>

int main(){
    int dia, mes, ano;
    printf("Digite três números no rerpesentando uma data - Sem barra ('/') \n");
    scanf("%d %d %d", &dia, &mes, &ano);
    printf("%d / %d / %d \n", dia, mes, ano);
    return 0;
}