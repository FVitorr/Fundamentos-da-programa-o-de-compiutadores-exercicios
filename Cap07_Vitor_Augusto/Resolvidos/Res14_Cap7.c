#include <stdio.h>
#include <stdlib.h>
#define T 5 //Como é um vetor de linhas e colunas de mesmo tamnho,basta apenas um valor de medida
#define QUANT 5 //Quantidade de cidades

/*  Para facilitar a ordenação das matrizes e vetores, criei uma variavel para cada
 função,sendo: pos = Linha, pos2 = Coluna e pos3 = Vetores  */

int main() {
    char cidade_origem[QUANT][40], cidade_destino[QUANT][40];
    float distancia[T][T], consumo[T], percurso[T], gasto_combustivel[T];
    int c = 0, pos = 0, pos2 = 0, pos3 = 0;

    //Input
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < T; j++) {
            //O usúario não poderá inserir valores na diagonal principal da matrizi

            if(i != j) {
                printf("\n%d  Viagem \n", c + 1);
                printf("Origem: ");
                setbuf(stdin, NULL);
                gets(cidade_origem[pos3]);

                printf("Destino: ");
                setbuf(stdin, NULL);
                gets(cidade_destino[pos3]);

                printf("Distância entre as cidades: ");
                scanf("%f", &distancia[pos][pos2]);

                printf("Consumo do veçulo(km/L): ");
                scanf("%f", &consumo[pos3]);

                gasto_combustivel[c] = distancia[pos][pos2] / consumo[pos];
                c++;

                if (c == T - 1) {
                    pos++; //Controla a posilçao das linhas;
                    pos2 = 0; //Controla a posição das colunas
                    c = 0;
                }
                pos3++; //Controla as posições dos vetores

            } else {
                distancia[pos][pos2] = 0;
            }
            c++;
            pos2++;
        }
    }

    //Output
    printf("\n---------------------------RELATÓRIO---------------------------\n");
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < T; j++) {
            if (i != j) {
                if (distancia[i][j] <= 250) {
                    printf("\nVIAGEM %d; \n", i + 1);
                    printf("\tOrigem: %s; \n", cidade_origem[i]);
                    printf("\tDestino: %s; \n", cidade_destino[i]);
                    printf("\tDistancia: %.2f km; \n", distancia[i][j]);
                    printf("Gasto de combustivel: %.2f L. \n", consumo[i]);
                }
            }
        }
    }


    return (0);
}