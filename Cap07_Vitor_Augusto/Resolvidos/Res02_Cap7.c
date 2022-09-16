#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que preencha uma matriz 10 × 3 com as notas de dez alunos em três provas. O
programa deverá mostrar um relatório com o número dos alunos (número da linha) e a prova em que
cada aluno obteve menor nota. Ao final do relatório, deverá mostrar quantos alunos tiveram menor
nota em cada uma das provas: na prova 1, na prova 2 e na prova 3.
*/

#define l 2
#define c 3
int main()
{
    // m[linha][coluna];
    int notas[l][c], r[l][c], m_element = 0;
    int qtd1 = 0, qtd2 = 0, qtd3 = 0;
    // prencher vetor;
    for (int i = 0; i < l; i++)
    {
        printf("  Aluno 00%d \n", i + 1);
        for (int j = 0; j < c; j++)
        {
            printf("Informe nota %d: ", j + 1);
            scanf("%d", &notas[i][j]);
        }
        printf("\n");
    }
    printf("\n<- Menor Nota ->\n\n");
    for (int i = 0; i < l; i++)
    {
        // separar aluno
        printf("  Aluno 00%d ", i + 1);
        int menor_nota = 9999, index = 0;
        for (int j = 0; j < c; j++)
        {
            if (notas[i][j] < menor_nota)
            {
                menor_nota = notas[i][j];
                index = j + 1;
            }
        }
        switch (index)
        {
        case 1:
            qtd1 = qtd1 + 1;
            break;
        case 2:
            qtd2 = qtd2 + 1;
            break;
        case 3:
            qtd3 = qtd3 + 1;
            break;
        }
        printf("Prova: %d  Nota: %d\n", index, menor_nota);
    }
    printf("\n Quantidade de Menor Nota:\n");
    printf("   Prova 1: %d   Prova 2: %d   Prova 3: %d", qtd1, qtd2, qtd3);

    return (0);
}