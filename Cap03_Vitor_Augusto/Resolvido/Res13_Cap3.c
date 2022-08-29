/*
Sabe-se que:
pé = 12 polegadas
1 jarda = 3 pés
1 milha = 1,760 jarda
Faça um programa que receba uma medida em pés, faça as conversões a seguir e mostre os resultados.
a) polegadas;
b) jardas;
c) milhas. 
*/


#include <stdio.h>
#include <stdlib.h>

int main (){
    float num_pe, pol,jard, mil;

    //oBTER MEDIDA EM PE
    printf("Digite um Numero (em pes): ");
    scanf("%f",&num_pe);
    //Realizar conversões
    pol = num_pe * 12;
    jard = num_pe / 3;
    mil = jard / 1760;

    printf("\n++++++++++++ Conversoes ++++++++++++");
    printf("\n\n%f pe(s) = %f polegada(s)",num_pe,pol);
    printf("\n%f pe(s) = %f jarda(s)",num_pe,jard);
    printf("\n%f pe(s) = %f milha(s)\n",num_pe,mil);
     printf("\n++++++++++++++++++++++++++++++++++");
    

    return(0);
}

