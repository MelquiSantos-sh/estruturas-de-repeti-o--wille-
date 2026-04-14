#include <stdio.h>

int main() {
    int i = 1;
    int termo = 0;
    int razao = 3;

    printf("PA com 20 termos, razão 3, iniciando em 0:\n\n");

    while (i <= 20) {
        printf("Termo %2d → %d\n", i, termo);
        termo = termo + razao;    // soma a razão para o próximo termo
        i++;
    }

    return 0;
}