#include <stdio.h>
#include <string.h>

int main(){
    char palavra[20];
    printf("Insira uma palavra: ");
    scanf("%s", palavra);
    int tamanho = strlen(palavra);
    for (int i = tamanho-1; i >= 0; i--){
        printf("%c", palavra[i]);
    }
    printf("\n");
    return 0;
}