#include <stdlib.h>
#include <stdio.h>

/*
*Uma empresa decidiu fazer um levantamento em relação aos candidatos que se apresentarem para
preenchimento de vagas em seu quadro de funcionários. Supondo que você seja o programador dessa
empresa, faça um programa que leia, para cada candidato, a idade, o sexo (M ou F) e a experiência no
serviço (S ou N). Para encerrar a entrada de dados, digite zero para a idade.
O programa também deve calcular e mostrar:
■■ o número de candidatos do sexo feminino;
■■ o número de candidatos do sexo masculino;
■■ a idade média dos homens que já têm experiência no serviço;
■■ a porcentagem dos homens com mais de 45 anos entre o total dos homens;
■■ o número de mulheres com idade inferior a 21 anos e com experiência no serviço;
■■ a menor idade entre as mulheres que já têm experiência no serviço. 
*/
#include <stdio.h>
#include <stdlib.h>

int main() {

    int num, soma, verificar_par, maior_num, menor_num, sair;
    int i, cont_impar, cont_par; //Contadores

    soma = 0;
    i = 0;
    maior_num = 1;
    menor_num = 999999999;

    float media, media_pares, soma_pares, per_impar;

    do {
        printf("\nDigite um numeo: ");
        scanf("%d", &num);

        soma = soma + num;
        verificar_par = num % 2;

/*Verificar se número digitado é par ou impar para poder calcular a medie a porcentagem. */
        if (verificar_par == 0) {
            soma_pares = soma_pares + num;
            cont_par++;
        } else {
            cont_impar++;
        }


//Verificar maior e menor número.
        if (num > maior_num) {
            maior_num = num;
        }if (num < menor_num) {
            menor_num = num;
        }

        i++;
        printf("\nPara continuar digite qualquer numeros ou digite 99 para sair: ");
        scanf("%d", &sair);
        printf("\n------------------------------------------------------------------------ \n");
    } while (sair != 99);

    media = soma / i;
    media_pares = soma_pares / cont_par;
    per_impar = cont_impar * 100 / i;

    printf("    A soma dos numeros digitado e %d. \n ", soma);
    printf("   Foi digitado %d numeros. \n", i);
    printf("    A media dos numeros digitados e %.2f. \n", media);
    printf("    O maior numeros digitado foi o %d. \n", maior_num);
    printf("    O menor numeros digitado foi o %d. \n", menor_num);
    printf("    O percentual de numeros impares e de %.1f %%. \n", per_impar);

    return (0);
}
