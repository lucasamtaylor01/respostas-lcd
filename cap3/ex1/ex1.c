#include <stdio.h>

int main(){
    //lendo o número inteiro
    int a;
    printf("Insira um número: ");
    scanf("%d", &a);
    int antecessor = a-1;
    int sucessor = a+1;
    printf("Para o número %d, temos: \nANTECESSOR: %d\nSUCESSOR: %d\n", a, antecessor, sucessor);
    return 0;
}