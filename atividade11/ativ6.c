#include<stdio.h>

float valor(float peso, float altura){
    float imc;

    imc = peso / (altura * altura);
    return imc;
}

int main(){

    float peso, altura;

    printf("Digite o peso: ");
    scanf("%f", &peso);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    float imc = valor(peso, altura);

    printf("O IMC e: %.2f", imc);
}