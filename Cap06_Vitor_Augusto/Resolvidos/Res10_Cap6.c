#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa para corrigir provas de múltipla escolha. Cada prova tem oito questões e cada
questão vale um ponto. O primeiro conjunto de dados a ser lido é o gabarito da prova.
Os outros dados são os números dos alunos e as respostas que deram às questões. 
Existem dez alunos matriculados.
Calcule e mostre:
■■ o número e a nota de cada aluno; e
■■ a porcentagem de aprovação, sabendo-se que a nota mínima é 6. 
*/
#define qtProvas 8
#define num_aluno 4
int main(){
    int gabarito[qtProvas],a_gabarito[qtProvas];
    int apro = 0, nota_[num_aluno];

    //preencher vetor gabarito com numeros de 1 ate 4
    printf("\n\nGabarito:\n");
    for (int i = 0; i < qtProvas; i++){
        printf("    Questao %d :",i+1);
        scanf("%d",&gabarito[i]);
    }
    for (int j = 0; j < num_aluno; j++){
        printf("\n\nGabarito Prova Aluno %d:\n",j);
        for (int i = 0; i < qtProvas; i++){
            printf("    Questao %d :",i+1);
            scanf("%d",&a_gabarito[i]);
        }
        //obter nota
        int nota = 0;
        for (int i = 0; i < qtProvas; i++){
            if (gabarito[i] == a_gabarito[i]){
                nota = nota + 1 ;
            }
        }
        nota_[j] = nota;
        //testar nota
        if (nota > 6){
            apro = apro + 1;
        }
    }
    //Mostrar nota
    for (int i = 0 ; i < num_aluno; i++){
        printf("\nAluno: %d Nota: %d",i,nota_[i]);
    }
    
    //  = 100 * nota /num_aluno
    printf("\nPorcentagem de aprovados: %d%%", (apro*100)/num_aluno);


return(0);
}