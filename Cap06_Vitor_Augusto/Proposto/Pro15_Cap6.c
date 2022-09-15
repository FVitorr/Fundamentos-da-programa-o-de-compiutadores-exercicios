#include <stdlib.h>
#include <stdio.h>

/*
*. Faça um programa que receba o nome de oito clientes e armazene-os em um vetor. Em um segundo vetor,
armazene a quantidade de DVDs locados em 2011 por cada um dos oito clientes. Sabe-se que, para cada
dez locações, o cliente tem direito a uma locação grátis. Faça um programa que mostre o nome de todos
os clientes, com a quantidade de locações grátis a que ele tem direito. 
*/

#define t 2
int main(){
    //substituir nome por numeros 
    int mat[t],qtd_alo[t],qtd_g[t];
    for (int i = 0; i < t; i++){
        printf("Informe a Matricula : ");
        scanf("%d",&mat[i]);
        printf("Informe a quantidade Alocada: ");
        scanf("%d",&qtd_alo[i]);
    }
    //Mostrar saida
    printf("\n|Matricula|\t|Qnt Alocada|\t|Qnt Gratis|");
    for (int i = 0; i < t; i++){
        qtd_g[i] = qtd_alo[i] / 10; //obter quantidade gratis
        printf("\n|   %d   |\t|     %d    |\t|    %d     |",mat[i],qtd_alo[i],qtd_g[i]);
    }

return(0);
}