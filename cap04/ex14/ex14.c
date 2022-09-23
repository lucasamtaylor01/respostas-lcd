#include <stdio.h>
int main(){
    int x;
    // Entrada do número

    printf("Entre com um número: ");
    scanf("%d", &x);

    // Aplicação condicional e impressão do resultado
    if (x%3 == 0 && x%5 !=0){
        printf("%d é divvisível por 3 e não é divisível por 5.\n", x);
    }else if (x%5==0 && x%3 != 0){
        printf("%d é divisível por 5 e não é divisível por 3.\n", x);
    }else if (x%5==0 && x%3==0){
        printf("%d é divisível por 3 e por 5.\n", x);
    }else{
        printf("%d não é divisível por 3, nem por 5.\n", x);
    }
    
    return 0;
}