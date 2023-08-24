#include<stdio.h>

main(){

    int anos, meses, dias, idadeDias;

    printf("Digite a sua idade em anos, meses e dias: ");
    scanf("%d %d %d", &anos, &meses, &dias);

    idadeDias = (anos * 365) + (meses * 30) + (dias);

    printf("Dias vividos: %d", idadeDias);
    
}