
/*A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre sal�rio,
idade e n�mero de filhos. Fa�a um programa que leia esses dados de 20 pessoas, calcule e mostre:
- a m�dia de sal�rio da popula��o;
- a m�dia do n�mero de filhos;
- o maior sal�rio;
- o percentual de mulheres com sal�rio superior a R$ 1.000,00.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 20

typedef struct{
    int idade,filhos;
    char sexo;
    float salario;
}dados;

float media_sal(dados *habitantes, int a)//fun��o que calcula a m�dia do sal�rio
{
    int i;
    float media,soma_sal=0;

    for(i=0;i<tam;i++){
        soma_sal+=habitantes[i].salario;//soma dos sal�rios
    }
    media=soma_sal/tam;//c�lculo da m�dia do sal�rio

    return media;
}

float media_filhos(dados *habitantes, int a)//fun��o que calcula a m�dia do n�mero de filhos
{
    int i;
    float media,soma_filhos=0;

    for(i=0;i<tam;i++){
        soma_filhos+=habitantes[i].filhos;//soma do n�mero de filhos
    }
    media=soma_filhos/tam;

    return media;
}

float maior_sal(dados *habitantes, int a)
{
    int i;
    float maior=0.0;

    for(i=0;i<tam;i++){
        if(habitantes[i].salario>maior){//verifica qual o maior sal�rio
           maior=habitantes[i].salario;//recebe o maior sal�rio
        }
    }
    return maior;
}

float percent_mulheres(dados *habitantes, int a)
{
    int i,qtd=0,qtd_mulheres=0;
    float percentual;

    for(i=0;i<tam;i++){

        if(habitantes[i].sexo=='F'){
           qtd_mulheres++;//quantidade de mulheres entrevistadas
        }

        if(habitantes[i].sexo=='F' && habitantes[i].salario>1000){
           qtd++;//quantidade de mulheres com sal�rio superior a 1000 reais
        }
    }

    percentual=(qtd*100.0)/qtd_mulheres;//c�lculo do percentual

    return percentual;
}

int main()
{
    setlocale(LC_ALL,"");//comando para acentua��o
    int i;
    float media,maior_salario,percentual;
    dados habitantes[tam];

    printf("\t\t\tPESQUISA\n\n");
    printf("Insira os dados de cada habitante\n");
    for(i=0;i<tam;i++){
        printf("\n%d� HABITANTE\n",i+1);
        printf("Idade: ");
        scanf ("%d%*c",&habitantes[i].idade);
        printf("N�mero de filhos: ");
        scanf ("%d%*c",&habitantes[i].filhos);
        printf("Sexo"
               "\nF - feminino\n"
               "M - masculino\n"
               "Op��o: ");
        scanf ("%c%*c",&habitantes[i].sexo);
        printf("Sal�rio: ");
        scanf ("%f%*c",&habitantes[i].salario);
    }

    media=media_sal(habitantes,tam);//chamada da fun��o que calcula a m�dia
    printf("\n\nM�dia de sal�rio da popula��o: %.2f\n",media);

    media=media_filhos(habitantes,tam);
    printf("M�dia do n�mero de filhos da popula��o: %.1f\n",media);

    maior_salario=maior_sal(habitantes,tam);
    printf("Maior sal�rio inserido: %.2f\n",maior_salario);

    percentual=percent_mulheres(habitantes,tam);
    printf("Percentual de mulheres com sal�rio superior a mil reais: %.1f%%\n\n",percentual);

    return 0;
}
