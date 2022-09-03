#include <stdlib.h>
#include <stdio.h>

/*
*Foi feita uma estatística em cinco cidades brasileiras para coletar dados sobre acidentes de trânsito.
Foram obtidos os seguintes dados:
a) código da cidade;
b) número de veículos de passeio;
c) número de acidentes de trânsito com vítimas.
Deseja-se saber:
a) qual é o maior e qual é o menor índice de acidentes de trânsito e a que cidades pertencem;
b) qual é a média de veículos nas cinco cidades juntas;
c) qual é a média de acidentes de trânsito nas cidades com menos de 2.000 veículos de passeio
*/
int main(){
    int cod_cid,num_v,num_a,cont,maior,cid_maior,menor,cid_menor,soma_vei,soma_a,cont_acid;
    float med,med_acd;


    for (int i = 0; i<5 ; i++){
        //obter entradas
        printf("Informe o codigo da cidade: ");
        scanf("%d",&cod_cid);

        printf("Informe o numero de veiculos de passeio: ");
        scanf("%d",&num_v);

        printf("Informe o numero de acidentes de transito com vitimas: ");
        scanf("%d",&num_a);

        if (cont == 1){
            maior = num_a;
            cid_maior = cod_cid;
            menor = num_a;
            cid_menor = cod_cid;
        }else {
            if (num_a > maior){
                maior = num_a;
                cid_maior = cod_cid;
            }else if (num_a < menor){
                menor = num_a;
                cid_menor = cod_cid;
            }
            soma_vei = soma_vei + num_v;
        }
        if (num_v < 2000){
            soma_a = soma_a + num_a;
            cont_acid = cont_acid + 1; 
        }
    }
    printf("\nMaior: %d \n Cid_maior:%d \n",maior,cid_maior);
    printf("\nMenor: %d \n Cid_menor:%d \n",menor,cid_menor);
    med = soma_vei/5;
    if(cont_acid == 0){
        printf("Não foi informado cidade com Mneos de 2000 veiculos");
    }else {
        med_acd = soma_a/cont_acid;
        printf("\nMedia de Acidentes: %f",med_acd);
    }


return(0);
}