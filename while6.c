#include <stdio.h>

int main() {
    int i = 1, num, contador = 0;
    float soma = 0, media;

    while (i <= 15) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &num);

        if (num > 10) {
            soma += num;       // acumula a soma
            contador++;        // conta quantos são maiores que 10
        }

        i++;
    }

    if (contador > 0) {
        media = soma / contador;
        printf("\nQuantidade de números maiores que 10: %d\n", contador);
        printf("Soma: %.2f\n", soma);
        printf("Média: %.2f\n", media);
    } else {
        printf("\nNenhum número foi maior que 10!\n");
    }

    return 0;
}