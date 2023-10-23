#include <stdio.h>

main() {
    int totalHomens = 0, totalMulheres = 0;
    double somaAlturaH = 0.0;
    double somaAlturaM = 0.0;
    double somaPesoH = 0.0;
    double somaPesoM = 0.0;
    double alturaMedia = 0.0;
    double pesoMedio = 0.0;

    for (int i = 1; i <= 10; i++) {
        char nome[50], sexo;
        double altura, peso;

        printf("Informe os dados da pessoa %d:\n", i);
        printf("Nome: ");
        scanf("%s", nome);
        printf("Sexo (M/m para masculino, F/f para feminino): ");
        scanf(" %c", &sexo);
        printf("Altura (em metros): ");
        scanf("%lf", &altura);
        printf("Peso (em quilogramas): ");
        scanf("%lf", &peso);

        if (sexo == 'M' || sexo == 'm') {
            totalHomens++;
            somaAlturaH += altura;
            somaPesoH += peso;
        } else if (sexo == 'F' || sexo == 'f') {
            totalMulheres++;
            somaAlturaM += altura;
            somaPesoM += peso;
        }

        alturaMedia += altura;
        pesoMedio += peso;
    }

    alturaMedia /= 10;
    pesoMedio /= 10;

    printf("Numero de homens: %d\n", totalHomens);
    printf("Numero de mulheres: %d\n", totalMulheres);
    printf("Altura media dos homens: %.2f metros\n", totalHomens > 0 ? somaAlturaH / totalHomens : 0.0);
    printf("Altura media das mulheres: %.2f metros\n", totalMulheres > 0 ? somaAlturaM / totalMulheres : 0.0);
    printf("Altura media do grupo: %.2f metros\n", alturaMedia);
    printf("Peso medio dos homens: %.2f kg\n", totalHomens > 0 ? somaPesoH / totalHomens : 0.0);
    printf("Peso medio das mulheres: %.2f kg\n", totalMulheres > 0 ? somaPesoM / totalMulheres : 0.0);
    printf("Peso medio do grupo: %.2f kg\n", pesoMedio);

}