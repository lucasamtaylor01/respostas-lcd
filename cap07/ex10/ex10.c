#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Achei mais conveniente usar uma função própria pra isso
int main(){
    char str[20], ch;
    printf("Entre com a palavra: ");    
    gets(str);

    for (int i = 0; i < strlen(str); i++){
        str[i] = toupper(str[i]);
    }
    
    printf("A palavra com letras maíusculas é: %s \n", str);
    return 0;
}

