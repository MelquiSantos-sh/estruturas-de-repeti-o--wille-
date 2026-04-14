#include <stdio.h>

int main() {
    int i = 1;
    int termo = -2;
    int razao = -2;

    printf("PG com 10 termos, razão -2, iniciando em -2:\n\n");

    while (i <= 10) {
        printf("Termo %2d → %d\n", i, termo);
        termo = termo * razao;    // multiplica a razão para o próximo termo
        i++;
    }

    return 0;
}