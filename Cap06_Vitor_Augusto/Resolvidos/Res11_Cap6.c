#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que receba a temperatura média de cada mês do ano, armazenando-as em um vetor.
Calcule e mostre a maior e a menor temperatura do ano e em que mês ocorreram (mostrar o mês por
extenso: 1 – janeiro, 2 – fevereiro...). Desconsidere empates.
*/
#define t 12

int main(){
    float vetor[t],r_vetor[t];
    float tempMax,tempMin;
    int i, j;
    float aux;
    //preencher vetor
    for (i = 0; i < t; i++) {
        printf("Informe Temperatura: ", i + 1);
        scanf("%f", &vetor[i]);
    }
    //preencher r_vetor
    for (i = 0; i < t; i++) {
        r_vetor[i] = vetor[i];
    }
    /*
    printf("\nOrdem dos numeros Informados: \n ");
    for (i = 0; i < t; i++) {
        printf("%f   ", r_vetor[i]);
    }*/
    //ordenar vetor em forma decrescente
    for (i = 0; i < t; i++) {
        for (j = i + 1; j < t; j++) {
            if (vetor[j] > vetor[i]) {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
    //Tempmin e Tempmax é vetor[t],vetor[0]
    tempMin = vetor[t];
    tempMax = vetor[0];
    // encontrar mes
    for (i = 0; i < t; i++) {
        if (r_vetor[i] == tempMax){
            printf("\nMes de maior temperatura: %d\n Temperatura: %f",i + 1,tempMax);
        }
        if (r_vetor[i] == tempMin){
            printf("\nMes de menor temperatura: %d\n Temperatura: %f",i + 1,tempMin);
        }
    }
}