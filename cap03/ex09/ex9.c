#include <stdio.h>

int main(){
    float graus, pi, radianos;
    pi = 3.141592;
    printf("Digite o valor em graus para ser convertido em radianos: ");
    scanf("%f", &graus);
    radianos = graus*(pi/180);
    printf("%f é %f rad \n", graus, radianos);
    return 0;
}