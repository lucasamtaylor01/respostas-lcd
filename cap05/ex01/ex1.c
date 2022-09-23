#include <stdio.h>

int main(){
    int n;
    printf("Insira um valor n: ");
    scanf("%d", &n);
    int i = 0;
    while (i <= n){
        printf("%d ", i);
        i++;
    }
    printf("\n");
    
    return 0;
}