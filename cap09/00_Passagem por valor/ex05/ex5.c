#include <stdio.h>
float cubo(float x){
    return x*x*x;
}

float volume_esfera(float r){
    float volume, pi;
    pi = 3.1414592;
    volume = cubo(r)*pi*4/3;
    return volume;
}

int main(){
    float raio;
    printf("Insira o valor do raio: ");
    scanf("%f", &raio);

    printf("O volume da esfera de raio %.2f é %.2f.\n", raio, volume_esfera(raio));
    return 0;
}