#include <stdlib.h>
#include <stdio.h>

void exibeBorda(){
    for(int i = 0; i < 80; i++){
        printf("-");
    }
    printf("\n");
}

void asteriscoSimples(){
    exibeBorda();


    exibeBorda();
}

void soma(){
    exibeBorda();


    exibeBorda();
}

void x(){
    exibeBorda();


    exibeBorda();
}

void aleatorio(){
    exibeBorda();


    exibeBorda();
}

void especial(){
    exibeBorda();

    
    exibeBorda();
}


int main(){

    
    printf("PROGRAMA GERADOR DE OBRA DE ARTE:\n");
    printf("=================================\n");
    printf("Escolha o tipo de figura:\n1 - Asterisco simpes\n2 - Simbolo de soma com asteriscos\n");
    printf("3 - Letra x com asteriscos\n4 - Figuras aleatorias\n5 - Obra de arte especial");
    
    int op;
    scanf(&op);

    switch(op){
        case 1:
            asteriscoSimples();
            break;

        case 2:
            soma();
            break;

        case 3:
            x();
            break;

        case 4:
            aleatorio();
            break;

        case 5:
            especial();
            break;

        default:
            printf("Entrada invalida");

    }





  

}