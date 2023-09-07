#include<stdio.h>

main(){

    int numero; 
    printf("Digite um numero");
    scanf("%d", &numero);

    if(numero == 5){
        printf("%d", numero);
    }else if(numero == 200){
        printf("%d", numero);
    }else if(numero == 400){
        printf("%d", numero);
    }else if(numero > 500 && numero < 1000){
        printf("Esta no intervalo entre 500 e 1000");
    }else{
        printf("Esta fora dos escopos anteriores");
    }
    
}