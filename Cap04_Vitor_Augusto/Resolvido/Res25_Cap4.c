/*Faça um programa que receba a medida de um ângulo em graus. Calcule e mostre o quadrante em que
se localiza esse ângulo. Considere os quadrantes da trigonometria e, para ângulos maiores que 360º ou
menores que −360º, reduzi-los, mostrando também o número de voltas e o sentido da volta (horário
ou anti-horário).*/


#include <stdlib.h>
#include <stdio.h>

int main(){
    float ang;
    int voltas,angl;

    printf("Informe um angulo: ");
    scanf("%f",&ang);

    if (ang > 360 || ang < -360){
        voltas = (int) ang / 360;
        ang =  (int) ang % 360;
    } else {
        voltas = 0;
    }
    if (ang == 0 || ang == 90 || ang == 180 || ang == 270 || ang == 360 || ang == -90 || ang == -180 || ang == -270 || ang == -360){
        printf("Angulo em cima de um dos eixos");
    }
    if ((ang > 0 && ang < 90) || (ang < -270 && ang > - 360)){
        printf("Primerio Quadrante");
    } else if ((ang > 90 && ang < 180) || (ang < -180 && ang > - 270)){
         printf("Segundo Quadrante");
    } else if ((ang > 180 && ang < 270) || (ang < -90 && ang > - 180)){
         printf("Terceiro Quadrante");
    } else if ((ang > 270 && ang < 360) || (ang < 0 && ang > - 90)){
         printf("Quarto Quadrante");
    }
    printf("\n%d volta(s) no sentido ",voltas);
    if (ang < 0){
        printf("Horario");
    }else {
        printf("Anti-Horario");
    }
    return(0);
}