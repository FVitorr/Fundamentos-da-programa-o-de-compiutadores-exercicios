/*Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é 4531. O
programa deve mostrar uma mensagem de permissão de acesso ou não.*/


#include <stdio.h>
#include <stdlib.h>

int main(){
    int senha;

    //obter senha
    printf("Informe a Senha: ");
    scanf("%d",&senha);
    //verifficar senha
    if (senha == 4531){ 
        printf("\nPermissao de Acesso");
    }else { 
        printf("\nPermissao de Acesso Negado");
    }
    return(0);
}