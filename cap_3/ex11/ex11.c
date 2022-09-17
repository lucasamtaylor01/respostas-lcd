#include <stdio.h>

int main(){
    float pi, raio, area;

    pi = 3.141592;
    
    printf("Insira o valor do raio do círculo: ");
    scanf("%f", &raio);
    
    area = pi*raio*raio;

    printf("O circulo que possui %f de raio possui uma área de %f u.a.\n", raio, area);
    return 0;
}