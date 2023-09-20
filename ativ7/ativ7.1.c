#include<stdio.h>

main(){
    int N, cont;

    printf("Digite um numero inteiro positivo N: ");
    scanf("%d", &N);

    for(cont = 0; cont <= N; cont++){
        printf("%d", cont);

    }

    return 0;
}