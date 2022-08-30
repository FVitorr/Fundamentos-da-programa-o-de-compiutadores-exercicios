/*. Faça um programa que receba a idade e o peso de uma pessoa. De acordo com a tabela a seguir, verifique
e mostre em qual grupo de risco essa pessoa se encaixa.*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    float idade,peso;
    //Obter entrada 
    printf("\n+++++++++++++++++++++++++\n");
    printf("Informe a idade: ");
    scanf("%f",&idade);
    printf("Informe o peso (Kg): ");
    scanf("%f",&peso);


    //idade menor que 20 
    if (idade < 20){
        // peso ate 60
        if (peso <= 60){
            printf("Grupo de Risco: 9");
        }else if (peso < 60 && peso <= 90){
            printf("Grupo de Risco: 8");
        }else {
            printf("Grupo de Risco: 7");
        }
    }else if (idade >= 20 && idade <= 50){
        //idade maior que 20 menor que 50
        // peso ate 60
         if (peso <= 60){
            printf("Grupo de Risco: 6");
        }else if (peso < 60 && peso <= 90){
            printf("Grupo de Risco: 5");
        }else {
            printf("Grupo de Risco: 4");
        }
    }else if (idade > 50){
        //idade maior que 20 menor que 50
        // peso ate 60
        if (peso <= 60){
            printf("Grupo de Risco: 3");
        }else if (peso < 60 && peso <= 90){
            printf("Grupo de Risco: 2");
        }else {
            printf("Grupo de Risco: 1");
        }
    }
    printf("\n+++++++++++++++++++++++++\n");
    return(0);
}
