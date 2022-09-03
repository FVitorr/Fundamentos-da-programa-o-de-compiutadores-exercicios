#include <stdlib.h>
#include <stdio.h>

/*
*. Faça um programa que receba duas notas de seis alunos. Calcule e mostre:
■■ a média aritmética das duas notas de cada aluno; e
■■ a mensagem que está na tabela a seguir:
*/
int main(){
    int i = 0;
    float nota1,nota2,med,total_class,med_class;
    int tr = 0, te = 0 , ta = 0;
    while(i<6){
        //obter duas notas
        printf("\nInforme a Nota 1:");
        scanf("%f",&nota1);    
        printf("\nInforme a Nota 2:");
        scanf("%f",&nota2);
        //obter media
        med = (nota1 + nota2 )/ 2;
        printf("Media: %f", med);
        //mensagem 
        
        if (med <= 3){
            printf("\nReprovado");
            tr = tr + 1;
        }else if (med > 3 && med < 7){
            printf("\nExame");
            te = te + 1;
        }else{
            printf("\nAprovado");
            ta = ta + 1;
        }
        total_class = total_class + med ;
        i++;
    }
    printf("\nTotal Aprovado: %d\nTotal Exame: %d\nTotal Reprovado: %d",ta,te,tr);
    med_class = total_class / 6;
    printf("\nMedia da Classe: %f\n",med_class);

return(0);
}