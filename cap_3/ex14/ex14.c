#include <stdio.h>

int main(){
    char c1, c2;
    int x, y;
    scanf("%c", &c1);
    x = c1;
    if(c1 < 97 || c1>121){
        return 1;
    }else{
    y = x - 32;
    c2 = y;
    printf("%c\n", c2);
    return 0;
    }
}