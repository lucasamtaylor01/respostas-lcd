#include <stdio.h>

int main(){
    printf("**CÓDIGO DOS DIAS DA SEMANA**\n");
    printf("1: domingo\n2: segunda-feira\n3: terça-feira\n4: quarta-feira\n5: quinta-fera\n6: sexta-feira\n7: sábado\n");
    int dia_da_semana;
    do{
        printf("Selecione um dia da semana: ");
        scanf("%d", &dia_da_semana);
        if (dia_da_semana < 1 || dia_da_semana > 7){
            printf("Código inválido. Tente novamente.\n");
        }
    } while (dia_da_semana < 1 || dia_da_semana > 7);
    
    switch (dia_da_semana){
    case 1:
        printf("%d corresponde a domingo\n", dia_da_semana);
        break;
    case 2:
        printf("%d corresponde a segunda-feira\n", dia_da_semana);
        break;
    case 3:
        printf("%d corresponde a terça-feira\n", dia_da_semana);
        break;
    case 4:
        printf("%d corresponde a quarta-feira\n", dia_da_semana);
        break;
    case 5:
        printf("%d corresponde a quinta-feira\n", dia_da_semana);
        break;
    case 6:
        printf("%d corresponde a sexta-feira\n", dia_da_semana);
        break;
    case 7:
        printf("%d corresponde a sábado\n", dia_da_semana);
        break;
    }

    return 0;
}