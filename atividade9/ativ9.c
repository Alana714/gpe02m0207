#include<stdio.h>

main(){

    int vetor[5], num, contador = 0;

    do{
        printf("Digite um numero par: ");
        scanf("%d", &num);
        if(num % 2 == 0){
            vetor[contador] = num;
            contador++;
        }else{
            printf("Numero invalido. ");
        }

    }while(contador < 5);

    for(int i = 0; i < 5; i++){
        printf("%d", vetor[i]);
    }

    for(int i = 4; i >= 0; i--){
        printf("%d", vetor[i]);
    }
}


