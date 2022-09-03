#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que mostre as tabuadas dos números de 1 a 10. 
*/
int main(){
    printf("+++++++++ Tabuadas ++++++++++");
    int contador;

    for (contador = 1; contador <= 10; contador++){
        printf("\n++++++ %d ++++++\n",contador);
        for (int mult = 0; mult <= 10; mult++){
            printf("\n%d * %d = %d",contador,mult,contador * mult);
        } 
    }

return(0);
}