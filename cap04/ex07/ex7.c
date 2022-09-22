#include <stdio.h>

int main(){

    double valor_produto;
    printf("Defina o valor do produto: ");
    scanf("%lf", &valor_produto); 

    // Oferecendo ao user a seleção de estados
    int codigo_estado;
    printf("**LEGENDA PARA OS ESTADOS**\nMG: 1\tSP: 2\nRJ: 3\tMS: 4\n");
    printf("Escolha o estado de destino: ");
    scanf("%d", &codigo_estado);

    // Inserindo o imposto sob o produto em relação aos estados
    double imposto_mg, imposto_sp, imposto_rj, imposto_ms;
    imposto_mg = 1.07;
    imposto_sp = 1.12;
    imposto_rj = 1.15;
    imposto_ms = 1.08;

    //Valor final
    double valor_final;
    switch (codigo_estado){
    case 1:
        valor_final = valor_produto*imposto_mg;
        printf("Para MG, o valor final do produto é %lf\n", valor_final);
        break;
    
    case 2:
        valor_final = valor_produto*imposto_sp;
        printf("Para SP, o valor final do produto é %lf\n", valor_final);
        break;

    case 3:
        valor_final = valor_produto*imposto_rj;
        printf("Para RJ, o valor final do produto é %lf\n", valor_final);
        break;
       

    case 4:
        valor_final = valor_produto*imposto_ms;
        printf("Para MS, o valor final do produto é %lf\n", valor_final);
        break;    
    }
    return 0;
}