#include <stdlib.h>
#include <stdio.h>

int leituraNumero(){
    printf("escolha o número de asteriscos (de 1 a 100): ");
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

void asteriscoSimples(char caracteres[20][80], int n){
    
    int linha;
    int coluna;

    for(int i = 0; i < n; i++){
        do{
            linha = rand() % (18 - 1 + 1) + 1;
            coluna = rand() % (78 - 1 + 1) + 1;
        }while(caracteres[linha][coluna] == '*');

        caracteres[linha][coluna] = '*';
    }
    
}

void soma(char caracteres[20][80], int n){
    int linha;
    int coluna;

    for(int i = 0; i < n; i++){
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
}

void x(char caracteres[20][80], int n){
    int linha;
    int coluna;

    for(int i = 0; i < n; i++){
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
}

void aleatorio(char caracteres[20][80], int n){
    

    for(int i = 0; i < n; i++){
        int nFigura = rand() % 2;
        switch(nFigura){
            case 0:
                
                break;
            
            default:
                break;
        }
    }


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

            asteriscoSimples(caracteres, n);
            break;

        case 2:
            n = leituraNumero();
            soma(caracteres, n);
            break;

        case 3:
            n = leituraNumero();
            x(caracteres, n);
            break;

        case 4:
            n = leituraNumero();
            aleatorio(caracteres, n);
            break;

        case 5:
            //especial();
            break;

        default:
            printf("Entrada invalida");

    }

    imprimeMatriz(caracteres);





  

}