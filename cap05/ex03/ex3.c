#include <stdio.h>

int main(){
    int n;
    printf("Entre com o valor de n: ");
    scanf("%d", &n);
    int k;
    if (n%2==0){
        k = 0;
        n = n+1;
        while (k < 3){
            printf("%d ", n + 2*k);
            k++;
        }
    }else{
        k = 1;
        while (k < 4){
        printf("%d ", n + 2*k);
        k++;  
        }
    }
    printf("\n");
    return 0;
}