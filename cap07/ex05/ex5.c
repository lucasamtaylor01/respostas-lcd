#include <stdio.h>
#include <string.h>

int main(){
    char str1[20], str2[20];
    int j = 0;
    printf("Insira a primeira string: ");
    fgets(str1, 20, stdin);
    int ultimo = strlen(str1)-1;
    for (int i = ultimo; i >= 0; i--){
        str2[j] = str1[i];
        j++;
    }
    strcpy(str1, str2);
    printf("a palavra invertida é: %s\n", str1);
}