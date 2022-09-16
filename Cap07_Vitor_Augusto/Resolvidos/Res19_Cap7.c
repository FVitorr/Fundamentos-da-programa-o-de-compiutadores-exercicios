#include <stdlib.h>
#include <stdio.h>

#define l 5
#define c 5

int main(){
    float m[l][c],qtd;
    //preencher matriz
    for (int i = 0; i < l;i++){
        for (int j = 0; j < c; j++){
            printf("Informe um numero: ");
            scanf("%f",&m[i][j]);
        }
        printf("\n");
    }

    //multiplicar linha pelo elemento da diagonal principal
    printf("\n-- Matriz Resultante --\n");
    for (int i = 0; i < l;i++){
        for (int j = 0; j < c; j++){
            m[i][j] =  m[i][i] * m[i][j];
        }
    }
    for (int i = 0; i < l;i++){
        for (int j = 0; j < c; j++){
            printf(" %f ",m[i][j]);
        }
        printf("\n");
    }

return(0);
}