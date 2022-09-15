#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que leia um vetor com cinco posições para números reais e, depois, um código
inteiro. Se o código for zero, finalize o programa; se for 1, mostre o vetor na ordem direta; se for 2,
mostre o vetor na ordem inversa.
*/
#define t 3 
int main(){
    float vetor[t];
    int cod;
    // Se o código for zero, finalize o programa
    // Se for 1, mostre o vetor na ordem direta
    //Se for 2, mostrar o vetor na ordem inversa

    //preencher vetor
    printf("--- Vetor 1 --- \n");
    for (int i = 0; i < t; i++){
        printf("Informe um Numero: ");
        scanf("%f",&vetor[i]);
    }
    // menu
    printf("\n\n    |------ Menu ------|");
    printf("\n  |--Ordem Vetor-----|");
    printf("\n  |--- 1. Direta-----|");
    printf("\n  |--- 2. Inversa----|");

    printf("\n\n--> Opcao: ");
    scanf("%d",&cod);

    int index_reverse = t - 1; //para ordem inversa
    switch (cod)
    {
    case 1:
        //ordem direta
        printf("\n  --> Ordem Direta:\n--> [");
        for (int i =0 ; i < t; i++){
            printf(" %1.f ",vetor[i]);
        }
        printf("]\n");
        break;
    case 2: //ordem inversa
        printf("\n  --> Ordem Inversa:\n--> [");
        for (int i = 0 ; i < t; i++){
            //printf("Index Reverse: %d",index_reverse - i);
            printf(" %1.f ",vetor[index_reverse - i]);
        }
        printf("]\n");
        break;
    default:
        printf("    --> Valor Invalido");
        break;
    }

return(0);
}