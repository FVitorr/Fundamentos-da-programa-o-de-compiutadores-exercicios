#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que leia um número N que indica quantos valores inteiros e positivos devem ser
lidos a seguir. Para cada número lido, mostre uma tabela contendo o valor lido e o fatorial desse valor.
*/
int main(){
    int n,num;
    float fat; 
    
    printf("\nInforme N:");
    scanf("%d",&n);
    //Numeros de operaçoes é n
    for (int i = 1; i <= n; i++){
        //obter numero para fatorar
        printf("Informe um numero:");
        scanf("%d",&num);
        fat = 1.0;
        for (int f = 1; f <= num; f++){
            fat = fat * f;
        }
        printf("\nValor Lido: %d  Fatorial: %f\n",num,fat);
    }

return(0);
}