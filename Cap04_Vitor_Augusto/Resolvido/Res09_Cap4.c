#include <stdio.h>
#include <stdlib.h>

/*
 * . Faça um programa que mostre a data e a hora do sistema nos seguintes formatos: DD/MM/AAAA –
mês por extenso e hora:minuto.
 */
int main(int argc, char** argv) {
    int dia,mes,ano,hora,mm;
    char _mes;
    
    //Obter entradas
    printf("\nInforme o Dia:");
    scanf("%d",&dia);
    printf("\nInforme o Mês:");
    scanf("%d",&mes);
    printf("\nInforme o Ano:");
    scanf("%d",&ano);
    printf("\nInforme a Hora:");
    scanf("%d",&hora);
    printf("\nInforme os Minutos:");
    scanf("%d",&hora);
    
    ///definir mes
    switch(mes){
        case(1):
            _mes = 'Janeiro';
            break;
        case(2):
            _mes = 'Fevereiro';
            break;
        case(3):
            _mes = 'Março';
            break;
        case(4):
            _mes = 'Abril';
            break;
        case(5):
            _mes = 'Maio';
            break;
        case(6):
            _mes = 'Junho';
            break;
        case(7):
            _mes = 'Julho';
            break;
        case(8):
            _mes = 'Agosto';
            break;
        case(9):
            _mes = 'Setembro';
            break;
        case(10):
            _mes = 'Outubro';
            break;
        case(11):
            _mes = 'Novembro';
            break;
        case(12):
            _mes = 'Dezembro';
            break;
        default:
            break;
    }
    
    //mostrar saida 
    if (_mes == NULL){
        printf("\nValores Informados sao Invalidos");
    }else{
        printf("\nData Atual: %d / %s / %d",dia,_mes,ano);
        printf("\n%d : %d",hora,mm);
    }

    return (EXIT_SUCCESS);
}

