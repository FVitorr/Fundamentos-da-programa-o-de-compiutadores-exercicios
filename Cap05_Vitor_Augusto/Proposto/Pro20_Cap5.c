#include <stdlib.h>
#include <stdio.h>

/*
*. Faça um programa que apresente o menu de opções a seguir:
Menu de opções:
1. Média aritmética
2. Média ponderada
3. Sair
Digite a opção desejada.
Na opção 1: receber duas notas, calcular e mostrar a média aritmética.
Na opção 2: receber três notas e seus respectivos pesos, calcular e mostrar a média ponderada.
Na opção 3: sair do programa.
*/
int main(){
    int entry = 0,opc;
    float num,s_num = 0;
    int qtd = 0;
    float peso = 0,s_peso=0;

    do{
        printf("\n    _____________________\n");
        printf("    1. Media Aritmetica\n");
        printf("    2. Media ponderada\n    3.Sair\n");
        printf("    _____________________\n");

        printf("Opcao: ");
        scanf("%d",&opc);

        switch (opc)
        {
        case 1:
            do
            {
                printf("Informe Numero ou 0 para finalizar:");
                scanf("%f",&num);
                s_num = s_num + num;
                qtd++;
            } while (num != 0);
            printf("Media Aritmetica:%f",s_num/qtd);
            break;
        case 2:
            num = 0;
            s_num = 0;
            qtd = 0;
            do
            {
                printf("Informe Numero ou 0 para finalizar:");
                scanf("%f",&num);
                printf("Informe Peso:");
                scanf("%f",&peso);
                s_num = s_num + num * peso;
                s_peso = s_peso + peso;
                qtd++;
            } while (num != 0);
            printf("Media Ponderada:%f",s_num/s_peso);
            break;

            break;
        default:
            break;
        }
    } while (opc != 3);
    

return(0);
}