#include <stdlib.h>
#include <stdio.h>

/*
*16. Faça um programa que receba 
várias idades, calcule e mostre a média das idades digitadas.
 Finalize digitando idade igual a zero.
*/
int main(){
    int i = 0,idade,qtd_entry=0,soma_idade = 0;

    while (i < 1){
        printf("Informe Idade: ");
        scanf("%d",&idade);

        if (idade == 0){
            i = i + 1;
        }else{
            qtd_entry++;
            soma_idade = soma_idade + idade;
        }
    }
    printf("A media das idades digitadas e: %d",soma_idade / qtd_entry);


return(0);
}