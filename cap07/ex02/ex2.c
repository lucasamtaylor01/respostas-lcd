#include <stdio.h>

int main(){
    char palavra[20];
    printf("Insira uma palavra: ");
    scanf("%s", palavra);
    for (int i = 0; i < 4; i++){
        printf("%c", palavra[i]);
    }

    printf("\n");
    
    return 0;
}