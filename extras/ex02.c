#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];

    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove os "\n" que a função fgets coloca
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Busca pela substring na primeira string (antes da concatenação)
    if (strstr(str1, str2) != NULL) {  
        printf("A segunda string está presente na primeira string.\n");
    } else {
        printf("A segunda string não está presente na primeira string.\n");
    }

    // Concatenação das strings
    strcat(str1, str2);
    printf("String concatenada: %s\n", str1);

    // Calcula o comprimento da string concatenada
    printf("Comprimento da string concatenada: %lu\n", strlen(str1));

    return 0;
}


