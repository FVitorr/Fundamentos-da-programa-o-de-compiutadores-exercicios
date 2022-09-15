#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que preencha dois vetores com cinco elementos numéricos cada e,
 depois, ordene-
-os de maneira crescente. Deverá ser gerado um terceiro vetor com dez posições, composto pela junção
dos elementos dos vetores anteriores, também ordenado de maneira crescente.
*/
#define t 4
int main(){
    int n[t],n1[t],n3[t*2];
    int i, j, aux;
    //preencher vetores
    printf("\n--- Vetor 1 ---\n");
    for (i = 0; i < t; i++) {
        printf("Informe um numero: ", i + 1);
        scanf("%d", &n[i]);
    }
    printf("\n--- Vetor 2 ---\n");
    for (i = 0; i < t; i++) {
        printf("Informe um numero: ", i + 1);
        scanf("%d", &n1[i]);
    }

    //ordenar vetores
    for (i = 0; i < t; i++) {
        for (j = i + 1; j < t; j++) {
            if (n[i] > n[j]) {
                aux = n[i];
                n[i] = n[j];
                n[j] = aux;
            }
        }
    }

    for (i = 0; i < t; i++) {
        for (j = i + 1; j < t; j++) {
            if (n1[i] > n1[j]) {
                aux = n1[i];
                n1[i] = n1[j];
                n1[j] = aux;
            }
        }
    }
    // criar terceiro vetor // quando i > t usar var controle 0 
    int cont = 0;
    for (i = 0; i < t * 2; i++) {
        if (i<t){
            n3[i] = n[i];
        }else{
            n3[i] = n1[cont];
            cont++;
        }
    }
    //ordenar 3 vetor
    for (i = 0; i < t * 2; i++) {
        for (j = i + 1; j < t * 2; j++) {
            if (n3[i] > n3[j]) {
                aux = n3[i];
                n3[i] = n3[j];
                n3[j] = aux;
            }
        }
    }
    //Mostrar saidas
    int cont_f = 0;
    printf("\nSaida: \n Vetor 1: [");
    for (i = 0; i < t * 2; i++) {
        if (i < t){
            printf(" %d ", n[i]);
        }else{
            if(cont_f ==0){
                printf("]\n Vetor 2: [");
            }
            printf(" %d ", n1[cont_f]);
            cont_f++;
        }
    }
    printf("]\n\n");

    printf("\n Vetor 3: [");
    for (i = 0; i < t * 2; i++) {
        printf(" %d ",n3[i]);
    }
    printf("]\n\n");

return(0);
}