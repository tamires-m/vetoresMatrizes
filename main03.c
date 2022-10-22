#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, X[3] [3], Y[3] [3], resultado;

    printf("\nDigite os nove números inteiros da primeira matriz: ");
    scanf("%d %d %d %d %d %d %d %d %d", &X[0][0], &X[0][1], &X[0][2], &X[1][0], &X[1][1], &X[1][2], &X[2][0], &X[2][1], &X[2][2]);
    printf("\nDigite os nove números da segunda matriz: ");
    scanf("%d %d %d %d %d %d %d %d %d", &Y[0][0], &Y[0][1], &Y[0][2], &Y[1][0], &Y[1][1], &Y[1][2], &Y[2][0], &Y[2][1], &Y[2][2]);

    for(i = 0; i< 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            resultado = X[i][j] + Y[i][j];
        }
    }

    if(resultado == 0){
        printf("\n Matrizes opostas");
    }
    else{
        printf("\n Matrizes nao opostas");}
    return 0;

}