#include <stdio.h>

int main(){
    float pi, raio, altura, volume;
    pi = 3.141592;

    printf("**CALCULANDO O VOLUME DO CILINDRO**\nDefina o valor da altura: ");
    scanf("%f", &altura);   
    printf("Defina o valor do raio: ");
    scanf("%f", &raio);

    volume = raio*raio*altura*pi;

    printf("Um cilindro circular reto que possui %f u.m. de raio e %f u.m de altura, possui %f u.v.\n", raio, altura, volume);
    return 0;
}