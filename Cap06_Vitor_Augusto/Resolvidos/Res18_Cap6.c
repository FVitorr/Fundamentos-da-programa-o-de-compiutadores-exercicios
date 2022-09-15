#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que receba o número sorteado por um dado em vinte jogadas. Mostre os números
sorteados e a frequência com que apareceram.
*/
#define t 20
int main(){
    int dado_e[t];

    //prencher vetor
    for (int i = 0; i< t; i++){
        dado_e[i] = 0;
        printf("Informe um numero:");
        scanf("%d",&dado_e[i]);
        while (dado_e[i] > 6){ // validar dados sempre menor q 6
            printf("\n\n<- Valor Invalido ->");
            printf("\nInforme um numero:");
            scanf("%d",&dado_e[i]);
        }
    }

    //calcular repetidos com vetor controle
    int vetor_controle[6],vetor_frequencia[6];
    //preencher vetor de controle
    for (int i = 0; i < 6 ;i++){
        vetor_controle[i] = i+1;
        vetor_frequencia[i] = 0;
    }

    for (int i = 0; i < t;i++){
        int num = dado_e[i];
        //printf("%d",num);
    
        for (int j = 0; j < 6; j++){ // testar se repete e adc aos vetores de controle e frequenciaprintf("%d",num);
            //printf("\n%d",vetor_controle[j]);
            int freq = vetor_frequencia[j];
            //printf("\n%d",freq);
            if (num == vetor_controle[j]){
                freq = freq + 1;
                //printf("\n%d",freq);
                vetor_frequencia[j] = freq;
            }
        }
    }
    //mostrar saida
    printf("\n");
    for (int j = 0; j < 6; j++){ // testar se repete e adc aos vetores de controle e frequencia
        printf("\nNumero:[ %d ]  Frequencia: [ %d ]",vetor_controle[j],vetor_frequencia[j]);
    }


return(0);
}