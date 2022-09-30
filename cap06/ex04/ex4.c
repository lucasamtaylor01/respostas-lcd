#include <stdio.h>

int main(){
    int A[6];

    //item a
    A[0] = 1;
    A[1] = 0;
    A[2] = 5;
    A[3] = -2;
    A[4] = -5;
    A[5] = 7;

    // item B
    int soma = A[0] + A[1] + A[5];
    printf("A soma é: %d\n", soma);

    //item C
    A[4] = 100;

    // item D
    for (int i = 0; i < 6; i++){
        printf("%d ", A[i]);
    }

    printf("\n");
    return 0;
}