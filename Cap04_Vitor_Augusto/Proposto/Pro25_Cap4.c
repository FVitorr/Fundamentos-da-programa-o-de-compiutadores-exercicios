/*Uma empresa decidiu dar uma gratificação de Natal a seus funcionários, baseada no número de horas
extras e no número de horas que o funcionário faltou ao trabalho. O valor do prêmio é obtido pela consulta à tabela que se segue, na qual:
H = número de horas extras – (2/3 * (número de horas falta))*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float  hr_extra,hr_falta,h,premio;

    //obter número de horas extras e no número de horas que o funcionário faltou ao trabalho
    printf("Informe o numero de horas extras: ");
    scanf("%f",&hr_extra);
    printf("Informe o numero de horas que houve faltas: ");
    scanf("%f",&hr_falta);

    //O valor do prêmio
    h = hr_extra  - (2/3 * hr_falta);
    if (h >= 2400){ // 500 reais
        premio = 500;
    }else if (h > 1800 && h < 2400){ //400 reais
        premio = 400;
    }else if (h >= 1200 && h < 1800){ //300 reais
        premio = 300;
    }else if (h >= 600 && h < 1200){ //200 reais
        premio = 200;
    }else{ // 100 reais
       premio = 100;
    }
    printf("Valor do Premio: R$ %f",premio);
    return(0);
}