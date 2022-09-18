#include <stdio.h>
#include <math.h>

int main(){
    double cateto1, cateto2, hipotenusa;

    printf("**CALCULO DA HIPOTNUSA**\n");
    printf("Insira o valor do primeiro cateto: ");
    scanf("%lf", &cateto1);
    printf("Insira o valor do segundo cateto: ");
    scanf("%lf", &cateto2);

    hipotenusa = pow(pow(cateto1,2)+ pow(cateto2,2), 0.5);

    printf("A hipotenusa é: %f\n", hipotenusa);
    return 0;
}