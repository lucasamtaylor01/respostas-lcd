#include <stdio.h>
struct endereco{
    char rua[100];
    int numero;
};

struct cadastro{
    char nome[50];
    int idade;
    struct endereco ender;
};

int main(){
    struct cadastro c1;
    printf("Insira o nome: ");
    gets(c1.nome);

    printf("Insira a idade: ");
    scanf("%d", &c1.idade);

    printf("Insira o nome do logradouro: ");
    gets(c1.ender.rua);

    printf("Insira o número: ");
    scanf("%d", &c1.ender.numero);

    printf("\nAPRESENTAÇÃO DOS DADOS\n");
    printf("Nome: %sIdade: %d\nRua: %sN: %d", c1.nome, c1.idade, c1.ender.rua, c1.ender.numero);
    return 0;
}

//rever