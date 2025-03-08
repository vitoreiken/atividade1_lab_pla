#include <stdio.h>

int main() {
    int tamanho = 3;
    int A[tamanho][tamanho], B[tamanho][tamanho], C[tamanho][tamanho];
    int opcao;

    void leMatriz(int matriz[tamanho][tamanho]) {
        for (int i = 0; i < tamanho; i++) {
            for (int j = 0; j < tamanho; j++) {
                printf("Elemento [%d][%d]: ", i, j);
                scanf("%d", &matriz[i][j]);
            }
        }
    }

    void imprimiMatriz(int matriz[tamanho][tamanho]) {
        for (int i = 0; i < tamanho; i++) {
            for (int j = 0; j < tamanho; j++) {
                printf("%d ", matriz[i][j]);
            }
            printf("\n");
        }
    }

    void multiplicaMatrizes(int A[tamanho][tamanho], int B[tamanho][tamanho], int C[tamanho][tamanho]) {
        for (int i = 0; i < tamanho; i++) {
            for (int j = 0; j < tamanho; j++) {
                C[i][j] = 0;
                for (int k = 0; k < tamanho; k++) {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }
    }

    void subtraiMatrizes(int A[tamanho][tamanho], int B[tamanho][tamanho], int C[tamanho][tamanho]) {
        for (int i = 0; i < tamanho; i++) {
            for (int j = 0; j < tamanho; j++) {
                C[i][j] = A[i][j] - B[i][j];
            }
        }
    }

    void somaMatrizes(int A[tamanho][tamanho], int B[tamanho][tamanho], int C[tamanho][tamanho]) {
        for (int i = 0; i < tamanho; i++) {
            for (int j = 0; j < tamanho; j++) {
                C[i][j] = A[i][j] + B[i][j];
            }
        }
    }

    void transpostaMatriz(int A[tamanho][tamanho], int C[tamanho][tamanho]) {
        for (int i = 0; i < tamanho; i++) {
            for (int j = 0; j < tamanho; j++) {
                C[i][j] = A[j][i];
            }
        }
    }

    printf("Matriz A:\n");
    leMatriz(A);
    printf("\nMatriz B:\n");
    leMatriz(B);

    do {
        printf("\nEscolha uma opcao:\n");
        printf("1 - C = A * B\n");
        printf("2 - C = A - B\n");
        printf("3 - C = A + B\n");
        printf("4 - Transposta de C, sendo C = A * B\n");
        printf("5 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                multiplicaMatrizes(A, B, C);
                printf("\nMatriz C (A * B):\n");
                imprimiMatriz(C);
                break;
            case 2:
                subtraiMatrizes(A, B, C);
                printf("\nMatriz C (A - B):\n");
                imprimiMatriz(C);
                break;
            case 3:
                somaMatrizes(A, B, C);
                printf("\nMatriz C (A + B):\n");
                imprimiMatriz(C);
                break;
            case 4:
                multiplicaMatrizes(A, B, C);
                transpostaMatriz(C, C);
                printf("\nTransposta da matriz C (A * B):\n");
                imprimiMatriz(C);
                break;
            case 5:
                printf("\nVocê saiu.\n");
                break;
            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }
    } while (opcao != 5);

    return 0;
}

