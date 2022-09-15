#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que preencha um vetor com os nomes de sete alunos e carregue outro vetor com a média
final desses alunos. Calcule e mostre:
■■ o nome do aluno com maior média (desconsiderar empates);
■■ para cada aluno não aprovado, isto é, com média menor que 7, mostrar quanto esse aluno precisa tirar na prova de exame final para ser aprovado.
 Considerar que a média para aprovação no exame é 5. 

*/
#define t 5
int main(){
    //nomes substituidos por matricula 
    int mat[t],maior_mat;
    float med_f[t],exame_f = 0;
    float maior_nota = 0;
    //prencher vetores
    for (int i = 0; i < t; i++){
        printf("\nInforme Matricula:");
        scanf("%d",&mat[i]);
        printf("Informe Nota Media: ");
        scanf("%f",&med_f[i]);
    }
    for (int i = 0; i < t; i++){
        exame_f = 0;
        if (med_f[i] < 7){
            //mostrar quanto esse aluno precisa tirar na prova de exame final para ser aprovado
            while ((med_f[i] + exame_f) / 2 < 7)
            {
                exame_f++;
            }
            printf("\n%d - Nota Exame Final: %f",mat[i],exame_f);
        }
        if (med_f[i] > maior_nota){
            maior_nota = med_f[i];
            maior_mat = mat[i];
        }
    }
    printf("\n\n\tMaior Nota: %f\n\tMatricula: %d",maior_nota,maior_mat);

return(0);
}