#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que leia um vetor A de dez posições contendo números inteiros. Determine e mostre,
a seguir, quais elementos de A estão repetidos e quantas vezes cada um se repete.
*/
#define t 4
int main(){
    int a[t],a_r[t],qtd_r[t];
    int qtd_i = 1;
    //preencher o vetor
    int cont = 0;
    while (cont<t)
    {
        printf("Informe um Numero: ");
        scanf("%d",&a[cont]);   
        cont++;
    }
    int controle = 0;
    for (int i = 0;i<t;i++){
        //sepaarar um numero
        int num_s = a[i];
        //printf("\n%d\n",num_s); okay
        //verificar se existe outro numero igual
        qtd_i = 0;
        for (int j = i; j<t;j++){
            int num_p = a[j];
            //printf("\n%d\n",num_p);
            if (num_p == num_s){
                qtd_i = qtd_i + 1; //qtd repetida
            }
        }
        if (qtd_i > 1){
            a_r[controle] = num_s; //guarda o numero repetido
            qtd_r[controle] = qtd_i; // guarda qtd repetida
            //printf("\n%d\n",qtd_r[0]);
            //printf("\n%d\n",a_r[0]);
            controle++;
        }
    }
    //printf("\n%d\n",qtd_r[0]);
    //printf("\n%d\n",a_r[0]);
    //mostrar saida 
    // sem os repetidos de a_r e qtd_r
    for (int i = 0; i < controle; i++){
            printf("\nO numero %d aparece %d x;",a_r[i],qtd_r[i]);
        
    }

    
    /*
    cont = 0;
    while(cont < t){
        int num_s = a[cont];
        //printf("\n%d\n",num_s);
        qtd_r = 0;
        for (int elements = cont + 1; elements < t; elements ++ ){
            //printf("\n%d\n",elements);
            if (num_s == a[elements]){ //Numero repetido
                qtd_r = qtd_r + 1; // saber a quantidade que tem
                //printf("\n%d\n",qtd_r);
            }
        }
        printf("\n%d\n",qtd_r);
        if (qtd_r > 1){
            a_r[i] = num_s;
            qtd_re[i] = qtd_r;
            i = i + 1;
            r++;
            printf("\n%d\n",qtd_r);
        }
        //printf("\n%d\n",i);
        cont++;
    }
    //mostrar saida 
    printf("\n%d\n",r);
    for (int j = 0; j < i; j++){
        printf("\nO numero %d aparece %d x;",a_r[j],qtd_re[j]);
    }*/
return(0);
}