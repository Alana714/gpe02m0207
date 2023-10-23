#include <stdio.h>

main() {

    int n;

    printf("Digite um numero inteiro maior ou igual a zero: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("O numero deve ser maior ou igual a zero.\n");
    } else {
        int termo1 = 0, termo2 = 1, proxTermo;

        if (n == 0) {
            printf("O termo %d da sequencia de Fibonacci e: %d\n", n, termo1);
        } else if (n == 1) {
            printf("O termo %d da sequencia de Fibonacci e: %d\n", n, termo2);
        } else {
            for (int i = 2; i <= n; i++) {
                proxTermo = termo1 + termo2;
                termo1 = termo2;
                termo2 = proxTermo;
            }

            printf("O termo %d da sequencia de Fibonacci e: %d\n", n, termo2);
        }
    }

}