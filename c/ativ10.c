#include<stdio.h>

main(){
    
    float numCarros, totalVendas, salarioFixo, valorCarro, salarioFinal, porcentVendas = 5;

    printf("Digite quantos carros vendeu: ");
    scanf("%f", &numCarros);

    printf("Digite o total de vendas: ");
    scanf("%f", &totalVendas);

    printf("Digite o salario fixo: ");
    scanf("%f", &salarioFixo);

    printf("Comissao por carro vendido: ");
    scanf("%f", &valorCarro);

    salarioFinal = (valorCarro * numCarros) + (totalVendas * porcentVendas) + salarioFixo;

    printf("O salario final e: R$%.2f", salarioFinal);


}