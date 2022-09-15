#include <stdlib.h>
#include <stdio.h>

/*
*. Faça um programa que leia um vetor A de dez posições. Em seguida, compacte o vetor, retirando os
valores nulos e negativos. Armazene esse resultado no vetor B. Mostre o vetor B. (Lembre-se: o vetor B
pode não ser completamente preenchido.)
*/
#define t 10
int main(){
    
    int a[t],b[t],cont_b=0;
    //preencher vetores com as devidas validaçoes
    for (int i = 0; i < t; i++){
        printf("Informe um Numero: ");
        scanf("%d",&a[i]);
        //compacte o vetor, retirando os valores nulos e negativos
        if (a[i] > 0){
            b[cont_b] = a[i];
            cont_b++;
        }
    }
    //mostrar saidas
    printf("\n Vetor Compactado:  [");
    for (int i = 0; i < cont_b; i++){
        printf(" %d ",b[i]);
    }
    printf("]\n\n");
    
        

return(0);
}