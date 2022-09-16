#include <stdio.h>
#include <stdlib.h>
#define L 3  //LInha - Turma
#define C 8  //Coluna - Alunos
#define P 3  //Profundidade - Disciplinas

/* Para essa questão é necessário criar uma matriz de 3 dimensões. */

int main(int argc, char** argv) {
    float mat[L][C][P], soma_aluno[C], somaTurma[L], mediaAluno, mediaTurma;
    int i, j, k, p = 0, p2 = 0;

    for (i = 0; i < L; i++) { //LAço da turma
        printf("------------------------------------Turma %d------------------------------------\n\n", i + 1);

        //Laço dos alunos
        for (j = 0; j < C; j++) {
            printf("ALuno %d \n", j + 1);

            soma_aluno[p] = 0;
            somaTurma[p2 = 0];

            //LAço das diciplinas
            for (k = 0; k < P; k++) {
                printf("\tNota disciplina %d: ", k + 1);
                scanf("%f", &mat[i][j][k]);
                soma_aluno[p] += mat[i][j][k];
            }
            somaTurma[p2] += soma_aluno[p];
            printf("\tMedia aluno %d: %.2f \n\n", j + 1, mediaAluno = soma_aluno[p] / 4);
            p++;
        }
        printf("Media da turma: %.2f \n",mediaTurma = somaTurma[p2] / C);
        p2++;
        printf("\n");
    }

    return (EXIT_SUCCESS);
}