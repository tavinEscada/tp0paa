#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "../include/uteis.h"

int leituraNumero(){
    printf("escolha o numero (de 1 a 100): ");
    int n;
    
    if (scanf("%d", &n) != 1) {
        printf("Entrada invalida");
        exit(1);
    }

    if(n > 100) n = 100;

    if(n < 1) n = 1;
    
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

void campoFutebol(char caracteres[20][80], int n){

    //área
    for(int i = 1; i < 12; i++){
        caracteres[6][i] = '-';
        caracteres[14][i] = '-';
    }
    for(int i = 1; i < 22; i++){
        caracteres[3][i] = '-';
        caracteres[16][i] = '_';
    }
    for(int i = 7; i < 14; i++){
        caracteres[i][11] = '|';
    }
    for(int i = 4; i < 17; i++){
        caracteres[i][22] = '|';
    }

    //penalti
    caracteres[10][17] = '*';

    //meia lua
    caracteres[7][23] = '*';
    caracteres[8][25] = '*';
    caracteres[9][26] = '*';
    caracteres[10][26] = '*';
    caracteres[11][26] = '*';
    caracteres[12][25] = '*';
    caracteres[13][23] = '*';

    //meio campo
    caracteres[5][78] = '*';
    caracteres[6][75] = '*';
    caracteres[7][73] = '*';
    caracteres[8][72] = '*';
    caracteres[9][71] = '*';
    caracteres[10][71] = '*';//
    caracteres[11][71] = '*';
    caracteres[12][72] = '*';
    caracteres[13][73] = '*';
    caracteres[14][75] = '*';
    caracteres[15][78] = '*';

    //goleiro
    caracteres[10][5] = '(';
    caracteres[10][6] = '1';
    caracteres[10][7] = ')';

    int a = rand() % 6 + 1;
    int b = rand() % 7;

    int formacao = (a * n + b) % 7;

    switch(formacao){
        case 0:
            
            f442(caracteres);
            break;

        case 1:
            f433(caracteres);
            break;

        case 2:
            f4231(caracteres);
            break;

        case 3:
            f352(caracteres);
            break;

        case 4:
            f451(caracteres);
            break;

        case 5:
            f451Variacao(caracteres);
            break;

        default:
            f343(caracteres);
            break;
    }
    
}