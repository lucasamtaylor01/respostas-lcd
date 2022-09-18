#include <stdio.h>
int main(){
    char c;
    int i;
    float f;

    // Lendo as variáveis
    scanf("%c %d %f", &c, &i, &f);

    //Imprimindo
    printf("**TABULAÇÃO HORIZONTAL** \n%c\t%d\t%f \n**SEPARADAS POR UM ESPAÇO**\n %c %d %f \n**UMA POR LINHA**\n%c\n%d\n%f\n", c, i,f,c,i,f,c,i,f);
    return 0;
}