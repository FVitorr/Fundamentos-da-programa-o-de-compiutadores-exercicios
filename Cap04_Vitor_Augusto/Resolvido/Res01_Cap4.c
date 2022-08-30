/*
Faça um programa que receba as três notas, calcule e mostre a média ponderada e o conceito que segue
a tabela:
*/

#include <stdio.h>
#include <stdlib.h>1

int main(){
    float nota1,nota2,nota3,nota_med;
    char conceito;
    //obter as 3 notas
    printf("\n\n+++++++++++++++++++++++++++++++++++++++++");
    printf("\nInforme a Nota do Trabalho de laboratorio: "); // Apresenta peso 2
    scanf("%f",&nota1);

    printf("\nInforme a Nota da Avaliacao semestral: "); // Apresenta peso 3
    scanf("%f",&nota2);

    printf("\nInforme a Nota do Exame final: "); // Apresenta peso 5
    scanf("%f",&nota3);

    //Calculo para a media ponderada
    nota_med = (nota1 * 2 + nota2 * 3 + nota3 * 5 ) / ( 5 + 3 + 2);
    //printf("Resultado Final: %f",nota_med);

    //Realizar aas comparaçoes para determinar o valor do conceito
    
    if (nota_med >= 8 && nota_med <= 10){
        conceito = 'A';
    }else if (nota_med >= 7.0 && nota_med < 8.0){
        conceito = 'B';
    }else if (nota_med >= 6.0 && nota_med < 7.0){
        conceito = 'C';
    }else if (nota_med >= 5.0 && nota_med < 6.0){
        conceito = 'D';
    }else if (nota_med >= 0.0 && nota_med < 5.0){
        conceito = 'E';
    }
    //mostrar resultados
    printf("\nResultado Final: %f",nota_med);
    printf("\nConceito: %c",conceito);
    printf("\n\n+++++++++++++++++++++++++++++++++++++++++");
    
    return(0);
}