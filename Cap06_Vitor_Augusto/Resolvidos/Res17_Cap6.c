#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que receba seis números inteiros e mostre:
■■ os números pares digitados;
■■ a soma dos números pares digitados;
■■ os números ímpares digitados; e
■■ a quantidade de números ímpares digitados. 
*/
#define len_vetor 4
int main(){
    int vetor[len_vetor];
    int par[len_vetor],impar[len_vetor];
    for (int i = 0; i < len_vetor; i++){
        par[i] = 0;
        impar[i]= 0;
    }

    //preencher o vetor 
    for (int i = 0; i < len_vetor; i++){
        printf("Informe um Numero: ");
        scanf("%d",&vetor[i]);
    }
    // Par ou Impar
    int contr_p = 0, contr_i = 0;
    int soma_p = 0, soma_i = 0;

    for(int i = 0; i < len_vetor; i++){
        if (vetor[i]%2 == 0){//par
            par[contr_p] = vetor[i];
            contr_p = contr_p + 1;
            soma_p = soma_p + vetor[i];
        }else{//impar
            impar[contr_i] = vetor[i];
            contr_i = contr_i + 1;
            soma_i = soma_i + vetor[1];
        }
    }
    //Mostra saida:
    printf("\nNumeros Pares:\n[");
    for (int i = 0; i < contr_p; i++){
        printf(" %d ",par[i]);
    }
    printf("]\n");
    printf("Soma Par: %d",soma_p);

    printf("\nNumeros Impares:\n[");
    for (int i = 0; i < contr_i; i++){
        printf(" %d ",impar[i]);
    }
    printf("]\n");
    printf("Soma impar: %d\n\n",soma_i);

return(0);
}