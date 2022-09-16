#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que receba o estoque atual de três produtos, armazenados em quatro armazéns, e
coloque esses dados em uma matriz 5  3. Considerando que a última linha dessa matriz contenha o
custo de cada produto, o programa deverá calcular e mostrar:
■■ a quantidade de itens quadrados em cada armazém;
■■ qual armazém possui maior estoque do produto 2;
■■ qual armazém possui menor estoque;
■■ qual o custo total de cada produto;
■■ qual o custo total de cada armazém.
Devem ser desconsiderados empates.
*/

#define l 5
#define c 3

int main() {
    int a[l][c], quant_prod2[c], ult_linha = l - 1;

    //a última linha dessa matriz contenha o
    //custo de cada produto
    //preencher vetor
    for (int i = 0; i < l - 1; i++) { //n preencher ultima linha
        printf("%d Armazem \n\n", i + 1);
        for (int j = 0; j < c; j++) {
            printf("Produto %d \n", j + 1);
            printf("Itens armazenados: ");
            scanf("%d", &a[i][j]);
            printf("\n");
        }
    }

    //ultima linha preencher com preco
    printf("Precos \n");
    for (int i = 0; i < c; i++) {
        printf("Preco produto %d: ", i + 1);
        scanf("%d", &a[l - 1][i]);
    }

    //Estoque de cada armazem
    int sEstoque[c], p = 0;
    for (int i = 0; i < l - 1; i++) {
        sEstoque[p] = 0;
        for ( int j = 0; j < c; j++) {
            sEstoque[p] += a[i][j];
        }
        p++;
    }

    //Menor estoque
    int menorEstoque = 99999;
    for (int i = 0; i < l - 1; i++) {
        if (sEstoque[i] < menorEstoque) {
            menorEstoque = i;
        }
    }

    //Maior estoque do produto 2
    int m_estoqueP2 = 0;
    for (int i = 0; i <  l- 1; i++) {
        if (a[i][1] > m_estoqueP2) {
            m_estoqueP2 = i;
        }
    }

    //Custo de cada armazem;
    int custo[l - 1];
    p = 0;
    for (int i = 0; i < l - 1; i++) {
        for (int j = 0; j < l - 1; j++) {
            custo[p] += a[i][j] * a[l - 1][j];
        }
        p++;
    }


    printf("----> RELATORIO <----\n\n");
    for (int i = 0; i < l - 1; i++) {
        printf("*Armazem %d\n", i + 1);
        for (int j = 0; j < c; j++) {
            printf("\tProduto %d \n", j + 1);
            printf("\tEstoque: %d \n", a[i][j]);
            printf("\n");
        }
        printf("\tTotal de itens armazenados: %d",  sEstoque[i]);
        printf("\n");
    }

    printf("Precos \n");
    for (int i = 0; i < c; i++) {
        printf("\tValor produto %d: R$ %d. \n", i + 1, a[l - 1][i]);
    }

    printf("Custos \n");
    for (int i = 0; i < l - 1; i++) {
        printf("\tCusto Armazem  0%d : R$ %d \n", i + 1, custo[i]);
    }
    
    printf("\tArmazem %d - Menor estoque. \n", menorEstoque);
    printf("\tArmazem %d - Maior estoque produto 2. \n", m_estoqueP2 + 1);

    return (0);
}