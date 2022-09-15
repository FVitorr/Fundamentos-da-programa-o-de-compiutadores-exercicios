#include <stdlib.h>
#include <stdio.h>

/*
*. Faça um programa que preencha um primeiro vetor com dez números inteiros, e um segundo vetor
com cinco números inteiros. O programa deverá mostrar uma lista dos números do primeiro vetor com
seus respectivos divisores armazenados no segundo vetor, bem como suas posições.
Exemplo de saída do programa:
*/
#define t 5
#define t_d 3

int main(){
    int num[t],div[t_d];
    //preencher vetor
    printf("\n-- Dividendo --\n");
    for (int i = 0; i < t ;i++){
        printf("Informe um Numero: ");
        scanf("%d",&num[i]);
    }
    printf("\n-- Divisor --\n");
    for (int i = 0; i < t_d ;i++){
        printf("Informe um Numero: ");
        scanf("%d",&div[i]);
    }

    for (int i = 0; i < t ;i++){
        //separar um numero 
        int num_ = num[i];
        //testar se tem divisor no outro vetor
        //percorrer segundo vetor 7
        int erro = 1;
        for (int j = 0; j < t_d ;j++){
            int div_ = div[j];
            //testar se tem divisor no outro vetor
            //printf("%d",num_%div_);
            if (num_%div_ == 0){
                printf("\nNumero: %d\nDivisivel por %d na posicao %d\n",num_,div_,j);
                erro = 0;
            }
        }
        if (erro == 1){
            printf("Nao existe divisores")
        }
    }
    

return(0);
}