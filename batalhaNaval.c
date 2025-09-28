#include <stdio.h>

int main() {
    char *coluna[10] = {"A","B","C","D","E","F","G","H","I","J"};
    int linha[10] = {1 , 2 , 3 , 4 , 5 , 6, 7, 8 , 9 , 10};
    int matriz[10][10] = {0};

    // navio 1
    int linha1 = 2;
    int coluna_inicio1 = 5;
    for (int i = 0; i < 3; i++) {
        matriz[linha1][coluna_inicio1 + i] = 3;
    }

    // navio 2
    int coluna2 = 1;
    int linha_inicio2 = 5;
    for (int i = 0; i < 3; i++) {
        matriz[linha_inicio2 + i][coluna2] = 3;
    }

    // navio 3
    int linha3 = 5;
    int coluna_inicio3 = 5;
    for (int i = 0; i < 3; i++) {
        matriz[linha3 + i][coluna_inicio3 + i] = 3;
    }

    // navio 4
    int coluna3 = 3;
    int linha_inicio3 = 4;
    for (int i = 0; i < 3; i++) {
        matriz[coluna3 - i][linha_inicio3 - i] = 3;
    }

    printf(" TABULEIRO DE BATALHA NAVAL \n");
    printf("   ");
    for (int i = 0; i < 10; i++) {
        printf("%s ", coluna[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%2d ", linha[i]);
        for (int j = 0; j < 10; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
