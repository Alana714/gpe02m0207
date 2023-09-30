#include<stdio.h>

main(){

    int vetor[10], pares;

    for(int i = 0; i < 10; i++;){
        printf("Digite os numeros: ");
        scanf("%d", &vetor[i]);
        if(vetor[i] % 2 == 0){
            pares++;
        }
    }

    printf("A quantidade de pares existentes no vetor e: %d", pares);
}