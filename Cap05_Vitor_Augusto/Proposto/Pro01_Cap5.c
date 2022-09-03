#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que leia cinco grupos de quatro valores (A, B, C, D) 
e mostre-os na ordem lida. Em seguida, organize-os em ordem crescente e decrescente.
*/
int main(){
    int a,b,c,d,qtd = 1;

    int num_menor = 0,num_maior = 0,num_ord1 = 0,num_ord2 = 0,tpm;

    while (qtd <= 5){
        printf("\nInforme um Numero:");
        scanf("%d",&a);

        num_maior = a;
        num_menor = a;

        printf("\nInforme um Numero:");
        scanf("%d",&b);

        if (num_maior < b){
            num_maior = b;
        }
        if (num_menor > b){
            num_menor = b ;
        }
            
        printf("Informe um Numero:");
        scanf("%d",&c);

        if (num_maior < c){
            num_maior = c;
        }
        if (num_menor > c){
            num_menor = c;
        }       

        printf("Informe um Numero:");
        scanf("%d",&d);

        if (num_maior < d){
            num_maior = d;
        }
        if (num_menor > d){
            num_menor = d;
        }
        
        /*
        printf("Numero Maior: %d\n",num_maior);
        printf("Numero Menor: %d\n",num_menor);*/

        //ordem crescente e decrescente 
        tpm = 0;
        for (int i = num_menor + 1; i < num_maior; i++){
            if (i == a || i == b || i == c || i == d){
                if (tpm == 0){
                    num_ord1 = i;
                    tpm = 1;
                    //printf ("\nNumOrd1 %d",num_ord1);
                }else {
                    num_ord2 = i;
                    //printf ("\nNumOrd2 %d",num_ord2);
                }
            }
        }
        printf("\nOrdem lida:\n\n %d, %d, %d, %d \n",a,b,c,d);
        printf("\nOrdem Cresscente:\n\n %d, %d, %d, %d \n",num_menor,num_ord1,num_ord2,num_maior);
        printf("\nOrdem Decrescente:\n\n %d, %d, %d, %d \n",num_maior,num_ord2,num_ord1,num_menor);
        printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    }

return(0);
}