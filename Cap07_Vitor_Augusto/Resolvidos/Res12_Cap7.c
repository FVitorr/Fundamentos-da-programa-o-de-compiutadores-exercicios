#include <stdlib.h>
#include <stdio.h>

/*
*Elabore um programa que preencha uma matriz 4  4 com números inteiros e verifique se essa matriz
forma o chamado quadrado mágico. Um quadrado mágico é formado quando a soma dos elementos
de cada linha é igual à soma dos elementos de cada coluna dessa linha, é igual à soma dos elementos
da diagonal principal e, também, é igual à soma dos elementos da diagonal secundária.
*/
#define t 4
int main(){
    int m[t][t];
    //preencher matriz
    for (int i = 0; i < t; i++){
        for (int j = 0; j < t; j++){
            printf("Informe um Numero: ");
            scanf("%d",&m[i][j]);
        }
        printf("\n");
    }
    
    int s_linha[t],s_colunm[t],s_dprincipal[t],s_dsecundaria[t],cont = t - 1;
    for (int i = 0; i < t;i++){
        s_linha[i] = 0; //somar linhas
        s_colunm[i] = 0; //somar coluna
        s_dprincipal[i] = 0; // somar diagonal principal
        s_dsecundaria[i] = 0; // somar diagonal secundaria
        for (int j = 0; j < t; j++)
        {
            s_linha[i] = s_linha[i] + m[i][j];
            s_colunm[i] = s_colunm[i] + m[j][i];
            s_dprincipal[i] = s_dprincipal[i] + m[i][i];
            s_dsecundaria[i] = s_dsecundaria[i] + m[i][cont];
            cont--;
        }
        
    }
    for (int i = 0 ; i < t; i++){
        for(int j = 0; j < t; j++){
            printf(" %d ",m[i][j]);
        }
        printf("\n");
    }
    int t_linha = 0,t_colunm = 0,t_dprincipal = 0,t_dsecundaria = 0;
    for ( int i = 0; i < t;i++){
        t_linha = t_linha + s_linha[i];
        t_colunm = t_colunm + s_colunm[i];
        t_dprincipal = t_dprincipal + s_dprincipal[i];
        t_dsecundaria = t_dsecundaria + s_dsecundaria[i];
    }
    if (t_linha == t_colunm && t_linha == t_dprincipal && t_linha == t_dsecundaria){
        printf("\n\n--> Quadrado Magico\n\n");
    }else{
        printf("\n\n-->Nao é Quadrado Magico\n\n");
    }

return(0);
}