#include <stdlib.h>
#include <stdio.h>

/*
*3. Faça um programa que preencha um vetor com dez números inteiros,
 calcule e mostre os números superiores a cinquenta e suas respectivas posições. 
 O programa deverá mostrar mensagem se não existir
nenhum número nessa condição.
*/
#define t 10
int main(){
    int n[t],s50 = 0;
    //preencher vetores
    printf("\n--- Vetor 1 ---\n");
    for (int i = 0; i < t; i++) {
        printf("Informe um numero: ", i + 1);
        scanf("%d", &n[i]);
    }
    //mostrar saida
    int cont = 1;
    printf("\nNumeros Maiores que 50:\n")
    for (int i = 0 ; i < t; i++){
        if (n[i] > 50){
            printf("\nNumero: %d Index: %d",n[i],i);
            cont = 0;
        } 
    }
    if (cont != 0){
        printf("\nNenhum valor superior a 50.\n\n");
    }

return(0);
}