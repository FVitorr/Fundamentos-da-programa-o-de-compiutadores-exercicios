
/*Foi realizada uma pesquisa sobre algumas características físicas de 50 habitantes de certa região. De cada
habitante foram coletados os seguintes dados: sexo, altura, idade e cor dos olhos (A – azuis; V – verdes; ou
C – castanhos).
Faça um programa que leia esses dados, armazene-os em um registro do tipo vetor e determine:
- a média de idade das pessoas com olhos castanhos e altura superior a 1,60 m;OK
- a maior idade entre os habitantes;OK
- a quantidade de indivíduos do sexo feminino com idade entre 20 e 45 anos (inclusive) ou que tenham
olhos verdes e altura inferior a 1,70 m;OK
- o percentual de homens.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 50

typedef struct{
    int idade;
    char sexo,cor_olhos;
    float altura;
}dados;

float media_idade(dados *c, int a)
{
    int i,soma_idade=0,qtd=0;
    float media;

    for(i=0;i<a;i++){
        if(c[i].cor_olhos=='C' && c[i].altura>1.6){
           soma_idade+=c[i].idade;//soma das idades
           qtd++;//cálculo da quantidade de pessoas
        }
    }

    media=soma_idade/qtd;//cálculo da média

    printf("\n\nMédia de idade das pessoas com olhos castanhos e altura superior a 1,60: %.1f\n\n",media);
}

int maior_idade(dados *c, int a)
{
    int i,maior=0;

    for(i=0;i<a;i++){
        if(c[i].idade>maior){//verifica qual a maior idade
           maior=c[i].idade;//recebe a maior idade
        }
    }

    printf("Maior idade entre os habitantes: %d\n\n",maior);
}

int quantidade(dados *c, int a)
{
    /*a quantidade de indivíduos do sexo feminino com idade entre 20 e 45 anos (inclusive) ou que tenham olhos verdes e altura inferior a 1,70 m;*/
    int qtd=0,i;

    for(i=0;i<a;i++){
        if((c[i].sexo=='F' && c[i].idade>20 && c[i].idade<=45) || (c[i].cor_olhos=='V' && c[i].altura<1.7)){
           qtd++;
        }
    }

    printf("Quantidade de mulheres com idade entre 20 e 45 anos(inclusive), ou que tenham\nolhos verdes e altura inferior a 1,70 m: %d\n\n",qtd);

}

float percent_homens(dados *c, int a)
{
    int i,qtd=0;
    float percentual;

    for(i=0;i<a;i++){
        if(c[i].sexo=='M'){
           qtd++;//calcula a quantidade de homens
        }
    }

    percentual=(qtd*100.0)/tam;

    printf("Percentual de homens: %.1f%%\n\n",percentual);


}

int main()
{
    setlocale(LC_ALL,"");//comando para acentuação
    int i;
    dados caracteristicas[tam];

    printf("\nDigite os dados coletados de cada habitante. Digite apenas letras maiúsculas.\n");
    for(i=0;i<tam;i++){//laço que preenche o vetor características
        printf("\n%dº HABITANTE\n",i+1);
        printf("Idade: ");
        scanf ("%d%*c",&caracteristicas[i].idade);
        printf("Sexo:"
               "\nF - Feminino"
               "\nM - Masculino"
               "\nOpção: ");
        scanf ("%c%*c",&caracteristicas[i].sexo);
        printf("Cor dos olhos:"
               "\nA - Azuis"
               "\nC - Castanhos"
               "\nV - Verdes"
               "\nOpção: ");
        scanf ("%c%*c",&caracteristicas[i].cor_olhos);
        printf("Altura: ");
        scanf ("%f%*c",&caracteristicas[i].altura);
    }

    media_idade(caracteristicas,tam);//chamada da função que calcula a média de idade
    maior_idade(caracteristicas,tam);//chamada da função que encontra a maior idade inserida
    quantidade(caracteristicas,tam);//chamada da função que calcula a quantidade de mulheres com idade entre 20 e 45 anos (inclusive) ou que tenham olhos verdes e altura inferior a 1,70 m;
    percent_homens(caracteristicas,tam);//chamada da função que calcula o percentual de homens

    return 0;
}
