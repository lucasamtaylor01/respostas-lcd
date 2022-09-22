#include <stdio.h>

int main(){
    // Definindo o sexo
    char sexo;
    printf("Se for homem digite h. Se for mulher digite m.\nDigite: ");
    scanf("%c", &sexo);
    if(sexo == 'h' || sexo == 'm'){
        float altura;
        printf("Digite sua altura em metros: ");
        scanf("%f", &altura);
        if(sexo == 'h'){
            double peso_ideal = 72.5*altura-58;
            printf("Seu peso ideial é %f\n", peso_ideal);
        }
        if (sexo == 'm'){
            double peso_ideal = ((62.1*altura)-44.7);
            printf("Seu peso ideial é %f\n", peso_ideal);     
        }
    }
    return 0;
}