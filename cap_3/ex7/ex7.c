#include <stdio.h>
int main(){
    float real, dolar;
    printf("Insira o valor em reais: ");
    scanf("%f", &real);
    dolar = real/5.3; //cotação do dia 16.09.22
    printf("R$ %f equivale a U$ %f\n", real, dolar);
    return 0;
}