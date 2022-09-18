#include <stdio.h>

int main(){
    printf("**CINCO PRIMEIROS MÚLTIPLOS DE 3**\n");
    int k = 1;
    while (k<=5){
        printf("%d ", 3*k);
        k++;
    }
    printf("\n");
    return 0;
}