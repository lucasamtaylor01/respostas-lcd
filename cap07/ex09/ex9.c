#include <stdio.h>
#include <string.h>

int main(){
    char str1[50], str2[20];
    int a, b, j;
    a = b = j = 0;

    printf("Insira a frase: ");
    fgets(str1, 50, stdin);
    printf("Insira a palavra: ");
    fgets(str2, 20, stdin);

    for (int i = 0; i < strlen(str1); i++){
        if (str1[i] == str2[j]){
            a++;
            j++;
            if (a == strlen(str2)-1){
                b++;
            } 
        }else{
            a = 0;
        }
    }
    printf("\nHouve %d aparições da palavra %s em %s\n", b, str2, str1);
    
    return 0;
}