#include <stdio.h>
struct atleta{
    char nome[50];
    char esporte[50];
    int idade;
    double altura;
};

int main(){
    struct atleta atl[5];
    for (int i = 0; i < 5; i++){
        printf("Insira o nome: ");
        fgets(atl[i].nome, 50, stdin);

        printf("Insira o esporte: ");
        fgets(atl[i].esporte, 50, stdin);

        printf("Insira a idade: ");
        scanf("%d", &atl[i].idade);

        printf("Insira a altura: ");
        scanf("%f", &atl[i].altura);
    }
    
    struct atleta velho;
    struct atleta alto;
    velho = alto = atl[0];

    for (int i = 1; i < 5; i++){
        if (velho.idade < atl[i].idade){
            velho = atl[i];
        }  
    }

    for (int i = 1; i < 5; i++){
        if (alto.altura < atl[i].altura){
            alto = atl[i];
        }  
    }

    printf("\nATLETA MAIS VELHO\n");
    printf("Nome: %s", velho.nome);

    printf("\nATLETA MAIS ALTO\n");
    printf("Nome: %s", alto.nome);
    
    return 0;
}