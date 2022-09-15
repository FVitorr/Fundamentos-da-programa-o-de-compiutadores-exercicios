#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que preencha três vetores com cinco posições cada. O primeiro vetor receberá os
nomes de cinco funcionários; o segundo e o terceiro vetor receberão, respectivamente, o salário e o
tempo de serviço de cada um. Mostre um primeiro relatório apenas com os nomes dos funcionários
que não terão aumento; mostre um segundo relatório apenas com os nomes e os novos salários dos
funcionários que terão aumento. Sabe-se que os funcionários que terão direito ao aumento são aqueles
que possuem tempo de serviço superior a cinco anos ou salário inferior a R$ 800,00. Sabe-se, ainda,
que, se o funcionário satisfizer às duas condições anteriores, tempo de serviço e salário, o aumento
será de 35%; para o funcionário que satisfazer apenas à condição tempo de serviço, o aumento será de
25%; para aquele que satisfazer apenas à condição salário, o aumento será de 15%.
*/
#define t 3
int main(){
    int sal[t],q_trab[t],n_sal = 0;
    int mat[t]; //substituir nome por matricula

    for (int i= 0;i<t;i++){
        printf("Informe Matricula: ");
        scanf("%d",&mat[i]);

        printf("Informe Salario: R$");
        scanf("%d",&sal[i]);

        printf("Informe Horas Trabalhadas: ");
        scanf("%d",&q_trab[i]);
    }
    printf("\n--> Nao tem direito ao aumento: \n\n");
    int e_x = 9999;
    for (int i= 0; i < t; i++) {
        if (q_trab[i]<= 5 && sal[i] >= 800){
            printf(" %d",mat[i]);
            e_x = mat[i];
        }
    }
    printf("\n");
    for (int i= 0; i < t; i++) {
        if (q_trab[i] > 5 || sal[i] < 800){
            n_sal = sal[i] + sal[i]* 35 / 100;
        }else if (q_trab[i]>5){
            n_sal = sal[i] + sal[i]* 25 / 100;
        }else{
            n_sal = sal[i] + sal[i]* 15 / 100;
        }
        if (mat[i] != e_x){
            printf("\nMatricula: %d \n Novo Salario: R$ %d",mat[i],n_sal);
        }
    }
        

return(0);
}