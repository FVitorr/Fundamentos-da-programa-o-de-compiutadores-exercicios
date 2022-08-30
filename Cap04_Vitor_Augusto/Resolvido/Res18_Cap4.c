/*. Dados três valores X, Y e Z, verifique se eles podem ser os comprimentos dos lados de um triângulo
e, se forem, verifique se é um triângulo equilátero, isósceles ou escaleno. Se eles não formarem um
triângulo, escreva uma mensagem. Considere que:
■■ o comprimento de cada lado de um triângulo é menor que a soma dos outros dois lados;
■■ chama-se equilátero o triângulo que tem três lados iguais;
■■ denomina-se isósceles o triângulo que tem o comprimento de dois lados iguais;
■■ recebe o nome de escaleno o triângulo que tem os três lados diferentes. */

#include <stdlib.h>
#include <stdio.h>

int main(){
    float x, y, z;
    //Obter entradas
    printf("\n+++++++++++++++++++++++++\n");
    printf("Informe o valor de x: ");
    scanf("%f",&x);
    printf("Informe o valor de y: ");
    scanf("%f",&y);
    printf("Informe o valor de z: ");
    scanf("%f",&z);

    //o comprimento de cada lado de um triângulo é menor que a soma dos outros dois lados;
    if ( x < z + y && z < x + y && y < x + z){ // testa se o triangulo existe
        //equillatero todos os lados iguais 
        if (x == y && x == z){
            printf("\n + Triangulo Equilatero\n");
        } else if (x == y || x == z || y == z) {// isosceles = 2 lados iguais
            printf("\n + Triangulo Isosceles\n");
        } else if ( x != y && x != z && y != z){ // todos os lados diferentes = esccaleno
            printf("\n + Triangulo Escaleno\n");
        }
    } else {
        printf("As medidas informadas não formam um Triangulo");
    }
    printf("\n+++++++++++++++++++++++++\n");
    return(0);
}