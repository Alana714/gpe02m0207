#include<stdio.h>

main(){

    int a = 800, b = 26, c = 17, d = 800, maior, menor;

    if(a > b && a > c && a > d){
        maior = a;
        printf("O maior valor e: %d", maior);

        if(b < c && b < d){
            menor = b;
            printf("\nO menor valor e: %d", menor);
        }else if(c < d){
            menor = c;
            printf("\nO menor valor e: %d", menor);
        }else{
            menor = d;
            printf("\nO menor valor e: %d", menor);
        }
    }else if(b > a && b > c && b > d){
        maior = b;
        printf("O maior valor e: %d", maior);

        if(a < c && a < d){
            menor = a;
            printf("\nO menor valor e: %d", menor);
        }else if(c < d){
            menor = c;
            printf("\nO menor valor e: %d", menor);
        }else{
            menor = d;
            printf("\nO menor valor e: %d", menor);
        }
    }else if(c > a && c > b && c > d){
        maior = c;
        printf("O maior valor e: %d", maior);

        if(b < a && b < d){
            menor = b;
            printf("\nO menor valor e: %d", menor);
        }else if(a < d){
            menor = a;
            printf("\nO menor valor e: %d", menor);
        }else{
            menor = d;
            printf("\nO menor valor e: %d", menor);
        }
    }else{
        maior = d;
        printf("O maior valor e: %d", maior);

        if(a < b && a < c){
            menor = a;
            printf("\nO menor valor e: %d", menor);
        }else if(b < c){
            menor = b;
            printf("\nO menor valor e: %d", menor);
        }else{
            menor = c;
            printf("\nO menor valor e: %d", menor);
        }
    }
    
}