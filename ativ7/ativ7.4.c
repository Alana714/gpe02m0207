#include<stdio.h>

main(){
    int contador = 0;
    int numero = 1;

    printf("Os cinco primeiros numeros multiplos de 3 maiores que 0 sao:\n");

    while(contador < 5){
        if(numero % 3 == 0){
            printf("%d\n", numero);
            contador++;
        }
        numero++;
    }

    return 0;
}