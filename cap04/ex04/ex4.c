#include <stdio.h>

int main(){
    int n, k;
    k = 0;
    
    printf("Digite o número n: ");
    scanf("%d", &n);

    while ((2*k)+1<n){
        
        printf("%d ", (2*k)+1);
        k++;    
    }
    printf("\n");
    return 0;
}