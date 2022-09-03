#include <stdlib.h>
#include <stdio.h>

/*
*Uma empresa possui dez funcionários com as seguintes características: código, número de horas trabalhadas no mês, 
turno de trabalho (M — matutino; V — vespertino; ou N — noturno), categoria (O —
operário; ou G — gerente), valor da hora trabalhada. Sabendo-se que essa empresa deseja informatizar
sua folha de pagamento, faça um programa que:
a) Leia as informações dos funcionários, exceto o valor da hora trabalhada, não permitindo que sejam informados turnos e nem categorias inexistentes. Trabalhe sempre com a digitação de letras maiúsculas.
b) Calcule o valor da hora trabalhada, conforme a tabela a seguir. Adote o valor de R$ 450,00 para o salário
mínimo. 
*/
int main(){
    //declarar variaveis
    //turno de trabalho (M — matutino; V — vespertino; ou N — noturno)
    //categoria (O — operário; ou G — gerente)
    int codigo;
    float nHora_trab,slr_min = 450,vlr_hora,slr_init,vlr_ax_alim;
    char turno,categoria;
    //obter valores
    for (int i=1;i<11;i++){
        printf("\n++++++++++++++++++++++++++++++++++++++++++\n");
        printf("Informe seu codigo:");
        scanf("%d",&codigo);
        printf("Informe o Numero de Horas Trabalhadas no Mes: ");
        scanf("%f",&nHora_trab);
         //OBTER turnos VALIDADOS
        while(turno != 'M' && turno != 'V' && turno != 'N'){
            printf("\nValor Validos: (M - matutino; V - vespertino; ou N - noturno)\n");
            printf("Informe seu turno:");
            scanf("\n%c",&turno);
        }
        //OBTER CATEGORIA VALIDADOS
        while(categoria != 'O' && categoria != 'G'){
            printf("\nValor Validos: (O - operario; ou G - gerente)\n");
            printf("Informe sua categoria:");
            scanf("\n%c",&categoria);
        }
        //b) Calcule o valor da hora trabalhada, conforme a tabela a seguir. Adote o valor de R$ 450,00 para o salário mínimo. 
        if (categoria == 'G'){
            if (turno == 'N'){
                vlr_hora = 0.18 * slr_min;
            }
            else {
                vlr_hora = 0.15 * slr_min;
            }
        }else {
            if (turno == 'N'){
                vlr_hora = 0.13 * slr_min;
            }
            else {
                vlr_hora = 0.10 * slr_min;
            }
        }
        //Calcule o salário inicial dos funcionários com base no valor da hora trabalhada e no número de horas trabalhadas.
        slr_init = vlr_hora * nHora_trab;
        // Calcule o valor do auxílio alimentação recebido pelo funcionário de acordo com seu salário inicial, conforme a tabela a seguir. 
        if (slr_init <= 300){
            vlr_ax_alim = 0.20 * slr_init;
        }else if (slr_init > 300 && slr_init <= 600){
            vlr_ax_alim = 0.15  * slr_init;
        }else if (slr_init > 600){
            vlr_ax_alim = 0.05  * slr_init;
        }
        //Mostre o código, número de horas trabalhadas, valor da hora trabalhada, salário inicial, auxílio alimentação
        //e salário final (salário inicial + auxílio alimentação).
        printf("Codigo: %d\nNumeros de Horas Trabalhada: %f\nValor da hora trabalhada: %f\nAuxilio Alimentacao: %f\n\n",codigo,nHora_trab,vlr_hora,slr_init,vlr_ax_alim,slr_init + vlr_ax_alim);
        printf("\n++++++++++++++++++++++++++++++++++++++++++\n");
    }
return(0);
}