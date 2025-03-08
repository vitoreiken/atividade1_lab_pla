#include <stdio.h>
#include <stdlib.h>
#define LINHAS 3
#define COLUNAS 3 

int main(int argc, char *argv[])
{
    // declaração de variável ponteiro para ponteiro
    int **mat, **matrizB, **matrizC;

    mat = (int**)malloc(LINHAS * sizeof(int*));
    for(int i = 0; i < LINHAS; i++)
        mat[i] = (int*)malloc(COLUNAS * sizeof(int));

    matrizB = (int**)malloc(LINHAS * sizeof(int*));
    for(int i = 0; i < LINHAS; i++)
        matrizB[i] = (int*)malloc(COLUNAS * sizeof(int));

    matrizC = (int**)malloc(LINHAS * sizeof(int*));
    for(int i = 0; i < LINHAS; i++)
        matrizC[i] = (int*)malloc(COLUNAS * sizeof(int));

    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            mat[i][j] = i + j; 
        }
    }
 
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            matrizB[i][j] = (i + 1) * (j + 1); 
        }
    }

      for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            matrizC[i][j] = mat[i][j] + matrizB[i][j]; 
        }
    }
 
    printf("matriz c (resultado da soma):\n");
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            printf("%d\t", matrizC[i][j]); 
        }
        printf("\n");
    }

    // liberando o espaço de memória
    for(int i = 0; i < LINHAS; i++) {
        free(mat[i]);
        free(matrizB[i]);
        free(matrizC[i]);
    }
    free(mat);
    free(matrizB);
    free(matrizC);

    return 0;
}

