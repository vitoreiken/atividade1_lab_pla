#include <stdio.h>
#include <stdlib.h>

int main() {
    float *decimal;
    char *str;

    decimal = (float*)malloc(sizeof(float));
    printf("Digite um valor decimal: ");
    scanf("%f", decimal);

    str = (char*)malloc(50 * sizeof(char));
    sprintf(str, "%.2f", *decimal);

    printf("Valor decimal: %.2f\n", *decimal);
    printf("Valor em string: %s\n", str);

    free(decimal);
    free(str);

    return 0;
}

