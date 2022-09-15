#include <stdlib.h>
#include <stdio.h>

/*
*. Faça um programa que leia dois vetores (A e B) com cinco posições para números inteiros. O programa
deve, então, subtrair o primeiro elemento de A do último de B, acumulando o valor, subtrair o segundo
elemento de A do penúltimo de B, acumulando o valor e assim por diante. Ao final, mostre o resultado
de todas as subtrações realizadas
*/
#define t 5
int main(){
    
    int a[t],b[t],cont_b = t-1;
    //preencher vetores com as devidas validaçoes
    printf("\n-- Vetor 1 --");
    for (int i = 0; i < t; i++){
        printf("Informe um Numero: ");
        scanf("%d",&a[i]);
    }
    printf("\n-- Vetor 2 --");
    for (int i = 0; i < t; i++){
        printf("Informe um Numero: ");
        scanf("%d",&b[i]);
    }
    //O programa deve, então, subtrair o primeiro elemento de A do último de B
    for (int i = 0; i < t; i++){
        int sub = a[i] - b[cont_b];
        printf("\nA[%d] - B[%d] = %d",i,cont_b,sub);
        cont_b--;
    }


return(0);
}