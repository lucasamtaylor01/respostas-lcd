#include <stdio.h>

int main(){
    char string[50];
    printf("Insira a string:\n");
    fgets(string, 50, stdin);
    printf("A string inserida foi: %s \n", string);
    return 0;
}