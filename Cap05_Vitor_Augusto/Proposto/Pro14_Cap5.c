#include <stdlib.h>
#include <stdio.h>

/*
*Cada espectador de um cinema respondeu a um questionário no qual constava sua idade e sua opinião
em relação ao filme: ótimo — 3; bom — 2; regular — 1. Faça um programa que receba a idade e 
a opinião de quinze espectadores, calcule e mostre:
■■ a média das idades das pessoas que responderam ótimo;
■■ a quantidade de pessoas que responderam regular; e
■■ a percentagem de pessoas que responderam bom, entre todos os espectadores analisados. 
*/
int main(){
    printf("\n______ Questionario ______\n");

    int idade,op,pessoa = 0,t_idade=0,qtd_regular=0,qtd_bom = 0;
    while (pessoa < 15)  
    {   //obter entradas 
        printf("\n  -- Registro %d -- ",pessoa);
        printf("\nInforme Idade:");
        scanf("%d",&idade);

        printf("Qual sua Opiniao em relacao ao filme:\n");
        printf("\n  -------------------");
        printf("\n  | 3 - Otimo       |");
        printf("\n  | 2 - Bom         |");
        printf("\n  | 1 - Regular     |");
        printf("\n  -------------------");

        printf("\nOpcao: ");
        scanf("%d",&op);

        t_idade = t_idade + idade;

        if (op == 1){
            qtd_regular = qtd_regular + 1;
        }
        if (op == 2){
            qtd_bom++;
        }
        pessoa++;
    }
    printf("\n\n_______ Resultados ________");
    //a quantidade de pessoas que responderam regular;
    printf("\nMedia das Idades: %f",t_idade / 15);

    printf("\nRegular: %d qtd",qtd_regular);

    //porcentagem
    float porc;
    porc = qtd_bom * 100 / 15;
    printf("\nBom: %f%% ",porc);

    

return(0);
}