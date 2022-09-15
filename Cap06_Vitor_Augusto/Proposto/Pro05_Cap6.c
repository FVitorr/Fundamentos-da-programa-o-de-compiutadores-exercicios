#include <stdlib.h>
#include <stdio.h>

/*
*Uma escola deseja saber se existem alunos cursando, simultaneamente, as disciplinas Lógica e Linguagem de
Programação. Coloque os números das matrículas dos alunos que cursam Lógica em um vetor, quinze alunos.
Coloque os números das matrículas dos alunos que cursam Linguagem de Programação em outro vetor, dez
alunos. Mostre o número das matrículas que aparecem nos dois vetores.
*/

#define t_l 15
#define t_p 10
int main(){
    int mat_l[t_l],mat_p[t_p];
    //preencher vetor
    printf("\n-- Logica --\n");
    for (int i = 0; i < t_l ;i++){
        printf("Informe Matricula: ");
        scanf("%d",&mat_l[i]);
    }
    printf("\n-- Linguagem de Programacao --\n");
    for (int i = 0; i < t_p ;i++){
        printf("Informe um Numero: ");
        scanf("%d",&mat_p[i]);
    }

    //ver se cursa os dois e mostrar saida
    printf("\nAlunos Matriculados em Ambos os cursor:\n");
    for (int i = 0; i < t_l ;i++){
        int mat = mat_l[i];
        //percorre 2 vetor 
        for (int j = 0; j < t_p ;j++){
            if (mat_p[j] == mat){
                printf(" %d ",mat_p[j]);
            }
        }
    }
    printf("\n-----------------------------------\n");
return(0);
}