#include <stdlib.h>
#include <stdio.h>

/*
*
*/
int main(){
    int cont_time,cont_jogador,idade,qted,tot80;
    float peso,alt,media_idade,media_altura,porc;

    qted = 0;
    tot80 = 0;
    for (cont_time = 1;cont_time <= 5;cont_time ++){
        media_idade = 0;
        for (cont_jogador = 1;cont_jogador <= 11 ;cont_jogador++){
            printf("\nInforme a Idade: ");
            scanf("%d",&idade);
            printf("\nInforme seu peso(kg): ");
            scanf("%f",&peso);
            printf("\nInforme sua Altura: ");
            scanf("%f",&alt);
            if (idade < 18){
                qted = qted + 1;
            }
            media_idade = media_idade + idade;
            media_altura = media_altura + alt;
            if (peso > 80){
                tot80 = tot80 + 1;
            }
            media_idade = media_idade / 11;
            printf("\nMedia - Idade: %f ",media_idade);
        }
        printf("\nQuantidade de Jogadores < 18: %d ",qted);
        media_altura = media_altura / 55;
        printf("\nAltura Media: %f",media_altura);
        porc = tot80 * 100/55;
        printf("\nPorcentagem de Jogadores com > 80kg: %f",porc);

    }
return(0);
}