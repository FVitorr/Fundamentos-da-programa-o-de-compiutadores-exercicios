#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que receba o nome e a nota de oito alunos e mostre o relatório a seguir:
Digite o nome do 1oaluno: Carlos
Digite a nota do Carlos: 8
Digite o nome do 2oaluno: Pedro
Digite a nota do Pedro: 5
Relatórios de notas
Carlos 8.0
Pedro 5.0
..
..
..
Média da classe = ??
*/
#define t 3
int main(){
    int mat[t];
    float med[t];
    //preencher vetor
    for (int i = 0; i < t ;i++){
        printf("Informe a matricula %d: ",i+1);
        scanf("%d",&mat[i]);
        printf("Informe a nota de %d: ",mat[i]);
        scanf("%f",&med[i]);
    }
    printf("\n\n\tRelatorio de Notas:\n");
    for (int i = 0; i < t ;i++){
        printf("\n\t%d\t%f\t",mat[i],med[i]);
    }
return(0);
}