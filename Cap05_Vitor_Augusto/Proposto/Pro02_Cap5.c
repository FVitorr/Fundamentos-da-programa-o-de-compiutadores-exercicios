#include <stdlib.h>
#include <stdio.h>

/*
*. Uma companhia de teatro deseja montar uma série de espetáculos. A direção calcula que, a
R$ 5,00 o ingresso, serão vendidos 120 ingressos, e que as despesas serão de R$ 200,00. Diminuindo-se em
R$ 0,50 o preço dos ingressos, espera-se que as vendas aumentem em 26 ingressos. Faça um programa que
escreva uma tabela de valores de lucros esperados em função do preço do ingresso, fazendo-se variar esse preço de R$ 5,00 a 
R$ 1,00, de R$ 0,50 em R$ 0,50. Escreva, ainda, para cada novo preço de ingresso, o lucro
máximo esperado, o preço do ingresso e a quantidade de ingressos vendidos para a obtenção desse lucro. 
*/
#define despesas 200 // despesas constantes

int main(){
    float ing_p = 5.0 , desc = 0.5, lucro = 0,max_lucro,max_p;
    int num_ingresso = 120,max_ing;
    float const_ = (ing_p / desc);
    //120 * 5 - 200 = L
    // 120 + 26 * (5 - 0,5) - 200 = L
    // NumIngresso * Preço - despesas = lucro
    // NumIngresso = 120 + 26(numero de repetiçoes)
    // Preço = 5 - 0.50(num de repetiçoes) onde Preço >= 0
    //-0.50 = 120 + 26 - 200
    for (int cont = 0; cont <= const_ ;cont++){
        num_ingresso  = num_ingresso + 26;
        ing_p = ing_p - desc;
        lucro = num_ingresso * ing_p - despesas;
        if (lucro > max_lucro){
            max_lucro = lucro;
            max_ing = num_ingresso;
            max_p = ing_p;
        }
        printf("\n[Qnt_Ing] [ Val_Ing ] [ Lucro_Esp ]\n");
        printf("[  %d  ] [ R$ %.2f ] [ R$ %.2f ]\n",num_ingresso,ing_p,lucro);
        if (ing_p <= 0){
            break;
        }
    }
    printf("\nMax Ingresso: %d\nIngresso_V: R$ %2f \nMax Lucro: R$ %2.f",max_ing,max_p,max_lucro);
    
return(0);
}