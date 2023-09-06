#include<stdio.h>

main(){

    float a = 2, b = 8, c = 24, delta, x1, x2;
    
    if(a == 0){
        printf("Nao e equacao de segundo grau");
    }else{

        delta = pow(b,2) - 4 * a * c;

        if(delta < 0){
            printf("Nao existe raiz real");
        }else if(delta == 0){
            x1 = (-b + sqrt(delta)/(2 * a));
            printf("Raiz unica: %f", x1);
        }else{
            x1 = (-b + sqrt(delta)/(2 * a));
            x2 = (-b - sqrt(delta)/(2 * a));
            printf("Duas raizes reais: x1: %f, x2: %f", x1, x2);
        }
    }
}