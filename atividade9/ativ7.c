#include<stdio.h>

main(){

    int vetor[10], maior, menor, posicao;

    for(int i = 0; i < 10; i++){
        printf("Digite os numeros: ");
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    
    for(int i = 0; i < 10; i++){
        printf("%d", vetor[i]);

        if(vetor[i] > maior){
            maior = vetor[i];
            posicao = i;
        }
    }
    printf("\nMaior valor: %d e posicao: %d", maior, posicao);
}