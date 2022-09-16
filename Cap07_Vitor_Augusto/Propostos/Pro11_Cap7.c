#include <stdlib.h>
#include <stdio.h>

/*
*. Elabore um programa que: receba a idade de oito alunos e armazene-as em um vetor; armazene o código
de cinco disciplinas em outro vetor; armazene em uma matriz a quantidade de provas que cada aluno fez
em cada disciplina.
*/
#define t 8
#define d 5

int main(){
    int idade[t],cod_d[d],qtd_p[d][t];
    //obter idade
    for (int j = 0; j < t; j++){
        printf("Informe Idade: ");
        scanf("%d",&idade[j]);
    }
    //obter codigo disciplina
    for (int i = 0; i < d;i++){
        printf("Informe código disciplinas: ");
        scanf("%d",&cod_d[i]);
    }
    //obter matriz 
    //armazene em uma matriz a quantidade de provas que cada aluno fez
    for (int i = 0; i < d;i++){
        printf("\nDisciplina: %d\n",cod_d[i]);
        for (int j = 0; j < t; j++){
            printf("Aluno: %d \nQuantidade de provas: ",j);
            scanf("%d",&qtd_p[i][j]);
        }
        printf("\n");
    }
   

return(0);
}