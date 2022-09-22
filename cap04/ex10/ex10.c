#include <stdio.h>
#include <math.h>

int main(){

    // Definindo as variáveis x, y, z
    int x, y, z;
    printf("Escolha três números: ");
    scanf("%d %d %d", &x, &y, &z);

    // Definindo o tipo de média
    int cod_media;
    printf("**CÓDIGO DO TIPO DE MÉDIA**\n1: Geométríca\t2: Ponderada\n3: Harmônica\t4: Aritmética\n");
    printf("Insira o código da média: ");
    scanf("%d", &cod_media);

    double media, denominador;

    switch (cod_media){
    case 1:
        media = x*y*z;
        break;
    
    case 2:
        media = (x+2*y+3*z)/6;
        break;
    
    case 3:
        denominador = pow(x, -1) + pow(y, -1) + pow(z, -1);
        media = 1/denominador;
        break;

    case 4:
        media = (x+y+z)/3;
        break;
    }
    printf("A média é: %lf\n", media);
    return 0;

}

