#include <stdio.h>
#include <math.h>

struct ponto{
    int x;
    int y;
};

int main(){
    struct ponto a;
    struct ponto b;

    printf("Insira a coordenada x do ponto A: ");
    scanf("%d", &a.x);

    printf("Insira a coordenada y do ponto A: ");
    scanf("%d", &a.y);

    printf("Insira a coordenada x do ponto B: ");
    scanf("%d", &b.x);

    printf("Insira a coordenada y do ponto B: ");
    scanf("%d", &b.y);

    int catx = pow(a.x - b.x, 2);
    int caty = pow(a.y - b.y, 2);
    int hip = sqrt(catx + caty);

    printf("\nA distância entre os pontos (%d;%d) e (%d,%d) é %d u.m.\n",a.x, a.y, b.x, b.y, hip);
    return 0;
}
