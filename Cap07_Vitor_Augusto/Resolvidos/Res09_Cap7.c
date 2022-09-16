#include <stdlib.h>
#include <stdio.h>

/*
*Crie um programa que preencha uma matriz 15  5 com números inteiros, calcule e mostre quais
elementos da matriz se repetem e quantas vezes cada um se repete.
*/
#define l 5
#define c 3

int main(){
    int m[l][c],m_uni[l*c];
    //preencher vetor
    for (int i = 0 ; i < l; i++){
        for(int j = 0; j < c; j++){
            printf("Informe um numero: ");
            scanf("%d",&m[i][j]); 
        }
    printf("\n");
    }
    //transformar array bidimensional em unidimensional
    int cont = 0;
    for (int i = 0 ; i < l; i++){
        for(int j = 0; j < c; j++){
            m_uni[cont] = m[i][j];
            cont++;
        }
    }
    //verificar se repete
    int qtd = 0,m_rep[l*c],qtd_rep[l*c];
    cont = 0;
    for (int i = 0; i < l * c; i++){
        //separar um numero
        //int m_rep[i] = m_uni[i];
        int num = m_uni[i];
        // verificar se numero ja existe na lista dos repetidos
        qtd = 0;
        for (int j = 0; j < l * c; j++){
            if (num == m_rep[j]){
                qtd++;
            }
        }
        if (qtd < 1){ // numero n existe
            m_rep[cont] = num;
            //quantidade de vez q repete
            qtd = 1;
            for (int k = i + 1; k < l * c; k++){
                if (num == m_uni[k]){
                    qtd++;
                }
            }
            qtd_rep[cont] = qtd;
            cont++;
        }
    }
    //mostrar vetor
    for (int i = 0 ; i < l; i++){
        for(int j = 0; j < c; j++){
            printf(" %d ",m[i][j]);
        }
        printf("\n");
    }
    //mostra saida 
    for (int i = 0 ; i < cont; i++){
        printf("\n Numero: %d Quantidade: %d",m_rep[i],qtd_rep[i]);
    }
return(0);
}