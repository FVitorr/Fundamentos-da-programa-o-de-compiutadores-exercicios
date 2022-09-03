#include <stdlib.h>
#include <stdio.h>

/*
*. Faça um programa que receba dez números inteiros e mostre a quantidade de números primos dentre os
números que foram digitados.
*/
int main(){
    int resto = 0, i=0,num,num_primo = 0;
    
    while(i < 10){
        printf("Informe um numero:");
        scanf("%d",&num);

        resto = 0;
        for (int i = 1 ; i <= num;i++){
            if (num % i == 0){ 
                resto = resto + 1;
            }
        }if (resto == 2){ 
            num_primo = num_primo + 1;
        }
        i++;
    }
    printf("Quantidade de Numeros primos digitados: %d",num_primo);

return(0);
}