#include <stdio.h>

int main(){
    printf("**CÓDIGO DE MESES**\n");
    printf("01: jan\t02: fev\t3: mar\t04: abr\t05: mai\t06: jun\n07: jul\t08: ago\t09: set\t10: out\t11: nov\t12: dez\n");
    int mes;
    do{
        printf("Selecione o mês: ");
        scanf("%d", &mes);
        if (mes < 1 || mes > 12){
            printf("Inválido. Tente novamente!\n");
        }
        
    }while (mes < 1 || mes >12);

    switch (mes){
    case 1:
        printf("O mês %d corresponde a janeiro.\n", mes);
        break;
    case 2:
        printf("O mês %d corresponde a fevereiro.\n", mes);
        break;
    case 3:
        printf("O mês %d corresponde a março.\n", mes);
        break;
    case 4:
        printf("O mês %d corresponde a abril.\n", mes);
        break;
    case 5:
        printf("O mês %d corresponde a maio.\n", mes);
        break;
    case 6:
        printf("O mês %d corresponde a junho.\n", mes);
        break;
    case 7:
        printf("O mês %d corresponde a julho.\n", mes);
        break;
    case 8:
        printf("O mês %d corresponde a agosoto.\n", mes);
        break;
    case 9:
        printf("O mês %d corresponde a setembro.\n", mes);
        break;
    case 10:
        printf("O mês %d corresponde a outubro.\n", mes);
        break;
    case 11:
        printf("O mês %d corresponde a novembro.\n", mes);
        break;
    case 12:
        printf("O mês %d corresponde a dezembro.\n", mes);
        break;
    }
    return 0;
}