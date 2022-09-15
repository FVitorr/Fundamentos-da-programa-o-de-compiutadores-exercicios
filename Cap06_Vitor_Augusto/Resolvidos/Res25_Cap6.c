#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*
*Faça um programa que gere os dez primeiros números primos acima de 100 e armazene-os em um
vetor. Escreva no final o vetor resultante.
*/
#define t 10

int main(){
    srand(time(NULL)); 
    int primo[t],i=0;
    while(1)
    {
        int numero=rand()%100;
        int div_ = 0;
        ///Verificar se é primo
        for (int div = 1; div <= numero; div++){
            if (numero%div == 0){
                div_ = div_ + 1;
            }
        }
        if (div_ == 2){ // Numero primo então
            primo[i] = numero;
            i++;
        }
        if(i == 10){
            break;
        }
    }
    printf("Numeros Primos: \n[ ");
    for (i = 0; i < t; i++){
        printf("%d,",primo[i]);
    }
    printf(" ]\n\n");
    
    

return(0);
}