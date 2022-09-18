#include <stdio.h>
int main(){
    int ano_atual = 2022;
    int ano_nascimento;

    printf("Insira seu ano de nascimento: \n");
    scanf("%d", &ano_nascimento);
    int idade = ano_atual - ano_nascimento;

    printf("Sua idade é: %d.\n", idade);
    return 0;
}