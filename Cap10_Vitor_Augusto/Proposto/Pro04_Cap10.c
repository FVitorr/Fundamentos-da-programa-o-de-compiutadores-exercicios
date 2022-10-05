
/*Foi realizada uma pesquisa entre 20 habitantes de uma cidade. De cada habitante foram coletados estes dados:
idade, sexo, renda familiar e número de filhos. Faça um programa que leia esses dados, armazenando-os em
um vetor, calcule e mostre a média de salário entre os habitantes, a menor e a maior idade do grupo e a quantidade
de mulheres com mais de dois filhos e com renda familiar inferior a R$ 600,00.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 20

typedef struct{
    int idade,num_filhos;
    char sexo;
    float renda;
}dados;

int main()
{
    setlocale(LC_ALL,"");//comando para acentuação
    int i,maior=0,menor,qtd_mulheres=0;
    dados habitantes[tam];
    float soma_sal=0,media_sal;

    //entre as linhas 27 e 39 o programa recebe os dados
    printf("\nDigite os dados coletados de cada habitante.\n");
    for(i=0;i<tam;i++){
        printf("\n%dº HABITANTE\n",i+1);
        printf("Idade: ");
        scanf ("%d%*c",&habitantes[i].idade);
        printf("Número de filhos: ");
        scanf ("%d%*c",&habitantes[i].num_filhos);
        printf("Sexo - Use letra maiúscula:\n"
               "F - Feminino\n"
               "M - Masculino\n"
               "Opção: ");
        scanf ("%c%*c",&habitantes[i].sexo);
        printf("Renda familiar: ");
        scanf ("%f%*c",&habitantes[i].renda);

        soma_sal+=habitantes[i].renda;//soma dos salários

        if(i==0){
           menor=habitantes[i].idade;//preenche a variável menor com a primeira idade inserida
        }
    }

    media_sal=soma_sal/tam;//cálculo da média

    //entre as linhas 52 e 60 o programa pega a maior e a menor idade inserida
    for(i=0;i<tam;i++){
        if(habitantes[i].idade>maior){
           maior=habitantes[i].idade;
        }else{
             if(habitantes[i].idade<menor){
                menor=habitantes[i].idade;
             }
        }
    }

    //entre as linhas 63 e 68 o programa calcula a quantidade de mulheres com mais de dois filhos e com renda familiar inferior a R$ 600,00
    for(i=0;i<tam;i++){
        if(habitantes[i].sexo=='F' && habitantes[i].num_filhos>2 && habitantes[i].renda<600){
            qtd_mulheres++;
        }
    }

    printf("\n\nMédia dos salários: %.2f reais\n",media_sal);
    printf("Maior idade inserida: %d\n",maior);
    printf("Menor idade inserida: %d\n",menor);
    printf("Quantidade de mulheres com mais de dois filhos e renda inferior a R$600,00: %d\n\n",qtd_mulheres);

    return 0;
}
