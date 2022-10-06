#include <stdio.h>

int main(){
    char c, palavra[10];
    int contador1 = 0, contador2 = 0;

    printf("Insira a palavra: ");
    gets(palavra);
    for (int i = 0; i < 20; i++){
        if (palavra[i] == 'a' ||palavra[i] == 'e' ||palavra[i] == 'i' ||palavra[i] == 'o' ||palavra[i] == 'u'){
            contador1++;
        }
    }
    printf("A palavra %s tem %d vogais.\n", palavra, contador1);

    printf("Insira um caractere: ");
    scanf("%c", &c);
    for (int i = 0; i < 20; i++){
        if (palavra[i] == 'a' ||palavra[i] == 'e' ||palavra[i] == 'i' ||palavra[i] == 'o' ||palavra[i] == 'u'){
            palavra[i] = c;
        }
    }

    for (int i = 0; i < 20; i++){
        if (palavra[i] == 'a' ||palavra[i] == 'e' ||palavra[i] == 'i' ||palavra[i] == 'o' ||palavra[i] == 'u'){
            contador2++;
        }
    }

    printf("\nA nova palavra é: %s\n", palavra);
    printf("A palavra %s tem %d vogais.\n", palavra, contador2);

    

    return 0;
}