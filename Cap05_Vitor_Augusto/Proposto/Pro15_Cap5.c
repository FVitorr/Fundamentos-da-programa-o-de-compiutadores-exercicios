#include <stdlib.h>
#include <stdio.h>

/*
*Uma empresa fez uma pesquisa de mercado para saber se as pessoas gostaram ou não de um novo produto lançado
. Para isso, forneceu o sexo do entrevistado e sua resposta (S — sim; ou N — não). Sabe-se
que foram entrevistadas dez pessoas. Faça um programa que calcule e mostre:
■■ o número de pessoas que responderam sim;
■■ o número de pessoas que responderam não;
■■ o número de mulheres que responderam sim; e
■■ a percentagem de homens que responderam não, entre todos os homens analisados. 
*/

int main() {

    int i, contSIM, contNAO, contMS, contHN, contHOMEM;
    float porcentagem;

    char opcao, sexo;

    contHN = 0;
    contMS = 0;
    contSIM = 0;
    contNAO = 0;

    for (i = 1; i <= 10; i++) {
        printf("%dº Pessoa \n", i);
        printf("Digite seu sexo (M. Masculino | F. Feminino): ");
        scanf(" %c", &sexo);
        printf("Você gostou do produto(S. Sim | N. Não): ");
        scanf(" %c", &opcao);
        printf("\n");

        //Contabilizar as opções SIM e NAO
        if (opcao == 'S' || opcao == 's') {
            contSIM++;
        } else if (opcao == 'N'|| opcao == 'n') {
            contNAO++;
        }

        //Contador de homens
        if (sexo == 'M' || sexo == 'm') {
            contHOMEM++;
            if (opcao == 'N') {
                contHN++;
            }
        }
        
        //Contador de mulheres
        if ((sexo == 'F' || sexo == 'f') && (opcao == 'S' || opcao == 's')) {
            contMS++;
        }
    }

    porcentagem = contHN * 100 / contHOMEM;

    printf("DADOS FINAIS \n");
    printf("    Total de pessoas que responderam sim: %d \n", contSIM);
    printf("    Total de pessoas que responderam não: %d \n", contNAO);
    printf("    Total de mulheres que responderam sim: %d \n", contMS);
    printf("    Porcentagem de homens que responderam não: %.1f \n", porcentagem);

    return (0);
}