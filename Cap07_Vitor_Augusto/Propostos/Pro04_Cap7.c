#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que receba:
■■ as notas de 15 alunos em cinco provas diferentes e armazene-as em uma matriz 15  5;
■■ os nomes dos 15 alunos e armazene-os em um vetor de 15 posições. 
O programa deverá calcular e mostrar:
■■ para cada aluno, o nome, a média aritmética das cinco provas e a situação (aprovado, reprovado
ou exame);
■■ a média da classe. 
*/
#define l 2
#define c 5

int main(){
    int notas[l][c], matricula[l], total_n, med_notas[l];
    //preencher matricula
    for (int i = 0; i < l; i++){
        printf("Informe Matricula %d: ",i);
        scanf("%d",&matricula[i]);
    }
    printf("\n");
    for (int i = 0; i < l; i++){
        printf("Matricula %d\n",matricula[i]);
        total_n = 0;
        for (int j = 0; j < c; j++){
            printf("Informe Nota %d: ",j+1);
            scanf("%d",&notas[i][j]);

            total_n = total_n + notas[i][j];
        }
        med_notas[i] = total_n / c;
    }
    //mostrar saida
    for (int i = 0; i < l; i++){
        if (med_notas[i] >= 6){
            printf("\nMatricula: %d \nMedia notas: %d\nSituacao: Aprovado",matricula[i],med_notas[i]);
        }else{
            printf("\nMatricula: %d \nMedia notas: %d\nSituacao: Reprovado",matricula[i],med_notas[i]);
        }
    }
return(0);
}