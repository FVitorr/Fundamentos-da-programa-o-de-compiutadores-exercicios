
/*Fa�a um programa que leia o c�digo, a descri��o, o valor unit�rio e a quantidade em estoque dos 50 produtos
comercializados por uma papelaria. Essas informa��es devem ser armazenadas em um registro do tipo vetor
em ordem crescente de c�digo. Depois da leitura, o programa dever�:
- realizar uma rotina que permita alterar a descri��o, o valor unit�rio e a quantidade em estoque de
determinado produto, que dever� ser localizado por meio da informa��o de seu c�digo;
- realizar uma rotina que mostre todos os produtos cuja descri��o comece com determinada letra
(informada pelo usu�rio);
- mostrar todos os produtos com quantidade em estoque inferior a cinco unidades.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 5

/*CORRETOR: Como n�o vimos strings n�o vou pedir a descri��o do produto, e fiz algumas modifica��es no exerc�cio, Achei melhor inserir um menu
onde o usu�rio escolhe o que deseja fazer.*/
typedef struct{
    int codigo,qtd;
    float valor;
}info;

info alteracao(info *p, int a)
{
    int i,cod;

    printf("\nDigite o c�digo do produto: ");
    scanf ("%d%*c",&cod);
    for(i=0;i<tam;i++){
        if(p[i].codigo == cod){
           printf("Novo pre�o: ");
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
    setlocale(LC_ALL,"");//comando para acentua��o
    int i,j,k,opcao;
    info produtos[tam],auxiliar;

    printf("\nDigite as informa��es de cada produto\n");
    //entre as linhas 30 e 37 o programa recebe as informa��es de cada produto
    for(i=0;i<tam;i++){
        printf("\n%d� PRODUTO\n",i+1);
        printf("C�digo: ");
        scanf ("%d%*c",&produtos[i].codigo);
        printf("Quantidade: ");
        scanf ("%d%*c",&produtos[i].qtd);
        printf("Valor: ");
        scanf ("%f%*c",&produtos[i].valor);

        //entre as linhas 40 e 50 o programa ordena o vetor produtos em ordem crescente de c�digo
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
       printf("1 - Alterar informa��es do produto\n"
              "2 - Mostrar produtos com estoque inferior a 5 unidades\n"
              "3 - Mostrar produtos ap�s as altera��es\n"
              "4 - Encerrar o programa\n"
              "Op��o: ");
       scanf ("%d%*c",&opcao);
       if(opcao==4){
          break;
       }

       switch(opcao){

            case 1: alteracao(produtos,tam);//o programa chama a fun��o que permite alterar o pre�o e a quantidade do produto
                    break;

            case 2: estoque(produtos,tam);//o programa chama a fun��o que mostra os produtos com estoque inferior a 5 unidades
                    break;

            case 3: for(i=0;i<tam;i++){
                        printf("\n\n%d� PRODUTO\n",i+1);
                        printf("C�digo: %d\n",produtos[i].codigo);
                        printf("Quantidade em estoque: %d\n",produtos[i].qtd);
                        printf("Valor: %.2f\n",produtos[i].valor);
                    }
        }

    }while(opcao!=4);


    return 0;
}
