
/*A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre salário,
idade e número de filhos. Faça um programa que leia esses dados de 20 pessoas, calcule e mostre:
- a média de salário da população;
- a média do número de filhos;
- o maior salário;
- o percentual de mulheres com salário superior a R$ 1.000,00.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 20

typedef struct{
    int idade,filhos;
    char sexo;
    float salario;
}dados;

float media_sal(dados *habitantes, int a)//função que calcula a média do salário
{
    int i;
    float media,soma_sal=0;

    for(i=0;i<tam;i++){
        soma_sal+=habitantes[i].salario;//soma dos salários
    }
    media=soma_sal/tam;//cálculo da média do salário

    return media;
}

float media_filhos(dados *habitantes, int a)//função que calcula a média do número de filhos
{
    int i;
    float media,soma_filhos=0;

    for(i=0;i<tam;i++){
        soma_filhos+=habitantes[i].filhos;//soma do número de filhos
    }
    media=soma_filhos/tam;

    return media;
}

float maior_sal(dados *habitantes, int a)
{
    int i;
    float maior=0.0;

    for(i=0;i<tam;i++){
        if(habitantes[i].salario>maior){//verifica qual o maior salário
           maior=habitantes[i].salario;//recebe o maior salário
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
           qtd++;//quantidade de mulheres com salário superior a 1000 reais
        }
    }

    percentual=(qtd*100.0)/qtd_mulheres;//cálculo do percentual

    return percentual;
}

int main()
{
    setlocale(LC_ALL,"");//comando para acentuação
    int i;
    float media,maior_salario,percentual;
    dados habitantes[tam];

    printf("\t\t\tPESQUISA\n\n");
    printf("Insira os dados de cada habitante\n");
    for(i=0;i<tam;i++){
        printf("\n%dº HABITANTE\n",i+1);
        printf("Idade: ");
        scanf ("%d%*c",&habitantes[i].idade);
        printf("Número de filhos: ");
        scanf ("%d%*c",&habitantes[i].filhos);
        printf("Sexo"
               "\nF - feminino\n"
               "M - masculino\n"
               "Opção: ");
        scanf ("%c%*c",&habitantes[i].sexo);
        printf("Salário: ");
        scanf ("%f%*c",&habitantes[i].salario);
    }

    media=media_sal(habitantes,tam);//chamada da função que calcula a média
    printf("\n\nMédia de salário da população: %.2f\n",media);

    media=media_filhos(habitantes,tam);
    printf("Média do número de filhos da população: %.1f\n",media);

    maior_salario=maior_sal(habitantes,tam);
    printf("Maior salário inserido: %.2f\n",maior_salario);

    percentual=percent_mulheres(habitantes,tam);
    printf("Percentual de mulheres com salário superior a mil reais: %.1f%%\n\n",percentual);

    return 0;
}
