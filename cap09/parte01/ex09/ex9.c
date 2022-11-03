#include <stdio.h>

int main(){
    int n;
    printf("Insira a quantidade de alunos: ");
    scanf("%d", &n);

    float notas[n];
    
    for (int i = 0; i < n; i++){
        printf("Insira a nota do aluno %d: ", i);
        scanf("%f", &notas[i]);
    }
    
    int c;
    scanf("%c", c);
    while ((c = getchar()) != '\n' && c != EOF) { }
    printf("%c", c);
    return 0;
}

//ver dps