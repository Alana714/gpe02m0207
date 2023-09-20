#include<stdio.h>
main(){
    int N;

    printf("Digite um numero inteiro N: ");
    scanf("%d", &N);
    
    int numero = 1;

    for(int x = 0; x < N; x++){
        printf("%d\n", numero);
        numero += 2;
    }

    return 0;
}