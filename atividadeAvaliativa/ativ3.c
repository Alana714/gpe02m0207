#include<stdio.h>

main(){

        int a, b, c;

        printf("Digite os valores de A, B e C: ");
        scanf("%d %d %d", &a, &b, &c);

        if(a + b > c && a + c > b && c + b > a){
            printf("Esses valores podem formar um triangulo");

            if(a == b && a == c){
                printf("\nE um triangulo equilatero");
            }else if(a != b && a != c && b !=c){
                printf("\nE um triangulo escaleno");
            }else{
                printf("\nE um triangulo isoceles");
            }
        }else{
            printf("Esses valores nao podem formar um triangulo");
        }
}