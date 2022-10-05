
/*Um funcion�rio recebe um sal�rio fixo mais 6% de comiss�o sobre suas vendas. Crie um algoritmo que leia
o sal�rio do funcion�rio, o valor total de suas vendas, calcule a comiss�o e o sal�rio final. O programa dever�
mostrar todos os valores calculados.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct{
    float salario,total_vendas;
}info;

int main()
{
    setlocale(LC_ALL,"");//comando para acentua��o
    info dados_funcionario;
    float comissao, salario_fin;

    printf("\t\t\t\CALCULADORA SAL�RIO\n\n");
    printf("Digite o sal�rio do funcion�rio: ");
    scanf ("%f%*c",&dados_funcionario.salario);//recebe o sal�rio
    printf("Digite o valor total das vendas desse funcion�rio: ");
    scanf ("%f%*c",&dados_funcionario.total_vendas);//recebe o total de vendas

    comissao=(6.0*dados_funcionario.total_vendas)/100.0;//calcula a comiss�o a ser recebida
    printf("\n\nValor da comiss�o a ser recebida: %.2f reais\n",comissao);

    salario_fin=dados_funcionario.salario+comissao;//calcula o sal�rio final a ser recebido
    printf("Valor do sal�rio final a ser recebido: %.2f reais\n\n",salario_fin);

    return 0;
}
