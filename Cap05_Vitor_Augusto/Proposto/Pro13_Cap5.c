#include <stdlib.h>
#include <stdio.h>

/*
*. Faça um programa que receba a idade e o peso de quinze pessoas, e que calcule e mostre as médias dos
pesos das pessoas da mesma faixa etária. As faixas etárias são: de 1 a 10 anos, de 11 a 20 anos, de 21 a
30 anos e de 31 anos para cima.
*/
int main(){
    int pessoa = 0,idade;
    float peso,fx1_peso = 0,fx2_peso = 0,fx3_peso = 0,fx4_peso = 0;
    float med1,med2,med3,med4;
    float qtd_fx1 = 0, qtd_fx2 = 0, qtd_fx3 = 0,qtd_fx4 = 0;
    while (pessoa <= 15)        
    { //obter entrada das 15 pessoas
       printf("Informe Idade:");
       scanf("%d",&idade);

       printf("Informe o peso (kg):");
       scanf("%d",&peso);
       
       //Faixa Etaria 
       if (idade >= 1 && idade <=10){
            fx1_peso = fx1_peso + peso;
            qtd_fx1++;
       }else if (idade >= 11 && idade <= 20){
            fx2_peso = fx2_peso + peso;
            qtd_fx2++;
       }else if (idade >= 21 && idade <= 30){
            fx3_peso = fx3_peso + peso;
            qtd_fx3++;
       }else if (idade >= 31){
            fx4_peso = fx4_peso + peso;
            qtd_fx4++;
       }
       //incrementar pessoas
       pessoa++;
    }
    // calcule e mostre as médias dos pesos das pessoas da mesma faixa etária
    med1 = fx1_peso / qtd_fx1;
    printf("Idade [1 - 10] : %f ",med1);

    med2 =fx2_peso / qtd_fx2;
    printf("Idade [11 - 20] : %f ",med2);

    med3 = fx3_peso / qtd_fx3;
    printf("Idade [21 - 30] : %f ",med3);

    med4 = fx4_peso / qtd_fx4;
    printf("Idade [31 - 99] : %f ",med1);

    

return(0);
}