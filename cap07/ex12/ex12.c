#include <stdio.h>

// Não entendi muito bem o enunciado, mas vou tentar 
int main(){
    char nome[20];
    float valor, avista, desconto;

    printf("Insira o nome da mercadoria: ");
    fgets(nome, 20, stdin);
    printf("Insira o valor da mercadoria: ");
    scanf("%f", &valor);
    avista = valor*0.9;
    desconto = valor*0.1;

    printf("NOME: %s", nome);
    printf("VALOR: R$ %g\nDESCONTO: R$ %g\nVALOR À VISTA: R$ %g\n",valor, desconto, avista);

    return 0;
}