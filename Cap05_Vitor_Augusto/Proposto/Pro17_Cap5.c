#include <stdlib.h>
#include <stdio.h>

/*
*Foi feita uma pesquisa sobre a audiência de canal de TV em várias casas de uma cidade, em determinado
dia. Para cada casa consultada foi fornecido o número do canal (4, 5, 7, 12) e o número de pessoas que
estavam assistindo àquele canal. Se a televisão estivesse desligada, nada era anotado, ou seja, essa casa
não entrava na pesquisa. Faça um programa que:
■■ leia um número indeterminado de dados (número do canal e número de pessoas que estavam assistindo); e
■■ calcule e mostre a porcentagem de audiência de cada canal.
Para encerrar a entrada de dados, digite o número do canal ZERO.
*/
int main(){
    int qtd_pesoas,qtd_c4 = 0 ,qtd_c5 = 0 ,qtd_c7 = 0 ,qtd_c12 = 0,canal,s_pessoas = 0;
    float porc4,porc5,porc7,porc12;

    do
    {
        printf("Informe Canal: ");
        scanf("%d",&canal);

        if(canal != 0){
            printf("Informe a qtd pessoas assistindo:");
            scanf("%d",&qtd_pesoas);
        }else{
            break;
        }


        s_pessoas = s_pessoas + qtd_pesoas;
        //quantidade de pessoas assistindo a cada canal
        if (canal == 4){
            qtd_c4 = qtd_c4 + qtd_pesoas;
        }else if (canal == 5){
            qtd_c5 = qtd_c5 + qtd_pesoas;
        }else if (canal == 7){
            qtd_c7 = qtd_c7 + qtd_pesoas;
        }else if (canal == 12){
            qtd_c12 = qtd_c12 + qtd_pesoas;
        }
    } while (canal != 0);

    porc4 = qtd_c4 * 100 / s_pessoas;
    porc5 = qtd_c5 * 100 / s_pessoas;
    porc7 = qtd_c7 * 100 / s_pessoas;
    porc12 = qtd_c12 * 100 / s_pessoas;
    printf("\nPorcentagem de audicencia:\n");
    printf("Canal 4: %.2f \nCanal 5: %.2f \nCanal 7: %.2f  \nCanal 12: %.2f",porc4,porc5,porc7,porc12);
    

return(0);
}