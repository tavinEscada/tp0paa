#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "../include/bancoFormacoes.h"
#include "../include/uteis.h"

int main(){

    char caracteres[20][80];

    criaMatrizVazia(caracteres);

    printf("PROGRAMA GERADOR DE OBRA DE ARTE:\n");
    printf("=================================\n");
    printf("Escolha o tipo de figura:\n1 - Asterisco simpes\n2 - Simbolo de soma com asteriscos\n");
    printf("3 - Letra x com asteriscos\n4 - Figuras misturadas\nOutro numero - Obra de arte especial\n");

    int op;
    
    if (scanf("%d", &op) != 1) {
        printf("Entrada invalida");
        exit(1);
    }

    int n = leituraNumero();

    //gerar numeros diferentes a cada execução
    srand(time(NULL));

    switch(op){
        case 1:

            for(int i = 0; i < n; i++){
                asteriscoSimples(caracteres);
            }

            imprimeMatriz(caracteres);

            break;

        case 2:

            for(int i = 0; i < n; i++){

                soma(caracteres);

            }
            imprimeMatriz(caracteres);

            break;

        case 3:

            for(int i = 0; i < n; i++){ 
                x(caracteres);
            }

            imprimeMatriz(caracteres);
            
            break;

        case 4:

            aleatorio(caracteres, n);
            imprimeMatriz(caracteres);
            break;

        default:

            campoFutebol(caracteres, n);
            break;

    }

}