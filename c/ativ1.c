#include<stdio.h>

main(){

    int num1, num2, soma, mult;
    float sub, div;

    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);

    soma = num1 + num2;
    mult = num1 * num2;
    sub = num1 - num2;
    div = num1 / num2;

    printf("Soma: %d", soma);
    printf("\nMultiplicacao: %d", mult);
    printf("\nSubtracao: %.2f", sub);
    printf("\nDivisao: %.2f", div);
}