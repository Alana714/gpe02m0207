#include<stdio.h>

float f(){

    float valor, celsius;

    printf("Digite um valor: ");
    scanf("%f", &valor);

    celsius = (valor - 32.0) * (5.0 / 9.0);

    return celsius;
}

main(){

    float resultado = f();
    
    printf("O resultado em celsius e: %.2f", resultado);
}