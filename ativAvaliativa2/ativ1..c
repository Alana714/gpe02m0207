#include<stdio.h>

int validaQuantidade();
float calculaSalario(int);
void mostraFinal(float);



void main(){
    int pecas, validador;
    float salarioFinal;

    do{
        pecas = validaQuantidade();
        salarioFinal = calculaSalario(pecas);
        mostraFinal(salarioFinal);
    
        printf("\nDeseja calcular o salario de mais um funcionario? 1 - Sim, 2 - Nao.\n");
        scanf("%d", &validador);
        if(validador != 1 && validador != 2){
            printf("\nNumero invalido. Por favor digite novamente.\n");
            scanf("%d", &validador);
            }

    }while(validador == 1);

        printf("\nSessao encerrada.");
    
    return 0;

}

int validaQuantidade(){
    int quantPecas;
    printf("Digite quantas pecas foram fabricadas neste mes: ");
    scanf("%d", &quantPecas);
    return quantPecas > 0;
}

float calculaSalario(int pecas){
    float salario = 600.00;
    if(pecas <= 50){
        salario = 600.00;
        
    }else if(pecas > 50 && pecas <= 80){
        salario += (pecas - 50) * 0.50; 

    }else if(pecas > 80){
        salario += 30 * 0.5 + (pecas - 80) * 0.75;
    }
    return salario;
}

void mostraFinal(float resultado){

    printf("O salario final e %.2f", resultado);

}

