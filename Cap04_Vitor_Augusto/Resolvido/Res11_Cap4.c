/*Faça um programa que receba a hora do início de um jogo e a hora do término (cada hora é composta
por duas variáveis inteiras: hora e minuto). Calcule e mostre a duração do jogo (horas e minutos),
sabendo que o tempo máximo de duração do jogo é de 24 horas e que ele pode começar em um dia e
terminar no dia seguinte.*/ 

#include <stdlib.h>
#include <stdio.h>

int main(){
    int i_hh,i_mm,t_hh,t_mm,d_hh,d_mm;

    printf("\n_______Inicio da Partida_______\n");
    //Obter Entradas 
    printf("Informe a Hora de Inicio: ");
    scanf("%d",&i_hh);

    printf("Minuto: ");
    scanf("%d",&i_mm);

    printf("\n_______Fim da Partida_______\n");
    //Obter Entradas 
    printf("Informe a Hora de Inicio: ");
    scanf("%d",&t_hh);

    printf("Minuto: ");
    scanf("%d",&t_mm);

    //calcular duração do jogo 
    if (i_mm > t_mm){ // na operação de subt hora_term - hora_inicio o maior termo fica em cima 
        t_mm = t_mm + 60;
        t_hh = t_hh - 1;
    }

    if (t_hh < i_hh){ // se hora de inicio maior q hora fim acressimo de um dia
        t_hh = t_hh + 24;
    }

    d_mm = t_mm - i_mm;
    d_hh = t_hh - i_hh;

    //mostrar saida
    printf("\n\nO jogo durou %d:%d",d_hh,d_mm);
    printf("__________________________");

    return(0);
}