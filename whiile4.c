#include <stdio.h>

int main() {
    int n, num, i;
    int soma_par = 0, soma_impar = 0;

    printf("Quantos números você vai digitar? ");
    scanf("%d", &n);

    i = 1;
    while (i <= n) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &num);

        if (num % 2 == 0) {
            soma_par += num;      // acumula nos pares
        } else {
            soma_impar += num;    // acumula nos ímpares
        }

        i++;
    }

    printf("\nSoma dos pares:   %d\n", soma_par);
    printf("Soma dos ímpares: %d\n", soma_impar);

    return 0;
}