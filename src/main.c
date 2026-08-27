#include <stdlib.h>
#include <stdio.h>

int leituraNumero(){
    printf("escolha o número de figuras (de 1 a 100): ");
    int n;
    scanf("%d", &n);

    if(n > 100) n = 100;
    
    return n;
}

void criaMatrizVazia(char caracteres[20][80]){
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

void imprimeMatriz(char caracteres[20][80]){
    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 80; j++){

            printf("%c", caracteres[i][j]);
            
        }
        printf("\n");
    }
}

void asteriscoSimples(char caracteres[20][80]){
    
    int linha;
    int coluna;

    do{
        linha = (rand() % 18) + 1;
        coluna = (rand() % 78) + 1;
    }while(caracteres[linha][coluna] == '*');

    caracteres[linha][coluna] = '*';
    
    
}

void soma(char caracteres[20][80]){
    int linha;
    int coluna;

    do{
        linha = (rand() % 16) + 2;
        coluna = (rand() % 76) + 2;

        //condicoes para que as posicoes nao se repitam
        if(caracteres[linha][coluna] == '*'){
            continue;
        }

        if(caracteres[linha + 1][coluna] == '*' || caracteres[linha - 1][coluna] == '*'){
            continue;
        }

        if(caracteres[linha][coluna + 1] == '*' || caracteres[linha][coluna - 1] == '*'){
            continue;
        }

        //condicoes para que as figuras nao se misturem
        if(caracteres[linha + 1][coluna + 1] == '*' || caracteres[linha + 1][coluna - 1] == '*'){
            continue;
        }

        if(caracteres[linha - 1][coluna - 1] == '*' || caracteres[linha - 1][coluna + 1] == '*'){
            continue;
        }

        break;
    }while(1);

    caracteres[linha][coluna] = '*';
    caracteres[linha+1][coluna] = '*';
    caracteres[linha-1][coluna] = '*';
    caracteres[linha][coluna + 1] = '*';
    caracteres[linha][coluna - 1] = '*';
}


void x(char caracteres[20][80]){
    int linha;
    int coluna;

    do{
        linha = (rand() % 16) + 2;
        coluna = (rand() % 76) + 2;

        //condicoes para que os asteriscos nao se repitam
        if(caracteres[linha][coluna] == '*'){
            continue;
        }

        if(caracteres[linha + 1][coluna + 1] == '*' || caracteres[linha + 1][coluna - 1] == '*'){
            continue;
        }

        if(caracteres[linha - 1][coluna - 1] == '*' || caracteres[linha - 1][coluna + 1] == '*'){
            continue;
        }

        //condocoes para que as figuras nao se misturem
        if(caracteres[linha + 1][coluna] == '*' || caracteres[linha - 1][coluna] == '*'){
            continue;
        }

        if(caracteres[linha][coluna + 1] == '*' || caracteres[linha][coluna - 1] == '*'){
            continue;
        }

        break;
    }while(1);

    caracteres[linha][coluna] = '*';
    caracteres[linha+1][coluna+1] = '*';
    caracteres[linha+1][coluna-1] = '*';
    caracteres[linha-1][coluna + 1] = '*';
    caracteres[linha-1][coluna - 1] = '*';
    
}

void aleatorio(char caracteres[20][80], int n){
    
    for(int i = 0; i < n; i++){
        int nFigura = rand() % 3;
        switch(nFigura){
            case 0:
                asteriscoSimples(caracteres);
                break;
            
            case 1:
                soma(caracteres);
                break;

            case 2:
                x(caracteres);
                break;

            default:
                break;
        }
    }

}

void especial(char caracteres[20][80]){
    
}

int main(){

    char caracteres[20][80];

    criaMatrizVazia(caracteres);

    printf("PROGRAMA GERADOR DE OBRA DE ARTE:\n");
    printf("=================================\n");
    printf("Escolha o tipo de figura:\n1 - Asterisco simpes\n2 - Simbolo de soma com asteriscos\n");
    printf("3 - Letra x com asteriscos\n4 - Figuras aleatorias\n5 - Obra de arte especial\n");

    int op;
    scanf("%d", &op);

    int n;
    switch(op){
        case 1:
            n = leituraNumero();

            for(int i = 0; i < n; i++) asteriscoSimples(caracteres);

            break;

        case 2:
            n = leituraNumero();

            for(int i = 0; i < n; i++) soma(caracteres);

            break;

        case 3:
            n = leituraNumero();

            for(int i = 0; i < n; i++) x(caracteres);
            
            break;

        case 4:
            n = leituraNumero();

            aleatorio(caracteres, n);
            break;

        case 5:

            n = leituraNumero();

            for(int i = 0; i < n; i++) especial(caracteres);
            break;

        default:
            printf("Entrada invalida");

    }

    imprimeMatriz(caracteres);

}