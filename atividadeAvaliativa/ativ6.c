#include<stdio.h>

main(){

    float x, y;

    printf("Digite as coordenadas do ponto(x, y): ");
    scanf("%f %f", &x, &y);

    if(x == 0 && y == 0){
        printf("Origem");
    }else if(x == 0){
        printf("Eixo Y");
    }else if(y == 0){
        printf("Eixo X");
    }else if(x > 0 && y > 0){
        printf("Primeiro Quadrante");
    }else if(x < 0 && y > 0){
        printf("Segundo Quadrante");
    }else if(x < 0 && y < 0){
        printf("Terceiro Quadrante");
    }else{
        printf("Quarto Quadrante");
    }

}