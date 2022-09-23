#include <stdio.h>

int main(){
    int n;
    printf("Insira um valor n: ");
    scanf("%d", &n);
    int i = n;
    while (i >= 0){
        printf("%d ", i);
        i--;
    }
    printf("\n");
    
    return 0;
}