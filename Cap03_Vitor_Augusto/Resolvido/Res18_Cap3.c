#include <stdio.h>
#include <stdlib.h>

/*Pedro comprou um saco de ração com peso em quilos. Ele possui dois gatos, para os quais fornece a
quantidade de ração em gramas. A quantidade diária de ração fornecida para cada gato é sempre a
mesma. Faça um programa que receba o peso do saco de ração e a quantidade de ração fornecida para
cada gato, calcule e mostre quanto restará de ração no saco após cinco dias.
*/

//Pesso em Kg
//2 gato 

//peso_sacola + qtd_pgato saldo em 5 dias 
#define dias 5 
#define qtd_gatos 2


int main(){
    //Receber as Entradas Peso do saco de ração e a quantidade diaria para cada gato
    float peso_racao,qtd_fornecida, qtd_consumida,qtd_total;
    //Receber as Entradas 
    printf("\nPeso do Saco de Racao (kg): ");
    scanf("%f",&peso_racao);

    printf("\nQuantidade diaria de racao fornecida (g): ");
    scanf("%f",&qtd_fornecida);

    //Transformar grama em kG
    qtd_consumida = (qtd_fornecida / 1000) * qtd_gatos;
    //Calcular saldo em 5 dias 
    qtd_total = peso_racao - (qtd_consumida * dias);
    printf("\nO Saldo projetado para o quinto dia e: %f kg\n",qtd_total);
    return(0);
}