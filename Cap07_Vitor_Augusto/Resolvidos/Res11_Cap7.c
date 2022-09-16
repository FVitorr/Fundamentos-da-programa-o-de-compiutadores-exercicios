#include <stdlib.h>
#include <stdio.h>

/*
*. Crie um programa que preencha uma matriz 8  8 com números inteiros e mostre uma mensagem
dizendo se a matriz digitada é simétrica. Uma matriz só pode ser considerada simétrica se A[i,j] =
A[j,i].
*/
#define l 2
#define c 2
int main(){
    //menor elemento da linha i e maior elemento da coluna j
    //preencher vetor
    int m[l][c];
    for (int i = 0 ; i < l; i++){
        for(int j = 0; j < c; j++){
            printf("Informe um numero: ");
            scanf("%d",&m[i][j]); 
        }
        printf("\n");
    }
    int simetrica = 0;
    for (int i = 0 ; i < l; i++){
        for(int j = 0; j < c; j++){
            //printf ("%d %d",m[i][j],m[j][i]);
            //verificar simetria
            if (m[i][j] != m[j][i]){
                simetrica = 1;
            }
        }
    }
    for (int i = 0 ; i < l; i++){
        for(int j = 0; j < c; j++){
            printf(" %d ", m[i][j]);
        }
        printf("\n");
    }
    if (simetrica == 0){
        printf("Matriz Simetrica");
    }else{
        printf("Matriz nao Simetrica");
    }

return(0);
}