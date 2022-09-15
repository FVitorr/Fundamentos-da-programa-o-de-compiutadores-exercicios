#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que receba o nome e duas notas de seis alunos e mostre o relatório a seguir. Relatório
de notas: 

*/
#define t 2
int main(){
    int mat[t],nota1[t],nota2[t];
    //preencher vetores
    for (int i = 0; i < t; i++){
        printf("Informe a Matricula : ");
        scanf("%d",&mat[i]);
        printf("Informe a primeira Nota: ");
        scanf("%d",&nota1[i]);
        printf("Informe a Segunda Nota: ");
        scanf("%d",&nota2[i]);
    }
    //mostrar saida
    printf("\n\t| Matric. |\t| P_Nota |\t| S_Nota |\t| Media |\t| Situacao |");
    for (int i = 0; i < t; i++){
        float media = (nota1[i] + nota2[i]) / 2;
        if (media > 6){
            printf("\n\t| %d\t |\t| %d\t |\t| %d\t |\t| %d\t |\t| Aprovado |",mat[i],nota1[i],nota2[i],media);
        }else{
            printf("\n\t| %d\t |\t| %d\t |\t| %d\t |\t| %d\t |\t| Reprovad |",mat[i],nota1[i],nota2[i],media);
        }
        
    }

return(0);
}