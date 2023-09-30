#include<stdio.h>

main(){

    int a, b, c;

    printf("Digite os valores de A, B e C: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a + b > c && a + c > b && c + b > a){
        printf("Esses valores podem formar um triangulo");

        int a2 = a * a;
        int b2 = b * b;
        int c2 = c * c;

        if(a2 + b2 == c2 || a2 + c2 == b2 || c2 + b2 == a2){
            printf("\nE um triangulo retangulo");
        }else if(a2 + b2 < c2 || a2 + c2 < b2 || c2 + b2 < a2){
            printf("\nE um triangulo obtusangulo");
        }else{
            printf("\nE um triangulo acutangulo");
        }
    }else{
        printf("Esses valores nao podem formar um triangulo");
    }
}