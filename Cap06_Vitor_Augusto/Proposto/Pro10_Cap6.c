#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que preencha um vetor com dez números inteiros e um segundo vetor com cinco números inteiros,
 calcule e mostre dois vetores resultantes. O primeiro vetor resultante será composto pela
soma de cada número par do primeiro vetor somado a todos os números do segundo vetor. O segundo
vetor resultante será composto pela quantidade de divisores que cada número ímpar do primeiro vetor
tem no segundo vetor
*/
#define t 10
#define comPorc 0.25
int main(){
    int x[t],y[t/2],soma_y=0;

    int r_1[t],r_2[t];
    
    //preencher os vetores
    printf("\n-- Vetor 1: --\n");
    for (int i = 0; i < t; i++){
        printf("Informe um Numero : ");
        scanf("%d",&x[i]);
    }
    printf("\n-- Vetor 2: --\n");
    for (int i = 0; i < t / 2; i++){
        printf("Informe um Numero : ");
        scanf("%d",&y[i]);
        //somar elementos de y
        soma_y = soma_y + y[i];
    }
    int cont_r = 0,cont_r2 = 0;
    for (int i = 0; i < t; i++){
        //separar numero e verificar se é par
        if(x[i]%2==0){
            r_1[cont_r] = x[i] + soma_y; //adc a primeiro vetor
            cont_r++;
        }else{ //impar
        //composto pela quantidade de divisores
            int num = x[i];
            int qtd_d = 0;
            for( int j = 0; j < t / 2; j++){
                if (num % y[j] == 0){
                    qtd_d++;
                }
            }
            r_2[cont_r2] = qtd_d;
            cont_r2++;
        }
    }
    //mostrar saida 
    printf("Primeiro Vetor: \n[");
    for ( int i = 0; i < cont_r; i++){
        printf(" %d ",r_1[i]);
    }
    printf("]\n-- Divisores --\n[");
    for ( int i = 0; i < cont_r2; i++){
        printf(" %d ",r_2[i]);
    }
    printf("]\n\n");

return(0);
}