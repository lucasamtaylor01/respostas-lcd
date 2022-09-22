#include <stdio.h>

int main(){
    int salario, emprestimo; //Eu sei que poderia ser float, mas só por questão de estética, coloquei int
    printf("Insira o salário: ");
    scanf("%d", &salario);
    
    printf("Insira o empréstimo: ");
    scanf("%d", &emprestimo);

    double porcentagem = salario*0.2;
    
    if (emprestimo <= porcentagem){
        printf("Empréstimo recusado.\n");
    }else{
        printf("Empréstimo aceito.\n");
    }
    return 0;
}