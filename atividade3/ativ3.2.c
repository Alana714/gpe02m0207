#include<stdio.h>

main(){

    float altura;

    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    if(altura > 1.8){
        printf("Voce e maior que 1.8m.");
    }else{

    printf("Voce e menor que 1.8m.");
        
    }
}