#include<stdio.h>

main(){
    int N;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", N);
    for (N = N; N >= 0; N --){
        printf("%d", N);
    }
    return 0;
}