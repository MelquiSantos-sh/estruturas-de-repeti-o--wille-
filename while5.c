#include <stdio.h>

int main() {
    int i = 1;

    printf("Número | Quadrado | Cubo\n");
    printf("------------------------\n");

    while (i <= 10) {
        printf("  %2d   |   %3d    | %4d\n", i, i*i, i*i*i);
        i++;
    }

    return 0;
}