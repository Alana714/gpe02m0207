#include<stdio.h>

main(){
    
    float salarioAtual, porcentReajuste, novoSalario, reajusteFinal;

    printf("Digite o salario atual: ");
    scanf("%f", &salarioAtual);

    printf("Digite a porcentagem de reajuste: ");
    scanf("%f", &porcentReajuste);

    reajusteFinal = porcentReajuste/100;

    novoSalario = (salarioAtual * reajusteFinal) + salarioAtual;

    printf("Novo salario: R$%.2f", novoSalario);
}