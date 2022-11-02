#include <stdio.h>

int main(){
    char string[20];
    printf("Insira a string: ");
    fgets(string, 20, stdin);
    printf("\n***COVERSÃO PARA ASCCI***\n");
    for (int i = 0; string[i+1] != '\0'; i++){
        printf("%c : %d\n", string[i], string[i]);
    }
    
    return 0;
}