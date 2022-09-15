#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que receba o nome de cinco produtos e seus respectivos preços. Calcule e mostre:
■■ a quantidade de produtos com preço inferior a R$ 50,00;
■■ o nome dos produtos com preço entre R$ 50,00 e R$ 100,00;
■■ a média dos preços dos produtos com preço superior a R$ 100,00. 
*/
#define t 5
int main(){
    char n_prod[t][40];
    float precos[t],precos_med =0;
    int qtd_inf50 = 0,qtd_sup100 = 0;
    //preencher vetores
    for (int i = 0; i < t; i++) {
        printf("Nome do produto: ");
        setbuf(stdin, NULL); //Limpar buffer do teclado
        gets(n_prod[i]);
        printf("Preco do(a) %s: R$", n_prod[i]);
        scanf("%f", &precos[i]);
        printf("\n");

        if (precos[i] < 50){
            qtd_inf50++;
        }

        if (precos[i] > 100){
            qtd_sup100++;
            precos_med = precos_med + precos[i];
        }
    }
    printf("\n\nQuantidade de produtos com precos inferior a 50: %d",qtd_inf50);
    //o nome dos produtos com preço entre R$ 50,00 e R$ 100,00;
    printf("\nNome dos produtos (R$ 50,00 e R$ 100,00): ");
    for(int i = 0; i < t ;i++){
        if (precos[i] > 50 && precos[i] < 100){
            printf("\n  - %s",n_prod[i]);
        }
    }
    //a média dos preços dos produtos com preço superior a R$ 100,00. 
    float med = (precos_med / qtd_sup100);
    printf("\nMedia dos precos ( > R$ 100,00): %f",med);

return(0);
}