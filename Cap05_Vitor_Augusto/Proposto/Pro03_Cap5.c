#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que receba a idade de oito pessoas, calcule e mostre:
a) a quantidade de pessoas em cada faixa etária;
b) a porcentagem de pessoas na primeira faixa etária com relação ao total de pessoas.
c) a porcentagem de pessoas na última faixa etária com relação ao total de pessoas
*/

int main(){
    int idade;
    int qtd_f1 = 0,qtd_f2 = 0, qtd_f3 = 0, qtd_f4 = 0, qtd_f5 = 0;

    for (int qtd_p = 8; qtd_p > 0; qtd_p--){   
        printf("_______________________");
        printf("\n| Informe sua Idade: ");
        scanf("%d",&idade);
        //1 faixa etaria [01 - 15]
        if (idade <= 15){
            qtd_f1 = qtd_f1 + 1;
        //2 faixa etaria [16 - 30]
        }else if (idade > 15 && idade <= 30){
            qtd_f2 = qtd_f2 + 1;
        //3 faixa etaria [31 - 45]
        }else if (idade > 30 && idade <= 45){
            qtd_f3 = qtd_f3 + 1;
        //4 faixa etaria [46 - 60]
        }else if (idade > 45 && idade <= 60){
            qtd_f4 = qtd_f4 + 1;
            //5 faixa etaria [61 - 99]
        }else if (idade > 60){
            qtd_f5 = qtd_f5 + 1;
        }
    }
    //a quantidade de pessoas em cada faixa etária;
    printf("\n[01 - 15] [ %d ]",qtd_f1);
    printf("\n[16 - 30] [ %d ]",qtd_f2);
    printf("\n[31 - 45] [ %d ]",qtd_f3);
    printf("\n[46 - 60] [ %d ]",qtd_f4);
    printf("\n[61 - 99] [ %d ]",qtd_f5);
    // a porcentagem de pessoas na primeira faixa etária com relação ao total de pessoas.
    float porc = 0;
    // 8     -- 100
    //qtd_f1 -- x  
    //x = 100 * qtd_f1 / 8
    porc = qtd_f1 * 100 / 8;
    printf ("\nPrimeira Faixa Etaria: %.2f %%",porc);
    porc = qtd_f5 * 100/ 8 ;
    printf ("\nUltima Faixa Etaria: %2.f %%",porc);
    

return(0);
}