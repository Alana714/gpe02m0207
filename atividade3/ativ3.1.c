#include<stdio.h>

main(){

    float salario;

    printf("Digite o seu salario: ");
    scanf("%f", &salario);

    if(salario > 1320.00){
        printf("Voce ganha mais que o minimo.");
    }else{

    printf("Voce ganha menos que o minimo.");
        
    }
}