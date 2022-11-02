#include <stdio.h>
#include <string.h>

int main(){
    int i, j;
    char string[50];
    printf("Entre com a string: ");
    fgets(string, 50, stdin);

    do{
        printf("Insira o valor de i: ");
        scanf("%d", &i);
        if (i < 0){
            printf("Insira um valor acima de zero.\n");
        }
    } while (i < 0);

    do{
        printf("Insira o valor de j: ");
        scanf("%d", &j);
        if (j < i || j > strlen(string)-1){
            printf("Insira um valor maior que i e menor que a palavra.\n");
        }
    } while (j < i || j > strlen(string)-1);
    
    for (int k = i; k < j; k++){
        printf("%c", string[k]);
    }
    printf("\n");
    return 0;
}