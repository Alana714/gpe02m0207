#include<stdio.h>

main(){

    int numCidades = 200, maiorIndice = -1, menorIndice = 999, totalVeiculos = 0, totalAcidentes = 0, totalCidadesRS = 0;
    char cidadeMaiorIndice[50], cidadeMenorIndice[50];
    float mediaVeiculos, mediaAcidentesRS;

    for(int i = 0; i < numCidades; i++){
        char estado[2];
        int veiculos, acidentes;

        printf("Digite o codigo da cidade: ");
        int codigo;
        scanf("%d", &codigo);

        printf("Digite o estado da cidade: ");
        scanf("%s", estado);

        printf("Digite o numero de veiculos de passeio em 1992: ");
        scanf("%d", &veiculos);

        printf("Digite o numero de acidentes de transito com vitimas em 1992: ");
        scanf("%d", &acidentes);

        totalVeiculos += veiculos;
        totalAcidentes += acidentes;

        if (estado[0] == 'R' && estado[1] == 'S') {
            totalCidadesRS++;
            mediaAcidentesRS += acidentes;
        }

        float indice = (float)acidentes / veiculos;
        if (indice > (float)maiorIndice) {
            maiorIndice = indice;
            strcpy(cidadeMaiorIndice, estado);
        }

        if (indice < (float)menorIndice) {
            menorIndice = indice;
            strcpy(cidadeMenorIndice, estado);
        }
    }

    mediaVeiculos = (float)totalVeiculos / numCidades;
    mediaAcidentesRS /= totalCidadesRS;

    printf("Maior indice de acidentes: %f (Cidade: %s)\n", maiorIndice, cidadeMaiorIndice);
    printf("Menor indice de acidentes: %f (Cidade: %s)\n", menorIndice, cidadeMenorIndice);
    printf("Media de veiculos nas cidades: %.2f\n", mediaVeiculos);
    printf("Media de acidentes com vitimas nas cidades do Rio Grande do Sul: %.2f\n", mediaAcidentesRS);

}