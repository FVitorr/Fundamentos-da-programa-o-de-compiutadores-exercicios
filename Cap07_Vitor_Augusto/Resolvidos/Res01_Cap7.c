#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que preencha uma matriz M (2  2), calcule e mostre a matriz R, resultante da
multiplicação dos elementos de M pelo seu maior elemento.
*/
#define t 2
int main(){
    //m[linha][coluna];
    int m[t][t],r[t][t],m_element = 0;
    //prencher vetor;
    for (int i = 0; i < t; i++){
        for (int j = 0; j < t; j++){
            printf("Informe um Numero: ");
            scanf("%d",&m[i][j]);
            //obter maior elemento
            if (m_element < m[i][j]){
                m_element = m[i][j];
            }
        }
    }
    printf("Maior Elemento: %d\n",m_element);
    //calcular vetor r
    for (int linha = 0; linha < t; linha++){
        for (int coluna = 0; coluna < t; coluna++)
        {
            r[linha][coluna] = m[linha][coluna] * m_element;
        }
    }
    //mostrar saida
    printf("\nVetor Resultante: \n");
    for (int linha = 0; linha < t; linha++){
        for (int coluna = 0; coluna < t; coluna++)
        {
            printf(" %d ",r[linha][coluna]);
        }
        printf("\n");
    }

return(0);
}