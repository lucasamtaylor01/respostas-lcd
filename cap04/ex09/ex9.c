#include <stdio.h>

int main(){
    double peso, altura;
    printf("Insira a altura em metros: ");
    scanf("%lf", &altura);
    printf("Insira o peso em quilos: ");
    scanf("%lf", &peso);

    if (altura < 1.2){
        if (peso < 60){
            printf("CLASSIFICAÇÃO: A\n");
        }else if (peso >= 60 && peso <= 90){
            printf("CLASSIFICAÇÃO: D\n");
        }else{
            printf("CLASSIFICAÇÃO: G\n");
        }
    }

    if (altura >= 1.2 && altura <=1.7){
        if (peso < 60){
            printf("CLASSIFICAÇÃO: B\n");
        }else if (peso >= 60 && peso <= 90){
            printf("CLASSIFICAÇÃO: E\n");
        }else{
            printf("CLASSIFICAÇÃO: H\n");
        }
    }

    if (altura > 1.7){
        if (peso < 60){
            printf("CLASSIFICAÇÃO: C\n");
        }else if (peso >= 60 && peso <= 90){
            printf("CLASSIFICAÇÃO: F\n");
        }else{
            printf("CLASSIFICAÇÃO: I\n");
        } 
    }
    
    return 0;
}