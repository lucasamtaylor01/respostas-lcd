#include <stdio.h>

int main(){
    //Definindo variáveis
    int valor_premio;
    float p_primeiro, p_segundo, p_terceiro;
    float premio_primeiro, premio_segundo, premio_terceiro;

    //Atribuição de valores
    valor_premio = 780000;

    p_primeiro = 0.46;
    p_segundo = 0.32;
    p_terceiro = 1-(p_primeiro+p_segundo);

    premio_primeiro = valor_premio*p_primeiro;
    premio_segundo = valor_premio*p_segundo;
    premio_terceiro = valor_premio - (premio_primeiro+premio_segundo);

    printf("DIVISÃO DE VALORES DOS GANHADORES\n");
    printf("PRIMEIRO COLOCADO: R$ %f\nSEGUNDO COLOCADO: R$ %f\nTERCEIRO COLOCADO: R$ %f\n", premio_primeiro, premio_segundo, premio_terceiro);
    return 0;
}