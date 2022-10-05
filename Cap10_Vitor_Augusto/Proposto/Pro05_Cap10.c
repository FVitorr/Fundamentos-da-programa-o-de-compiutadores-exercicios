
/*Faça um programa que leia o código, a descrição, o valor unitário e a quantidade em estoque dos 50 produtos
comercializados por uma papelaria. Essas informações devem ser armazenadas em um registro do tipo vetor
em ordem crescente de código. Depois da leitura, o programa deverá:
- realizar uma rotina que permita alterar a descrição, o valor unitário e a quantidade em estoque de
determinado produto, que deverá ser localizado por meio da informação de seu código;
- realizar uma rotina que mostre todos os produtos cuja descrição comece com determinada letra
(informada pelo usuário);
- mostrar todos os produtos com quantidade em estoque inferior a cinco unidades.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 5

/*CORRETOR: Como não vimos strings não vou pedir a descrição do produto, e fiz algumas modificações no exercício, Achei melhor inserir um menu
onde o usuário escolhe o que deseja fazer.*/
typedef struct{
    int codigo,qtd;
    float valor;
}info;

info alteracao(info *p, int a)
{
    int i,cod;

    printf("\nDigite o código do produto: ");
    scanf ("%d%*c",&cod);
    for(i=0;i<tam;i++){
        if(p[i].codigo == cod){
           printf("Novo preço: ");
           scanf ("%f%*c",&p[i].valor);
           printf("Novo estoque: ");
           scanf ("%d%*c",&p[i].qtd);
        }
    }
}

info estoque(info *p, int a)
{
    int i;

    printf("\nProdutos com menos de 5 unidades em estoque:");
    for(i=0;i<tam;i++){
        if(p[i].qtd<5){
           printf("\n%d",p[i].codigo);
        }
    }
}

int main()
{
    setlocale(LC_ALL,"");//comando para acentuação
    int i,j,k,opcao;
    info produtos[tam],auxiliar;

    printf("\nDigite as informações de cada produto\n");
    //entre as linhas 30 e 37 o programa recebe as informações de cada produto
    for(i=0;i<tam;i++){
        printf("\n%dº PRODUTO\n",i+1);
        printf("Código: ");
        scanf ("%d%*c",&produtos[i].codigo);
        printf("Quantidade: ");
        scanf ("%d%*c",&produtos[i].qtd);
        printf("Valor: ");
        scanf ("%f%*c",&produtos[i].valor);

        //entre as linhas 40 e 50 o programa ordena o vetor produtos em ordem crescente de código
        if(i>=1){
           for(k=0;k<i+1;k++){
               for(j=0;j<k+1;j++){
                   if(produtos[k].codigo<produtos[j].codigo){
                      auxiliar=produtos[j];
                      produtos[j]=produtos[k];
                      produtos[k]=auxiliar;
                   }
               }//chave for(j=0;j<k+1;j++)
           }//chave for(k=0;k<i+1;k++)
        }//chave if(i>=1)
    }

    do{
       printf("\n\nMENU\n");
       printf("1 - Alterar informações do produto\n"
              "2 - Mostrar produtos com estoque inferior a 5 unidades\n"
              "3 - Mostrar produtos após as alterações\n"
              "4 - Encerrar o programa\n"
              "Opção: ");
       scanf ("%d%*c",&opcao);
       if(opcao==4){
          break;
       }

       switch(opcao){

            case 1: alteracao(produtos,tam);//o programa chama a função que permite alterar o preço e a quantidade do produto
                    break;

            case 2: estoque(produtos,tam);//o programa chama a função que mostra os produtos com estoque inferior a 5 unidades
                    break;

            case 3: for(i=0;i<tam;i++){
                        printf("\n\n%dº PRODUTO\n",i+1);
                        printf("Código: %d\n",produtos[i].codigo);
                        printf("Quantidade em estoque: %d\n",produtos[i].qtd);
                        printf("Valor: %.2f\n",produtos[i].valor);
                    }
        }

    }while(opcao!=4);


    return 0;
}
