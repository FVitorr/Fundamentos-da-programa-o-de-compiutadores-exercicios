/*. Faça um programa que receba:
■■ O código de um produto comprado, supondo que a digitação do código do produto seja sempre
válida, isto é, um número inteiro entre 1 e 10.
■■ O peso do produto em quilos.
■■ O código do país de origem, supondo que a digitação do código seja sempre válida, isto é, um número inteiro entre 1 e 3.
Calcule e mostre:
■■ o peso do produto convertido em gramas;
■■ o preço total do produto comprado;
■■ o valor do imposto, sabendo que ele é cobrado sobre o preço total do produto comprado e depende
do país de origem;
■■ o valor total, preço total do produto mais imposto. 
*/

int main(){
    float cod_produto,peso,cod_pais,vlr_produto,vlr_imposto;
    //Obter entrada 
    printf("\n+++++++++++++++++++++++++\n");
    printf("Informe o codigo do produto: ");
    scanf("%f",&cod_produto);
    printf("Informe o peso (Kg): ");
    scanf("%f",&peso);
    printf("Informe o codigo do Pais: ");
    scanf("%f",&cod_pais);

    printf("\n++++++++ Extrato ++++++++\n");
    //Vereficar validade dos dados 
    if ((cod_produto <= 10 && cod_produto > 0 ) && (cod_pais > 0 && cod_pais <=3)){
        //o peso do produto convertido em gramas;
        peso = peso * 1000;
        printf("\nO peso Gramas: %f\n",peso);
        //o preço total do produto comprado;
        if (cod_produto >= 1 && cod_produto <= 4){ // 10 por grama
            vlr_produto = 10 * peso;
        } else if (cod_produto >= 5 && cod_produto <= 7){// 25 por grama
            vlr_produto = 25 * peso;
        }else { // 35 por grama
            vlr_produto = 35 * peso;
        }
        printf("\nValor do Produto: R$ %f ",vlr_produto);

        //o valor do imposto, sabendo que ele é cobrado sobre o preço total do produto comprado e depende do país de origem;
        if (cod_pais == 3){ // imposto de 25%
            vlr_imposto = vlr_produto * 0.25;
        }else if (cod_pais ==2){ // imposto de 15%
            vlr_imposto = vlr_produto * 0.15;
        }else { // imposto de 0%
            vlr_imposto = vlr_produto * 0;
        }
        printf ("\nValor Imposto: R$ %f",vlr_imposto);

        //o valor total, preço total do produto mais imposto. 
        vlr_produto = vlr_produto + vlr_imposto;
        printf ("\nValor Total: R$ %f", vlr_produto);

    }else{
        printf("\nInformacoes fornecidas sao invalidas");
    }
    printf("\n+++++++++++++++++++++++++\n");
    return(0);
}