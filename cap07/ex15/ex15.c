#include <stdio.h>


int main(){
    char str1[20], str2[20];
    printf("Insira a primeira string: ");
    fgets(str1, 20, stdin);
    printf("Insira a segunda string: ");
    fgets(str2, 20, stdin); 

    // Definindo a maior palavra
    int tam_str1, tam_str2, j = 0;
    char maior[20], menor[20];
    
    tam_str1 = strlen(str1);
    tam_str2 = strlen(str2);

    if (tam_str1 >= tam_str2){
        strcpy(maior, str1);
        strcpy(menor, str2);
    }else{
        strcpy(maior, str1);
        strcpy(menor, str2);
    }
    printf("\nOrganizando em ordem alfabética...\n");
    for (int i = 0; i < strlen(maior); i++){
        if (maior[i] != menor[j]){
            if (maior[i] < menor[j]){
                printf("1.%s2.%s", maior, menor);
                break;
            }else{
                printf("1.%s2.%s", menor, maior);
                break;
            }
        }
    }
    
    return 0;
}