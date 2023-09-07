#include<stdio.h>

main(){

    int lanche, quantidade;
    float valor;

    printf("Digite o codigo do item pedido: 100-Cachorro quente, 101-Bauru simples, 102-Bauru c/ovo, 103-Hamburger, 104-Cheeseburger: ");
    scanf("%d", &lanche);

    switch(lanche){
        case 100:
        valor = 10.10;

        break;
        case 101:
        valor = 8.3;

        break;
        case 102:
        valor = 8.5;

        break;
        case 103:
        valor =12.5;

        break;
        case 104:
        valor = 13.25;
        break;
    }

    printf("Digite a quantidade do item pedido: ");
    scanf("%d", &quantidade);

    switch(quantidade){
        case 1:
        valor = valor;

        break;
        case 2:
        valor *= 2;

        break;
        case 3:
        valor *= 3;

        break;
        case 4:
        valor *= 4;

        break;
        case 5:
        valor *= 5;
        break;
    }

    printf("O valor total sera: R$%.2f", valor);

}