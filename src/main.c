#include <stdlib.h>
#include <stdio.h>

void criaMatrizVazia(int caracteres[20][80]){
    for(int i = 0; i < 80; i++){
        caracteres[0][i] = '-';
        caracteres[19][i] = '-';

        if(i < 19 && i > 0){
            caracteres[i][0] = '|';
            caracteres[i][79] = '|';
        }

    }

    for(int i = 1; i < 19; i++){
        for(int j = 1; j < 79; j++){

            caracteres[i][j] = ' ';
            
        }
    }

}

void imprimeMatriz(int caracteres[20][80]){
    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 80; j++){

            printf("%c", caracteres[i][j]);
            
        }
        printf("\n");
    }
}

void asteriscoSimples(int caracteres[20][80], int n){




    imprimeMatriz(caracteres);
    
}




int main(){

    char caracteres[20][80];

    



    printf("PROGRAMA GERADOR DE OBRA DE ARTE:\n");
    printf("=================================\n");
    printf("Escolha o tipo de figura:\n1 - Asterisco simpes\n2 - Simbolo de soma com asteriscos\n");
    printf("3 - Letra x com asteriscos\n4 - Figuras aleatorias\n5 - Obra de arte especial\n");

    int op;
    scanf(&op);
    //getchar();

    printf("%d", op);


    switch(op){
        case 1:
            //verificar numero
            asteriscoSimples(caracteres);
            break;

        case 2:
            //soma();
            break;

        case 3:
            //x();
            break;

        case 4:
            //aleatorio();
            break;

        case 5:
            //especial();
            break;

        default:
            printf("Entrada invalida");

    }





  

}