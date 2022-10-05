#include <stdio.h>

int main(){
    int a[10];
    int b[10];

    for (int i = 0; i < 10; i++){
        b[i] = 0;
    }

    for (int i = 0; i < 10; i++){
        printf("Insira o valor de a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if (a[i] == a[j] && i != j){
                b[i]++;
            }
        }
    }

    for (int i = 0; i < 10; i++){
        if (b[i] != 0){
            printf("o número %d repetiu %d vezes\n", a[i], b[i]);
        }     
    }
    
    // Arumar dps
    printf("\n");
    return 0;
}