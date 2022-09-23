#include <stdio.h>

int main(){
    int codigo_operacao;
    printf("**MINI-CALCULADORA**\n*CÓDIGO DAS OPERAÇÕES MATEMÁTICAS*\n");
    printf("01: soma\n02: subtração\n03: multiplicação\n04: divisão\n");

    do{
        printf("Selecione o código: ");
        scanf("%d", &codigo_operacao);
        if (codigo_operacao < 1 || codigo_operacao > 4){
            printf("Código inválido. Tente novamente.\n");
        }
        
    } while (codigo_operacao < 1 || codigo_operacao > 4);
    
    // Colqouei apenas com inteiros por estética e facilitação
    int a, b, soma, subtracao, multiplicacao;
    float divisao;

    printf("Entre dois  números para o cálculo da operação: ");
    scanf("%d %d", &a, &b);

    switch (codigo_operacao){
    case 1:
        soma = a + b;
        printf("%d + %d = %d\n", a, b, soma);
        break;

    case 2:
        subtracao = a-b;
        printf("%d - %d = %d\n", a, b, subtracao);
        break;

    case 3:
        multiplicacao = a*b;
        printf("%d x %d = %d\n", a, b, multiplicacao);
        break;

    case 4:
        divisao = a/b;
        printf("%d / %d = %f\n", a, b, divisao); 
        break; 
    }

    return 0;
}