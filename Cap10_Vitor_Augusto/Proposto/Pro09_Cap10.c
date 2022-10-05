
/*Um funcionário recebe um salário fixo mais 6% de comissão sobre suas vendas. Crie um algoritmo que leia
o salário do funcionário, o valor total de suas vendas, calcule a comissão e o salário final. O programa deverá
mostrar todos os valores calculados.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct{
    float salario,total_vendas;
}info;

int main()
{
    setlocale(LC_ALL,"");//comando para acentuação
    info dados_funcionario;
    float comissao, salario_fin;

    printf("\t\t\t\CALCULADORA SALÁRIO\n\n");
    printf("Digite o salário do funcionário: ");
    scanf ("%f%*c",&dados_funcionario.salario);//recebe o salário
    printf("Digite o valor total das vendas desse funcionário: ");
    scanf ("%f%*c",&dados_funcionario.total_vendas);//recebe o total de vendas

    comissao=(6.0*dados_funcionario.total_vendas)/100.0;//calcula a comissão a ser recebida
    printf("\n\nValor da comissão a ser recebida: %.2f reais\n",comissao);

    salario_fin=dados_funcionario.salario+comissao;//calcula o salário final a ser recebido
    printf("Valor do salário final a ser recebido: %.2f reais\n\n",salario_fin);

    return 0;
}
