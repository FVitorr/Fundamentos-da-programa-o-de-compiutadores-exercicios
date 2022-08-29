/*. Uma pessoa deseja pregar um quadro em uma parede. Faça um programa 
para calcular e mostrar a
que distância a escada deve estar da parede. A pessoa deve fornecer o 
tamanho da escada e a altura em
que deseja pregar o quadro.
Lembre-se de que o tamanho da escada deve ser maior que a altura que se deseja alcançar.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float dist_p,tam_e,alt_q;
    //Obter tamanho escada e altura quadro 
    printf("\n\nInforme o tamanho da Escada (m): ");
    scanf("%f",&tam_e);
    printf("\nAltura do quadro (m): ");
    scanf("%f",&alt_q);
    //Calculo é h^2 = c^2 + c^2  h = Tamanho escada c = altura quadro  solução do problemar quer a dist_p(distancia da parede)
    //Isolado dist_p = (- alt_q ^ 2 + tam_e ^ 2)^(1/2)

    dist_p = sqrtf(powf(tam_e,2) - powf(alt_q,2));

    printf("\nA distancia entre a parede e a escada e de %f m\n",dist_p);

    return(0);
}
