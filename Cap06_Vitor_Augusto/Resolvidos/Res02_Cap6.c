#include <stdlib.h>
#include <stdio.h>

/*
*Uma pequena loja de artesanato possui apenas um vendedor e comercializa dez tipos de objetos. O
vendedor recebe, mensalmente, salário de R$ 545,00, acrescido de 5% do valor total de suas vendas.
O valor unitário dos objetos deve ser informado e armazenado em um vetor; a quantidade vendida de
cada peça deve ficar em outro vetor, mas na mesma posição. Crie um programa que receba os preços
e as quantidades vendidas, armazenando-os em seus respectivos vetores (ambos com tamanho dez).
Depois, determine e mostre:
■■ um relatório contendo: quantidade vendida, valor unitário e valor total de cada objeto. Ao final,
deverão ser mostrados o valor geral das vendas e o valor da comissão que será paga ao vendedor; e
■■ o valor do objeto mais vendido e sua posição no vetor (não se preocupe com empates).
*/
#define t 10
int main(){
    float valorUnit[t],sal = 545,vVendas = 0,v_unit = 0,v_totalP = 0,v_total = 0,obj_valor = 0;
    int qtd_vend[t],qtd_,qtd_t = 0,obj_mVendido = 0,index = 0;
    //preencher Valor e qtd
    for (int i = 0; i < t; i++) {
        printf("Informe Valor: R$ ");
        scanf("%f", &valorUnit[i]);
        printf("Quantidade vendida: ");
        scanf("%d", &qtd_vend[i]);
    }
    //um relatório contendo: quantidade vendida, valor unitário e c
    for (int i = 0; i < t; i++) {
        qtd_ = qtd_vend[i]; //obter quantidade vendida de cada produto
        qtd_t = qtd_t + qtd_; //obter quantidade Total vendida de cada produto
        v_unit = valorUnit[i];  //obter valor unitario
        v_totalP = v_unit * qtd_ ;// valor total de cada objeto
        v_total = v_total + v_totalP;
        printf("\n  | Quantidade Vendida: %d | Valor Unitario: R$ %f | Valor Total: R$ %f |\n",qtd_,v_unit,v_totalP);

        if(obj_mVendido < qtd_){
            obj_mVendido = qtd_;
            obj_valor = v_totalP;
            index = i;
        }
    }
    //calcular comissão 
    float com = v_total * 0.05;
    printf("\n\n  | Q. Total Vendida: %d | Valor Total: R$ %f | Comissao: R$ %f |\n",qtd_t,v_total,com);

    //o valor do objeto mais vendido (maior qtd_) e sua posição no vetor (não se preocupe com empates).
    printf("\n\n  | Q. + Vendida: %d | Valor Total: R$ %f | Index: %d |\n\n",obj_mVendido,obj_valor,index);

return(0);
}