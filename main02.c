#include <stdio.h>
#include <locale.h>

int main() {

    int soma = 0, soma2 = 0, i, j, matriz[3][3];
    setlocale(LC_ALL, "Portuguese");

    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;
    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;
    matriz[2][0] = 7;
    matriz[2][1] = 8;
    matriz[2][2] = 9;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                soma = soma + matriz[i][j];
            }
        }
    }

    printf("Soma diagonal principal: %d", soma);

    for (int i = 0; i < 3; i++) {
        soma2 = soma2 +  matriz[i][3 - 1 - i];
    }

    printf("\nSoma diagonal secundária: %d", soma2);

    return 0;
}


