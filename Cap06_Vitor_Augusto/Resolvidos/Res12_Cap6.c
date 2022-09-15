#include <stdlib.h>
#include <stdio.h>

/*
*Faça um programa que preencha um vetor com os modelos 
de cinco carros (exemplos de modelos: Fusca,
Gol, Vectra etc). Carregue outro vetor com o consumo desses carros,
 isto é, quantos quilômetros cada um
deles faz com um litro de combustível. Calcule e mostre:
■■ o modelo de carro mais econômico; e
■■ quantos litros de combustível cada um dos carros cadastrados 
consome para percorrer uma distância de 1.000 km. 
*/

#define TAM 3

int main() {

    /* Para armzenar os nomes dos veiculos, tem q ser numeros**/
    int n_car[TAM];
    int indice_enc;
    float consumo[TAM], redimento[TAM], economico;

    //Leitura dos nomes e dados dos veiculos
    for (int i = 0; i < TAM; i++) {
        printf("CARRO %d\n", i + 1);
        printf("\tNome do carro: ");
        scanf("%d", &n_car[i]);
        printf("\tConsumo(KM/L): ");
        scanf("%f", &consumo[i]);
        redimento[i] = consumo[i] * 1000;
        printf("\n");
    }

    economico = consumo[0];

    printf("\nDADOS\n");
    for (int i = 0; i < TAM; i++) {
        printf("\n%dº CARRO\n", i + 1);
        printf("Marca do veiculo: %d\n", n_car[i]);
        printf("Consumo de combustivel: %.1f\n", consumo[i]);
        printf("Consumo em uma distância de 1000km: %.2f L\n", redimento[i]);
        printf("\n");

        //Verificar o mais economico
        if (consumo[i + 1] > economico) {
            economico = consumo[i + 1];
            indice_enc = i + 1;
        }
    }

    printf("\nO carro mais economico é o %d que faz %.1f Km/litro. \n", n_car[indice_enc], economico);


    return (EXIT_SUCCESS);
}
