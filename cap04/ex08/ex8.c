#include <stdio.h>

int main(){
    int idade;
    printf("Insira a idade: ");
    scanf("%d", &idade);

    if(idade < 5){
        printf("Não há classificação para esta idade.\n");
    }else if (idade >= 5 && idade <=7){
        printf("Classificação: INFANTIL A\n");
    }else if (idade >= 8 && idade <=10){
        printf("Classificação: INFANTIL B\n");
    }else if (idade >=11 && idade <=13){
        printf("Classificação: JUVENIL A\n");
    }else if (idade >=14 && idade <=17){
        printf("Classificação: JUVENIL B\n");
    }else{
        printf("Classificação: SÊNIOR\n");
    }
    return 0;
}