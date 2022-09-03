#include <stdlib.h>
#include <stdio.h>

/*
 * . Faça um programa que receba um número inteiro maior que 1, 
 * verifique se o número fornecido é primo ou não e mostre uma mensagem de
 *  número primo ou de número não primo.
Um número é primo quando é divisível apenas por 1 e por ele mesmo.
 */
int main(int argc, char** argv) {
    int num,qtd=0;
    printf("Informe um Numero Inteiro Maior que 1:");
    scanf("%d",&num);
    
    //Um número é primo quando é divisível apenas por 1 e por ele mesmo.
    for (int i = 1 ; i <= num ; i++){
        int res = num % i;
        if (res == 0 ){
            qtd++;
        }
    }
    if (qtd > 2){
        printf("Numero não Primo");
    }else{
        printf("Numero Primo");
    }
    return(EXIT_SUCCESS);
}
