#include <stdio.h>
#include <stdlib.h>

/*
 * Faça um programa que receba quatro valores: I, A, B e C. Desses valores, I é inteiro e positivo, A, B e
C são reais. Escreva os números A, B e C obedecendo à tabela a seguir.
Suponha que o valor digitado para I seja sempre um valor válido, ou seja, 1, 2 ou 3, e que os números
digitados sejam diferentes um do outro.
 */
int main(int argc, char** argv) {
    int i;
    float a,b,c;
    //obter entradas    
    printf("Informe o Primeiro Numero:");
    scanf("%f",&a);
    
    printf("Informe o Segundo Numero:");
    scanf("%f",&b);
    
    printf("Informe o Terceiro Numero:");
    scanf("%f",&c);
    
    printf("Informe um Numero Inteiro e Positivo:");
    scanf("%d",&i);
    
    switch (i){
        case (1):// A,B,C em ordem crescente
            if (a < b && a < c){ // a como menor
                if (b < c){ // b como o 2º menor
                    printf("A ordem crescente desses numero é: \n  %.1f ; %.1f ; %.1f",a,b,c);
                } else {// c como o 2º menor
                    printf("A ordem crescente desses numero é: \n  %.1f ; %.1f ; %.1f",a,c,b);
                }
            }else if (b < c && b < a){// b como menor
                if (a < c){// a como o 2º menor
                    printf("A ordem crescente desses numero é: \n  %.1f ; %.1f ; %.1f",b,a,c);
                }else{// c como o 2º menor
                    printf("A ordem crescente desses numero é: \n  %.1f ; %.1f ; %.1f",b,c,a);
                }
            }else if (c < b && c < a){// c como o menor
                    if (b < a){// a como o 2º menor
                        printf("A ordem crescente desses numero é: \n  %.1f ; %.1f ; %.1f",c,b,a);
                    }else{// a como o 2º menor
                        printf("A ordem crescente desses numero é: \n %.1f ; %.1f ; %.1f",c,a,b);
                }
            }
        break;
        case(2): // A,B,C em ordem decrescente
            if (a < b && a < c){ // a como menor
                if (b < c){ // b como o 2º menor
                    printf("A ordem decrescente desses numero é: \n  %.1f ; %.1f ; %.1f",c,b,a);
                } else {// c como o 2º menor
                    printf("A ordem decrescente desses numero é: \n  %.1f ; %.1f ; %.1f",b,c,a);
                }
            }else if (b < c && b < a){// b como menor
                if (a < c){// a como o 2º menor
                    printf("A ordem decrescente desses numero é: \n  %.1f ; %.1f ; %.1f",c,a,b);
                }else{// c como o 2º menor
                    printf("A ordem decrescente desses numero é: \n  %.1f ; %.1f ; %.1f",a,c,b);
                }
            }else if (c < b && c < a){// c como o menor
                    if (b < a){// a como o 2º menor
                        printf("A ordem decrescente desses numero é: \n  %.1f ; %.1f ; %.1f",a,b,c);
                    }else{// a como o 2º menor
                        printf("A ordem decrescente desses numero é: \n %.1f ; %.1f ; %.1f",b,a,c);
                }
            }
            
        break;
        case(3): // o maior no meio
            if (a > b && a > c){ // a como maior
                printf("O maior entre os outros numeros é: \n  %.1f ; %.1f ; %.1f",b,a,c);
            }else  if (b > a && b > c){ // b como maior
                printf("O maior entre os outros numeros é: \n  %.1f ; %.1f ; %.1f",a,b,c);
            }else  if (c > a && c > b){ // b como maior
                printf("O maior entre os outros numeros é: \n  %.1f ; %.1f ; %.1f",a,c,b);
            }
        break;
        default:
            printf("\nComando invalido.\nPor favor informe um numero no intervalo (1,2,3)\n");
        break;
    }
   
    
    // selecionar quem  é menor que quem 

    return (EXIT_SUCCESS);
}

