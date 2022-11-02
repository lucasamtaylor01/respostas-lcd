#include <stdio.h>
#include <string.h>

int main(){
    char string[50];
    int j = 0;
    printf("Insira a string: ");
    fgets(string, 50, stdin);
    int ultimo = strlen(string)-2; //pq -2??
    for (int i = ultimo; i >= 0; i--){
        if (j >= i){
            printf("É palíndromo\n");
            break;
        }
        if(string[j]!=string[i]){
            printf("Não é palíndromo\n");
            break;
        }
        j++;
    }
    
    return 0;
}