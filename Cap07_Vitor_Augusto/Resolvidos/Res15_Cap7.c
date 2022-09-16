#include <stdlib.h>
#include <stdio.h>

/*
*Elabore um programa que preencha:
■■ um vetor com cinco números inteiros;
■■ outro vetor com dez números inteiros;
■■ uma matriz 4  3, também com números inteiros.
O programa deverá calcular e mostrar:
■■ o maior elemento do primeiro vetor multiplicado pelo menor elemento do segundo vetor.
 O resultado dessa multiplicação, adicionado aos elementos digitados na matriz, dará origem a uma segunda
matriz (resultante);
■■ a soma dos elementos pares de cada linha da matriz resultante;
■■ a quantidade de elementos entre 1 e 5 em cada coluna da matriz resultante. 
*/
#define l 4
#define c 3
#define tv 5
#define tv1 10
int main(){
    int m[l][c],v[tv],v1[tv1];
    //preencher vetores
    printf ("\t-- Vetor 1 --\n\n");
    for (int i = 0; i < tv; i++){
        printf("\tInforme um numero: ");
        scanf("%d",&v[i]);
    }
    printf ("\n\t-- Vetor 2 --\n\n");
    for (int i = 0; i < tv1; i++){
        printf("\tInforme um numero: ");
        scanf("%d",&v1[i]);
    }
    //preencher matriz
    printf("\n\t-- Matriz --\n");
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            printf("\tM[%d][%d]: ",i,j);
            scanf("%d",&m[i][j]);
        }
        printf("\n");
    }
    printf("--> Matriz Informada:\n");
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            printf(" %d ",m[i][j]);
        }
        printf("\n");
    }
    //Saidas
    //o maior elemento do primeiro vetor multiplicado pelo menor elemento do segundo vetor.
    int m_v = 0,mn_v1 = 0;
    for (int i = 0; i < tv; i++){
        if (v[i] > m_v){
            m_v = v[i]; //o maior elemento do primeiro vetor
        }
    }
    printf("\nMaior elemento do Vetor 1: %d\n",m_v);
    mn_v1 = v1[0];
    for (int i = 0; i < tv1; i++){
        if (v1[i] < mn_v1){
            mn_v1 = v[i]; //menor elemento do segundo vetor.
        }
    }
    printf("\nMenor elemento do Vetor 2: %d\n",mn_v1);
    int mult = m_v * mn_v1; //o > elemento do 1 vetor multiplicado pelo < elemento do 2 vetor.
    //multiplicação + elementos da matriz = matriz(resultante);
    printf("Mult = MenorVetor1 * MaiorVetor2 \n %d * %d = %d",mn_v1,m_v,mult);
    printf("\nMatriz Resultante:");
    int m_r[l][c],s_par[l],qtd_c[c];
    for (int i = 0; i < l; i++){
        s_par[i] = 0;
        for (int j = 0; j < c; j++){
            m_r[i][j] = mult + m[i][j];
            printf(" %d ",m_r[i][j]);
            //a soma dos elementos pares de cada linha da matriz resultante;
            if (m_r[i][j] % 2 == 0){
                s_par[i] = s_par[i] + m_r[i][j];
            }
        }
        printf("\n");
    }
    //mostrar saidas
    for (int i = 0; i < l; i++){
        printf("\nLinha[%d] Soma Par: %d ",i,s_par[i]);
    }
    //preencher vetor com 0
    for (int i = 0 ; i < c;i++){
        qtd_c[i] = 0;
    }
    int j,cont = 0;
    for (int i = 0; i < c; i++){
        int qtd = 0;
        for (j = 0; j < l; j++){
            //a quantidade de elementos entre 1 e 5 em cada coluna da matriz resultante.
            int num = m_r[j][i];

            if ( num >= 1 && num <=5){
                qtd = qtd + 1;
            }
        }
        qtd_c[cont] = qtd;
        cont++;
    }
    for (int i = 0 ; i < c;i++){
        printf("\nColuna[%d] qtd(1-5): %d",i,qtd_c[j]);
    }


return(0);
}