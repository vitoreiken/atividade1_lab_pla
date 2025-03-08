#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("testfile.txt", "w");
    // se o arquivo não existir então ele será criado
    fprintf(file, "Texto teste no arquivo de teste.\n");
    fclose(file);
    return 0;
}
