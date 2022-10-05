#include <stdlib.h>
#include <stdio.h>

/*
Crie um programa que faça o cadastramento de contas, verificando se o número do cliente titular da
conta já foi previamente cadastrado. Se existir, deverá permitir a inclusão. Caso contrário, deverá mostrar a mensagem Cliente não cadastrado e abrir uma tela que permita o cadastramento. O programa
deverá mostrar, ao final, todas as contas cadastradas.
*/
#define t_char 80
typedef struct{
    int key;
    char nome[t_char];
    int tel;
    char end[t_char];
}gCadastro;

typedef struct{
    int conta;
    int key;
    float saldo;
}gConta;

void clean_buffer(gCadastro *v){
    for (int i = 0; i < t_char; i++){
        v->nome[i]= ' ';
        v->end[i] = ' ';
    }
}

int qtd = 0;
void cadastro_cliente(gCadastro *v,int key){
    v->key = key;
    printf("Nome: ");
    scanf("%s",&v->nome);
    printf("Tel: ");
    scanf("%d",&v->tel);
    printf("Endereco: ");
    scanf("%s",&v->end);
    //scanf("%s",&v[i]->nome);
    printf("Cliente cadastrado com Sucesso");
}

#define qtd_c 2
int main(){
    gConta client[qtd_c];
    gCadastro conta[qtd_c];


    int i = 0;
    while(i < qtd_c){
        clean_buffer(&conta[i]);

        printf("Informe Numero Conta: ");
        scanf("%d",&client[i].conta);

        printf("Informe Numero Cliente: ");
        scanf("%d",&client[i].key);
        //verificar se key ja existe;
        int key = client[i].key;
        if (conta[i].key ==  key){
        
        }else {
            printf("\nCliente nao cadastrado.");
            
            cadastro_cliente(&conta[i],key);
        }

        printf("\nInforme Saldo em conta: ");
        scanf("%f",&client[i].saldo);
        //clean_buffer(&client[i].nome);
        i++;
    }
    printf("\n-- Todas Contas No Sistema --\n");
    for (int i = 0; i < qtd_c; i++){
        printf("\nConta: %d",client[i].key);
    }


return(0);
}