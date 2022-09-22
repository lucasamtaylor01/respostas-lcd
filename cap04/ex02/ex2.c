#include <stdio.h>

int main(){
    int x,y;
    printf("Digite dois números: ");
    scanf("%d %d", &x, &y);
    if (x > y) {
        printf("%d é maior que %d\n", x, y);
    }
    else if (y > x){
        printf("%d é maior que %d\n", y, x);
    }else{
        printf("Números iguais\n");
    }
    return 0;
}