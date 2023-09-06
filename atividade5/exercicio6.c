#include<stdio.h>

main(){

    int num;

    printf("Digite o numero:");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("O numero e par");
    }
}