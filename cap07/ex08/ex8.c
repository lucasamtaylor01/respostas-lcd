#include <stdio.h>
#include <string.h>

int main(){
    char str1[100], str2[20];
    printf("Insira a primeira frase: ");
    fgets(str1, 100, stdin);
    printf("Entre com uma palavra: ");
    gets(str2, 20, stdin);

    int tamanho_texto = strlen(str1);
    int tamanho_palavra = strlen(str2);
    int j = 0;
    int ind = 0;
    for (int i = 0; i < tamanho_texto; i++){
        if (str1[i] == str2[j]){
            j++;
            if (j == tamanho_palavra){
                printf("A string %s está contida em %s\n", str2, str1);
                ind = 1;
            }
        }else{
            j = 0;
        }
    }

    if (ind == 0){
        printf("Não está contido\n");   
    }

    return 0;
}