#include<stdio.h>

main(){

    int vetor[5], maior, menor, pMaior, pMenor;

    for(int i = 0; i < 5; i++){
        printf("Inserir os valores");
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];

    for(int i = 0; i < 5; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
            pMaior = i;
        }
        if(vetor[i] < menor){
            menor = vetor[i];
            pMenor = i;
        }
    }

    printf("Maior: %d - Posicao: %d. \nMenor: %d - Posicao: %d.", maior, pMaior, menor, pMenor);
}