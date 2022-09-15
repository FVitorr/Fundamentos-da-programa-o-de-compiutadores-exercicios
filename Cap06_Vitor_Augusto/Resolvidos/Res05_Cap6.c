#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que preencha dois vetores, X e Y, com dez números inteiros cada. Calcule e mostre
os seguintes vetores resultantes:
*/
#define t 10

int main(){
    int x[t],y[t],u[t*2];

    //preencher o vetor
    printf("--- Vetor 1 --- \n");
    for (int i = 0; i < t; i++){
        printf("Informe um Numero: ");
        scanf("%d",&x[i]);
    }
    printf("--- Vetor 2 --- \n");
    for (int i = 0; i < t; i++){
        printf("Informe um Numero: ");
        scanf("%d",&y[i]);
    }
    //preencher u  com zeros para efitar erros
    for (int i = 0; i < t * 2; i++){
        u[i] = 0;
    }

    //A união de X com Y  (todos os elementos de X e de Y sem repetições). 
    int ext = 0;
    //adc x na lista u
    int contU = 0;
    for (int i = 0; i < t;i++){
        ext = 0;
        if (i < t){
            int numx = x[i];
            //verificar se ja existe 
            for (int j = 0; j < t * 2; j++){
                if (u[j] == numx){
                    ext = ext + 1;
                }
            }
            //Não existe adc num e somar mais um ao contU para ir para o proximo numero
            if (ext < 1){
                u[contU] = numx;
                contU++;
            }
        }
        
    }
    //adc y na lista u
    for (int i = 0; i < t;i++){
        ext = 0;
        if (i < t){
            int numy = y[i];
            //verificar se ja existe 
            for (int j = 0; j < t * 2; j++){
                if (u[j] == numy){
                    ext = ext + 1;
                }
            }
            //Não existe adc num e somar mais um ao contU para ir para o proximo numero
            if (ext < 1){
                u[contU] = numy;
                contU++;
            }
        }
        
    }


    for (int i = 0; i < contU; i++){
        printf("%d ",u[i]);
    }


return(0);
}