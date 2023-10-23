#include <stdio.h>

 main() {
    int num;

    printf("Digite um numero positivo: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("O numero deve ser positivo.\n");
    } else {
        printf("Os divisores do numero %d sao: ", num);
        
        for (int i = 1; i <= num; i++) {
            if (num % i == 0) {
                printf("%d", i);

                if (i != num) {
                    printf(", ");
                }
            }
        }

        printf("\n");
    }

}