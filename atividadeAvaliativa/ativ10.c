#include<stdio.h>
#include<string.h>

main(){

    int numCidades = 2, totalVeiculos = 0, totalAcidentes = 0, totalCidadesRS = 0;
    char cidadeMaiorIndice[50], cidadeMenorIndice[50];
    float mediaVeiculos, mediaAcidentesRS, maiorIndice = -1, menorIndice = 999;

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

        if (strcmp(estado, "RS") == 0) {
            totalCidadesRS++;
            mediaAcidentesRS += acidentes;
        }

        float indice = (float)acidentes / veiculos;
        if (indice > maiorIndice) {
            maiorIndice = indice;
            strcpy(cidadeMaiorIndice, estado);
        }

        if (indice < menorIndice) {
            menorIndice = indice;
            strcpy(cidadeMenorIndice, estado);
        }
    }

    if (totalCidadesRS > 0) {
        mediaAcidentesRS /= totalCidadesRS;
    }

    mediaVeiculos = (float)totalVeiculos / numCidades;
    

    printf("Maior indice de acidentes: %.2f (Cidade: %s)\n", maiorIndice, cidadeMaiorIndice);
    printf("Menor indice de acidentes: %.2f (Cidade: %s)\n", menorIndice, cidadeMenorIndice);
    printf("Media de veiculos nas cidades: %.2f\n", mediaVeiculos);
    printf("Media de acidentes com vitimas nas cidades do Rio Grande do Sul: %.2f\n", mediaAcidentesRS);

}
