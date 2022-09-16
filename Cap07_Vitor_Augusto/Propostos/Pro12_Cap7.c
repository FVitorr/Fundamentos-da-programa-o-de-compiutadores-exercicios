#include <stdlib.h>
#include <stdio.h>

/*
. O programa deverá calcular e mostrar:
■■ a quantidade de alunos com idade entre 18 e 25 anos que fizeram mais de duas provas em determinada disciplina cujo código é digitado pelo usuário. O usuário poderá digitar um código não
cadastrado; nesse caso, o programa deverá mostrar uma mensagem de erro;
■■ uma listagem contendo o código dos alunos que fizeram menos que três provas em determinada
disciplina, seguido do código da disciplina;
■■ fizeram nenhuma prova em alguma disciplina. Cuidado para
não contar duas vezes o mesmo aluno. 
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
    /*■■ a quantidade de alunos com idade entre 18 e 25 anos que fizeram mais de duas provas 
    em determinada disciplina cujo código é digitado pelo usuário. O usuário poderá digitar um código não   
    cadastrado; nesse caso, o programa deverá mostrar uma mensagem de erro;*/
    for (int j = 0; j < t; j++){
        if (idade[j] > 18 && idade[j] < 25){
            for (int i = 0; i < d;i++){
               if(qtd_p[j][i] > 2){
                    printf("Disciplina : %d",i);
               }
            }
        }
    }
    /*■■ uma listagem contendo o código dos alunos que fizeram menos que três provas em
    determinada
    disciplina, seguido do código da disciplina;*/
    for (int i = 0; i < d;i++){
        for (int j = 0; j < t; j++){
            if(qtd_p[i][j] < 3){
                printf("%d",j);
                printf("\n %d",cod_d[j]);
            }
        }
        
    }

return(0);
}