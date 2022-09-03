#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*
*
*/
int main(){
    int num_termos,x,expoente,num_fat;
    float potencia,s,fat;

    printf("+++++++++++++++++++++++++++++++++");
    printf("\nInforme o numero de termos:");
    scanf("%d",&num_termos);
    //laço for para o numero de entradas
    expoente = 2;
    s = 1.0;
    for (int i = 0 ; i< num_termos; i++){
        //obter valor de x
        printf("\nInforme X:");
        scanf("%d",&x);

        //exponente 
        expoente = expoente + i;
        //sinal
        float resto = i%2;
        if (resto == 0){
            potencia = pow(+x,expoente);
        }else{
            potencia = pow(-x,expoente);
        }
        //fatorial 
        num_fat = i + 1;
        fat = 1;
        for (int f=1 ; f <= num_fat; f++){
            fat = fat * f;
        }
        s = s * (potencia/fat);
    }
    printf("S = %f",s);

    return(0);
}