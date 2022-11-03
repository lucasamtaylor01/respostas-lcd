#include <stdio.h>
float converte_temp(double f){
    float c = (f-32)*(5.0/9.0);
    return c;
}

int main(){
    float f;
    printf("Insira a temperatura em Fahrenheit: ");
    scanf("%f", &f);

    printf("A temperatura em Celsius é: %.2f\n", converte_temp(f));
    return 0;
}