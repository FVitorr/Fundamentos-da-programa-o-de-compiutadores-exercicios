#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa para ler o código, o sexo (M — masculino; F — feminino) e o número de horas/
aula dadas mensalmente pelos professores de uma universidade, sabendo-se que cada hora/aula vale
R$ 30,00. Emita uma listagem contendo o código, o salário bruto e o salário líquido (levando em
consideração os descontos explicados a seguir) de todos os professores. Mostre também a média dos
salários líquidos dos professores do sexo masculino e a média dos salários líquidos dos professores do
sexo feminino. Considere:
■■ desconto para homens, 10%, e, para mulheres, 5%;
■■ as informações terminarão quando for lido o código = 99999. 
*/

int main() {
    char sexo;
    int quant_horas, sair, contM, contF;

    float sal_bruto, sal_liquidoM, sal_liquidoF, total_M, total_F;
    float media_masculino, media_feminino, media_total;

    total_F = 0;
    total_M = 0;

    contF = 0;
    contM = 0;

    printf("CALCULO DE SALÁRIO \n\n");

    do {
        printf("Digite seu sexo (M. Masculino | F. Feminino): ");
        scanf(" %c", &sexo);
        printf("\n");
        printf("Digite o numero de horas/aula mensalsamente:  ");
        scanf("%d", &quant_horas);
        sal_bruto = quant_horas * 30;

        switch (sexo) {
            case 'M':
                sal_liquidoM = sal_bruto - (sal_bruto * 0.1);
                printf("Salario bruto: R$ %.2f. \n", sal_bruto);
                printf("Salario liquido: R$ %.2f. \n\n", sal_liquidoM);
                contM++;
                break;

            case 'F':
                sal_liquidoF = sal_bruto - (sal_bruto * 0.05);
                printf("Salario bruto: R$ %.2f. \n", sal_bruto);
                printf("Salario liquido: R$ %.2f. \n\n", sal_liquidoF);
                contF++;
                break;

        }

        total_F = total_F + sal_liquidoF;
        total_M = total_M + sal_liquidoM;

        printf("Digite qualquer numero para continuar ou 000 para encerrar: ");
        scanf("%d", &sair);
        printf("------------------------------------------------------\n\n");
    } while (sair != 000);

    //Condicionais sexo masculino
    if (contM == 0) {
        printf("Nenhum professor do sexo masculino. \n");
    } else {
        printf("Media dos salario dos professores masculinos: R$ %.2f. \n", total_M / contM);
    }

    //Condicionais sexo feminino
    if (contF == 0) {
        printf("Nenhum professora do sexo feminino. \n");
    } else {
        printf("Media dos salarios das professoras: R$ %.2f. \n\n",total_F / contF);
    }


    return (EXIT_SUCCESS);
}