#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que leia um conjunto de quinze valores e armazene-os em um vetor. 
A seguir, separe-os em dois outros vetores (P e I) com cinco posições cada. 
O vetor P armazena números pares e o vetor I, números ímpares. 
Como o tamanho dos vetores pode não ser suficiente para armazenar todos
os números, deve-se sempre verificar se já estão cheios. Caso P ou I estejam cheios, 
deve-se mostrá-los e recomeçar o preenchimento da primeira posição. 
Terminado o processamento, mostre o conteúdo restante dentro dos vetores P e I.
*/
#define t 6
#define t_ 2

int main(){
    int p[t_],i[t_],vetor[t];
    //preencher vetor
    for (int j = 0; j < t ;j++){
        printf("Informe um Numero: ");
        scanf("%d",&vetor[j]);
    }
    int cont_p = 0,cont_i = 0;
    for (int j = 0; j < t ;j++){
        int num = vetor[j];
        if (num%2==0){//numero par
            if (cont_p == t_ ){
                //mostrar vetor caso este esteja cheio 
                printf("\nPar: \n[");
                for (int k = 0; k < t_ ; k++){
                    printf(" %d ",p[k]);
                }
                printf("]\n");
                cont_p = 0; //resetar cont_p para reescrever vetor com o restante dos numeros
            }
            p[cont_p] = num;
            cont_p++;
        }else{
            if (cont_i == t_ ){
                //mostrar vetor caso este esteja cheio 
                printf("\nImpar: \n[");
                for (int k = 0; k < t_ ; k++){
                    printf(" %d ",i[k]);
                }
                printf("]\n");
                cont_i = 0; //resetar cont_i para reescrever vetor com o restante dos numeros
            }
            i[cont_i] = num;
            cont_i++;
        }
    }
    // mostra vetor resultantes;
    printf("\n--- Vetores Restantes ---");
    printf("\nImpar: \n[");
    for (int k = 0; k < t_; k++)
    {
        printf(" %d ", i[k]);
    }
    printf("]\nPar: \n[");
    for (int k = 0; k < t_; k++)
    {
        printf(" %d ", p[k]);
    }
    printf("]\n");
    return (0);
}