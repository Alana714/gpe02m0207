#include<stdio.h>

main(){
    int contador = 0;
    int numero = 2;
    int soma = 0;

    printf("A soma dos 50 primeiros pares e: \n");

    while(contador < 50){
        soma += numero;
        numero += 2;
        contador ++;

    }
    printf("%d\n", soma);

    return 0;
    
}