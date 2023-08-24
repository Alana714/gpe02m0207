#include<stdio.h>

main(){
    
    double raio, area, pi = 3.1415;

    printf("Digite o valor do raio: ");
    scanf("%lf", &raio);

    area = pi * (raio * raio);

    printf("A area do circulo e %lf", area);
}