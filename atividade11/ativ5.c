#include <stdio.h>

float esfera(float raio) {
    float pi = 3.141592;
    float volume = (4.0 / 3.0) * pi * (raio * raio * raio);
    return volume;
}

main() {
    float raio;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    float volume = esfera(raio);

    printf("O volume da esfera e: %.2f", volume);

}