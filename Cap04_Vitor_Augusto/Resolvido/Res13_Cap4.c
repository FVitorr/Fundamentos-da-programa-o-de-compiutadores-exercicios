#include <stdlib.h>
#include <stdio.h>

int main(){
    int opc;
    float imp,sal;
    
    //menu de opçoes
    printf("\n******** Opcoes ********");
    printf("\n* 1.Imposto \n* 2.Novo Salario \n* 3.Classificacao");
    printf("\n************************");
    //obter a opc deesejada 
    printf("\nDigite a opção desejada: \n");
    scanf("%d",&opc);

    switch (opc)
    {
    case 1:
        //receber salario 
        printf("Informe o Salario: R$ ");
        scanf("%f",&sal);
        //calcular imposto1
        if (sal < 500){ // 5% para salarios ate 500
            imp = sal * 5/100;
        }else if (sal >= 500 && sal <= 850){ 
            imp = sal * 10/100;
        }else if (sal > 850){
            imp = sal * 15/100;
        }
        printf("O valor do imposto e R$ %f",imp);
        break;
    case 2: //receber o salário de um funcionário, calcular e mostrar o valor do novo salário
        printf("Informe o Salario: R$ ");
        scanf("%f",&sal);

        if (sal > 1500){
            sal = sal + 25;
        }else if (sal >= 750 && sal <= 1500){
            sal = sal + 50;
        }else if (sal >= 450 && sal < 750){
            sal= sal + 75;
        }else if (sal < 450){
            sal += 75;
        }

        printf("Seu novo salario e de R$ %f",sal);
        break;
    case 3: // receber o salário de um funcionário e mostrar sua classificação
        printf("Informe o Salario: R$ ");
        scanf("%f",&sal);

        if (sal > 700){
            printf("Bem remunerado");
        }else {
            printf("Mal remunerado");
        }
        break;
    
    default:
        printf("Opção Invalida");
        printf("********* EXIT *********");
        break;
    }

    return(0);
}