#include <stdlib.h>
#include <stdio.h>

#include "../include/bancoFormacoes.h"

void linhaDe4(char caracteres[20][80]){
    caracteres[2][20] = '(';
    caracteres[2][21] = '6';
    caracteres[2][22] = ')';

    caracteres[7][14] = '(';
    caracteres[7][15] = '4';
    caracteres[7][16] = ')';

    caracteres[13][14] = '(';
    caracteres[13][15] = '3';
    caracteres[13][16] = ')';

    caracteres[17][20] = '(';
    caracteres[17][21] = '2';
    caracteres[17][22] = ')';
}

void linhaDe3(char caracteres[20][80]){

    caracteres[4][17] = '(';
    caracteres[4][18] = '3';
    caracteres[4][19] = ')';

    caracteres[10][14] = '(';
    caracteres[10][15] = '2';
    caracteres[10][16] = ')';

    caracteres[15][17] = '(';
    caracteres[15][18] = '4';
    caracteres[15][19] = ')';
}

void doisVolantes(char caracteres[20][80]){
    caracteres[7][36] = '(';
    caracteres[7][37] = '8';
    caracteres[7][38] = ')';

    caracteres[13][36] = '(';
    caracteres[13][37] = '5';
    caracteres[13][38] = ')';
}

void umVolante(char caracteres[20][80]){
    caracteres[10][35] = '(';
    caracteres[10][36] = '5';
    caracteres[10][37] = ')';

}

void alas(char caracteres[20][80]){
    caracteres[2][44] = '(';
    caracteres[2][45] = '7';
    caracteres[2][46] = ')';

    caracteres[17][43] = '(';
    caracteres[17][44] = '1';
    caracteres[17][45] = '1';
    caracteres[17][46] = ')';
}

void cincoMeias(char caracteres[20][80]){
    
    umVolante(caracteres);

    alas(caracteres);

    caracteres[6][39] = '(';
    caracteres[6][40] = '6';
    caracteres[6][41] = ')';

    caracteres[14][39] = '(';
    caracteres[14][40] = '8';
    caracteres[14][41] = ')';

}

void artilheiro(char caracteres[20][80]){
    caracteres[10][66] = '(';
    caracteres[10][67] = '9';
    caracteres[10][68] = ')';
}

void doisAtacantes(char caracteres[20][80]){
    caracteres[8][65] = '(';
    caracteres[8][66] = '9';
    caracteres[8][67] = ')';

    caracteres[12][64] = '(';
    caracteres[12][65] = '1';
    caracteres[12][66] = '0';
    caracteres[12][67] = ')';
}

void pontas(char caracteres[20][80]){
    caracteres[17][62] = '(';
    caracteres[17][63] = '1';
    caracteres[17][64] = '0';
    caracteres[17][65] = ')';

    caracteres[3][62] = '(';
    caracteres[3][63] = '1';
    caracteres[3][64] = '1';
    caracteres[3][65] = ')';
}

void tresAtacantes(char caracteres[20][80]){

    pontas(caracteres);

    artilheiro(caracteres);
}

void f442(char caracteres[20][80]){
    printf("==Formação 4-4-2==\n");
    linhaDe4(caracteres);

    doisVolantes(caracteres);

    alas(caracteres);

    doisAtacantes(caracteres);

    char times[4][30] = {"Atlético de Madrid de SImeone", "Manchester United de Ferguson", "Brasil de 1994", 
        "Milan de Ancelotti"};

    imprimeMatriz(caracteres);

    printf("Exemplo de time que usou: ");
    
    int ex = rand() % 4;

    printf("%s\n", times[ex]);

}

void f433(char caracteres[20][80]){
    printf("==Formação 4-3-3==\n");
    linhaDe4(caracteres);

    umVolante(caracteres);

    caracteres[14][42] = '(';
    caracteres[14][43] = '7';
    caracteres[14][44] = ')';

    caracteres[6][42] = '(';
    caracteres[6][43] = '8';
    caracteres[6][44] = ')';

    pontas(caracteres);

    artilheiro(caracteres);

    char times[5][30] = {"Napoli de Sarri", "Brasil de 1962", "Liverpool de Klopp", 
        "Holanda de 1970", "Barcelona de Guardiola"};

    imprimeMatriz(caracteres);

    printf("Exemplo de time que usou: ");
    
    int ex = rand() % 5;

    printf("%s\n", times[ex]);

}

void f4231(char caracteres[20][80]){

    printf("==Formação 4-2-3-1==\n");
    linhaDe4(caracteres);

    doisVolantes(caracteres);

    caracteres[10][51] = '(';
    caracteres[10][52] = '1';
    caracteres[10][53] = '0';
    caracteres[10][54] = ')';

    caracteres[5][51] = '(';
    caracteres[5][52] = '7';
    caracteres[5][53] = ')';

    caracteres[15][51] = '(';
    caracteres[15][52] = '1';
    caracteres[15][53] = '1';
    caracteres[15][54] = ')';

    artilheiro(caracteres);

    char times[5][30] = {"Arsenal de Arsene Wenger", "Alemanha de 2014", "Corinthians de Tite", 
        "Espanha de 2010", "Real Madrid dos galácticos"};

    imprimeMatriz(caracteres);

    printf("Exemplo de time que usou: ");
    
    int ex = rand() % 5;

    printf("%s\n", times[ex]);
}

void f352(char caracteres[20][80]){

    printf("==Formação 3-5-2==\n");

    linhaDe3(caracteres);

    cincoMeias(caracteres);

    doisAtacantes(caracteres);

    char times[4][30] = {"Alemanha de 1996", "Juventus de Conte", "Inter de Milão de Mourinho", 
        "Tottenham de Pochettino"};

    imprimeMatriz(caracteres);

    printf("Exemplo de time que usou: ");
    
    int ex = rand() % 4;

    printf("%s\n", times[ex]);
}

void f451(char caracteres[20][80]){

    printf("==Formação 4-5-1==\n");

    linhaDe4(caracteres);
    cincoMeias(caracteres);
    artilheiro(caracteres);

    char times[4][30] = {"Chelsea de Mourinho", "Napoli de Gattuso", "Grécia de 2004", 
        "Bayern de Ancelotti"};

    imprimeMatriz(caracteres);

    printf("Exemplo de time que usou: ");
    
    int ex = rand() % 4;

    printf("%s\n", times[ex]);
}

void f343(char caracteres[20][80]){
    
    printf("==Formação 3-4-3==\n");

    linhaDe3(caracteres);

    doisVolantes(caracteres);

    alas(caracteres);

    tresAtacantes(caracteres);
    
    char times[6][30] = {"Chelsea de Conte", "Juventus de Allegri", "Borussia Dortmund de Tuchel", 
        "Inglaterra de Southgate"};
    
    imprimeMatriz(caracteres);

    printf("Exemplo de time que usou: ");
    
    int ex = rand() % 4;

    printf("%s\n", times[ex]);
}

void f451Variacao(char caracteres[20][80]) {

    printf("==Variação da formação 4-5-1==\n");

    linhaDe4(caracteres);

    doisVolantes(caracteres);

    alas(caracteres);

    caracteres[10][50] = '(';
    caracteres[10][51] = '1';
    caracteres[10][52] = '0';
    caracteres[10][53] = ')';

    artilheiro(caracteres);

    imprimeMatriz(caracteres);

    char times[3][20] = {"França de 2006", "Alemanha de 2014"};

    printf("Exemplo de time que usou: ");
    
    int ex = rand() % 2;

    printf("%s\n", times[ex]);

}