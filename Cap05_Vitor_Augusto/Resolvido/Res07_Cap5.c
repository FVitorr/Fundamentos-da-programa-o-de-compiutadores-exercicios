#include <stdlib.h>
#include <stdio.h>

/*
* * . Faça um programa que monte os oito primeiros termos da sequência de Fibonacci
 */

int main(int argc, char** argv) {
    int cont,num1=0,num2=1,res;
    
    printf("%d\n%d\n",num1,num2);
    for (cont = 3 ; cont <= 8; cont++){
        res = num1 + num2;
        printf("%d\n",res);
        num1 = num2;
        num2 = res;
    }    
    
    return (EXIT_SUCCESS);
}