#include <stdio.h>

int main(){

    //soma de todos os multiplos de 5 <1000
    int kx, somax;
    kx = somax = 0;

    while(5*kx < 1000){
        somax += 5*kx;
        kx++;
    }

    //soma de todos os multiplos de 3 <1000
    int ky, somay;
    ky = somay = 0;
    while (3*ky < 1000){
        somay += 3*ky;
        ky++;
    }
    
    
    //interseção de 3 e 5 <1000 (ser retirado)   
    int kz, somaz;
    kz = somaz = 0;
    while (15*kz < 1000){
        somaz += 15*kz;
        kz++; 
    }
    
    // conta final
    int soma = somax + somay - somaz;
    printf("A soma dos múltiplos de 3 e 5 é: %d\n", soma);
    return 0;
}