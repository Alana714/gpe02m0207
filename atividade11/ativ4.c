#include<stdio.h>

float cilindro(float raio, float altura) {
    float pi = 3.141592;
    float volume = pi * (raio * raio) * altura;
    return volume;
}

main() {
    float raio, altura;

    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);

    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);

    float volume = cilindro(raio, altura);

    printf("O volume do cilindro e: %.2f", volume);

}