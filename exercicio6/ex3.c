#include<stdio.h>

main(){

    int prato, sobremesa, bebida, calorias;

    printf("Escolha o codigo do prato: 1 - Vegetariano(180cal), 2 - Peixe(230cal), 3 - Frango(250cal), 4 - Carne(350cal)");
    scanf("%d", &prato);

    switch(prato){
        case 1:
        calorias = 180;

        break;
        case 2:
        calorias = 230;

        break;
        case 3:
        calorias = 250;

        break;
        case 4:
        calorias = 350;
        break;
    }

    printf("Escolha o codigo da sobremesa: 1 - Abacaxi(75cal), 2 - Sorvete diet(110cal), 3 - Mousse diet(170cal), 4 - Mousse chocolate(200cal)");
    scanf("%d", &sobremesa);

    switch(sobremesa){
        case 1:
        calorias += 75;

        break;
        case 2:
        calorias += 110;

        break;
        case 3:
        calorias += 170;

        break;
        case 4:
        calorias += 200;
        break;
    }

    printf("Escolha o codigo da bebida: 1 - Cha(20cal), 2 - Suco de laranja(70cal), 3 - Suco de melao(100cal), 4 - Refri diet(65cal)");
    scanf("%d", &bebida);

    switch(bebida){
        case 1:
        calorias += 20;

        break;
        case 2:
        calorias += 70;

        break;
        case 3:
        calorias += 100;

        break;
        case 4:
        calorias += 65;
        break;
    }

    printf("Calorias: %d", calorias);
}