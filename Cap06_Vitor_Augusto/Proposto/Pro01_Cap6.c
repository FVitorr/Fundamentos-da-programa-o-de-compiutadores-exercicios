#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que preencha um vetor com seis elementos numéricos inteiros. Calcule e mostre:
■■ todos os números pares;
■■ a quantidade de números pares;
■■ todos os números ímpares;
■■ a quantidade de números ímpares. 
*/
#define len_vetor 6
int main(){
    int vetor[len_vetor],vetor_par[len_vetor],vetor_impar[len_vetor];

    //preencher o vetor 
    for (int i = 0; i < len_vetor; i++){
        printf("Informe um Numero: ");
        scanf("%d",&vetor[i]);
    }
    //separ saidas 
    int cont_p = 0,cont_i=0;
    for (int i = 0; i < len_vetor; i ++){
        if(vetor[i]%2 == 0){
            vetor_par[cont_p] = vetor[i];
            cont_p++;
        }else {
            vetor_impar[cont_i] = vetor[i];
            cont_i++;
        }
    }
    //mostrar saida
    printf("Numeros Pares:\n[");
    for (int i = 0; i < cont_p; i++){
        printf(" %d ",vetor_par[i]);
    }
    printf("]\n\nQuantidade de numeros Pares: %d\nNumeros Impares\n[",cont_p);
    for (int i = 0; i < cont_i; i++){
        printf(" %d ",vetor_impar[i]);
    }
    printf("]\n\n\nQuantidade de numeros ImPares: %d",cont_i);

return(0);
}