#include <stdlib.h>
#include <stdio.h>

/*
Faça um programa que receba cinco números e mostre a saída a seguir:
Digite o 1º número 5
Digite o 2º número 3
Digite o 3º número 2
Digite o 4º número 0
Digite o 5º número 2
Os números digitados foram: 5 + 3 + 2 + 0 + 2 = 12
*/
#define len_vetor 5
int main(){
    int vetor[len_vetor],sum=0;

    //preencher o vetor 
    for (int i = 0; i < len_vetor; i++){
        printf("Digite o %d Numero: ",i);
        scanf("%d",&vetor[i]);
    }
    printf("\n\nOs numeros digitados foram::\n");
    for (int i = 0; i < len_vetor; i++){
        if (i == 0){
            printf("%d",vetor[i]);
        }else{
            printf(" + %d",vetor[i]);
        }
        sum = sum + vetor[i];
    }
    printf(" = %d",sum);

return(0);
}