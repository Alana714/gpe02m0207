#include<stdio.h>

main(){

int peso;

    printf("Digite o seu peso: ");
    scanf("%d", &peso);

    if(peso > 60){
        printf("Voce pesa mais que 60kg.");
    }else{

        printf("Voce pesa menos que 60kg.");
        
    }
}