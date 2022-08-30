/*Faça um programa que receba a altura e o peso de uma pessoa. 
De acordo com a tabela a seguir, verifique e mostre a classificação dessa pessoa.*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    float alt,peso;
    //Obter entrada 
    printf("\n+++++++++++++++++++++++++\n");
    printf("Informe a altura (m): ");
    scanf("%f",&alt);
    printf("Informe o peso (Kg): ");
    scanf("%f",&peso);


    //altura menor 1,20 classificaçoes a,d,g  para peso < 60 recebe A de 60 ate 90 recebe D acima de 90 recebe G
    if (alt < 1.2){
        if (peso < 60){
            printf("Classificacao: A");
        }else if (peso >= 60 && peso <= 90){
            printf("Classificacao: D");
        }else {
            printf("Classificacao: G");
        }
    }else if (alt >= 1.2 && alt <= 1.7){
        //altura maior igual 1,20 e menor igual a 1.7 classificaçoes B,E,H
        //para peso < 60 recebe B de 60 ate 90 recebe E acima de 90 recebe H
        if (peso < 60){
            printf("Classificacao: B");
        }else if (peso >= 60 && peso <= 90){
            printf("Classificacao: E");
        }else {
            printf("Classificacao: H");
        }
    }else{
        //altura maior que 1.7 classificaçoes C,F,I  para peso < 60 recebe C de 60 ate 90 recebe F acima de 90 recebe I
        if (peso < 60){
            printf("Classificacao: C");
        }else if (peso >= 60 && peso <= 90){
            printf("Classificacao: F");
        }else {
            printf("Classificacao: I");
        }
    }
    printf("\n+++++++++++++++++++++++++\n");
    return(0);
}
