#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que receba um conjunto de valores inteiros e positivos, calcule e mostre o maior e o
menor valor do conjunto. Considere que:
■■ para encerrar a entrada de dados, deve ser digitado o valor zero;
■■ para valores negativos, deve ser enviada uma mensagem;
■■ os valores negativos ou iguais a zero não entrarão nos cálculos. 
*/
int main() {
    int num, maior, menor;
    maior = 0;
    menor = 999999;
    
    printf("Digite 0 para sair. \n\n");
    do {
        printf("Digite um número: ");
        scanf("%d", &num);

        if (num == 0) {
            break;
        }
        if (num != 0) {
            if (num < 0) {
                printf("Número inválido. \n");
            }
            
            if (num > maior) {
                maior = num;
            }

            if (num < menor) {
                menor = num;
            }
        }

    } while (num != 0);
    printf("Maior número digitado: %d \n", maior);
    printf("Menor número digitado: %d \n", menor);

    return (0);
}