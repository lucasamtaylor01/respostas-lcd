#include <stdio.h>

struct horario{
    int hora;
    int minuto;
    int segundo;
};

int main(){
    struct horario h[5];
    for (int i = 0; i < 5; i++){
        do{
            printf("Entre com a hora: ");
            scanf("%d", &h[i].hora);
            if (h[i].hora <= 0 || h[i].hora > 24){
                printf("Insira uma hora válida!\n");
            }
            
        } while (h[i].hora <= 0 || h[i].hora > 24);
        
        do{
            printf("Entre com o minuto: ");
            scanf("%d", &h[i].minuto);
            if (h[i].minuto < 0 || h[i].minuto > 59){
                printf("Insira um minuto válido!\n");
            }
        } while (h[i].minuto < 0 || h[i].minuto > 59);
        
        do{
            printf("Entre com o segundo: ");
            scanf("%d", &h[i].segundo);
            if (h[i].segundo < 0 || h[i].segundo > 59){
                printf("Insira um minuto válido!\n");
            }
            
        } while (h[i].segundo < 0 || h[i].segundo > 59);
        

    }

    struct horario maior = h[0];
    for (int i = 1; i < 5; i++){
        if (maior.hora < h[i].hora){
            maior = h[i];
        }
        if (maior.hora == h[i].hora){
            if (maior.minuto < h[i].minuto){
                maior = h[i];
            }
            if (maior.minuto == h[i].minuto){
                if (maior.segundo < h[i].segundo){
                    maior = h[i];
                }  
            }
        }  
    }
    printf("\nO maior horário é %d:%d:%d\n", maior.hora, maior.minuto, maior.segundo);
    
}