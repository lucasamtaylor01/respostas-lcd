#include <stdio.h>
int converte(int h, int m, int s){
    return (h*3600)+(m*60)+s;
}
int main(){
    int hora, minuto, segundo;

    printf("Insira as horas: ");
    scanf("%d", &hora);

    printf("Insira os minutos: ");
    scanf("%d", &minuto);

    printf("Insira os segundos: ");
    scanf("%d", &segundo);

    printf("Isso equivale à: %d segundos.\n", converte(hora, minuto, segundo));
    return 0;
}