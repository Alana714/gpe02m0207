#include<stdio.h>

main(){
    
    float custoFabrica, distribuidor = 0.28, imposto = 0.45, custoFinal;

    printf("Digite o custo de fabrica: ");
    scanf("%f", &custoFabrica);

    custoFinal = (custoFabrica * distribuidor) + (custoFabrica * imposto) + custoFabrica;

    printf("Custo final do veiculo: R$%.2f", custoFinal);
}