#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que leia um conjunto não determinado de valores e mostre o valor lido, seu quadrado, seu cubo e sua raiz quadrada. Finalize a entrada 
de dados com um valor negativo ou zero.
*/
int main(){
    float quad,cubo,raiz,num;
    printf("Informe um Numero:");
    scanf("%f",&num);

    while(num > 0){
        quad = pow(num,2);
        cubo = pow(num,3);
        raiz = pow(num,(1/2));

        printf("Quadrado : %f \nCubo: %f \nRaiz Quadrada: %f\n",quad,cubo,raiz);
         
        printf("Informe um Numero:");
        scanf("%f",&num);
    }
return(0);
}