#include <stdio.h>

main() {
    int total_respostas = 100, contador_otimo = 0, contador_bom = 0, contador_regular = 0, contador_ruim = 0, contador_pessimo = 0, soma_idades_ruim = 0;
    int idade_ruim_mais_velho = 0, idade_otimo_mais_velho = 0;

    for (int i = 0; i < total_respostas; i++) {
        char nota;
        int idade;

        printf("Resposta %d:\n", i + 1);
        printf("Idade: ");
        scanf("%d", &idade);
        printf("Nota (A/B/C/D/E): ");
        scanf(" %c", &nota);

        switch (nota) {
            case 'A':
                contador_otimo++;
                if (idade > idade_otimo_mais_velho) {
                    idade_otimo_mais_velho = idade;
                }
                break;
            case 'B':
                contador_bom++;
                break;
            case 'C':
                contador_regular++;
                break;
            case 'D':
                contador_ruim++;
                soma_idades_ruim += idade;
                if (idade > idade_ruim_mais_velho) {
                    idade_ruim_mais_velho = idade;
                }
                break;
            case 'E':
                contador_pessimo++;
                if (idade > idade_ruim_mais_velho) {
                    idade_ruim_mais_velho = idade;
                }
                break;
            default:
                printf("Nota invalida. Tente novamente.\n");
                i--;
                break;
        }
    }

    printf("Quantidade de respostas 'Otimo': %d\n", contador_otimo);

    float diferenca_percentual = (float)(contador_bom - contador_regular) / total_respostas * 100;
    printf("Diferença percentual entre respostas 'Bom' e 'Regular': %.2f%%\n", diferenca_percentual);

    float media_idades_ruim = (float)soma_idades_ruim / contador_ruim;
    printf("Media de idade das pessoas que responderam 'Ruim': %.2f\n", media_idades_ruim);

    float percentagem_pessimo = (float)contador_pessimo / total_respostas * 100;
    printf("Percentagem de respostas 'Pessimo': %.2f%%\n", percentagem_pessimo);

    printf("Maior idade que escolheu 'Pessimo': %d\n", idade_ruim_mais_velho);

    int maior_idade_otimo = idade_otimo_mais_velho;
    int diferenca_idades = maior_idade_otimo - idade_ruim_mais_velho;
    printf("Diferença de idade entre a maior idade que respondeu 'Otimo' e a maior idade que respondeu 'Ruim': %d\n", diferenca_idades);

}