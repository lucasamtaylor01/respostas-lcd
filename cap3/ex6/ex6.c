#include <stdio.h>

int main(){
    float km_h, m_s;

    printf("Insira a velocidade em km/h: ");
    scanf("%f", &km_h);
    m_s = km_h/3.6;
    printf("%f km/h equivale a %f m/s\n", km_h, m_s);
    return 0;
}