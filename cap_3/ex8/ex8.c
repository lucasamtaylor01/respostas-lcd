#include <stdio.h>
int main(){
    float c, f;
    printf("Insira a temperatura em Celsius: ");
    scanf("%f", &c);
    f = (c*9)/5 + 32;
    printf("%f °C equivale a %f °F", c, f);
    return 0;
}