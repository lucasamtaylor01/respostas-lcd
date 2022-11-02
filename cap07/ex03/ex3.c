#include <stdio.h>

int main(){
    char string[50];
    int i = 0;

    printf("Insira a string: ");
    fgets(string, 50, stdin);
   
    while (string[i+1] != '\0'){
        i++;
    }
    
    printf("A palavra tem %d letras.\n", i);
    return 0;
}