#include<stdio.h>

main(){
    int totalUsuarios = 50, elevadorA = 0, elevadorB = 0, elevadorC = 0, contadorMatutino = 0, contadorVespertino = 0, contadorNoturno = 0;
    char elevador, periodo;

    for (int i = 0; i < totalUsuarios; i++) {
        printf("Para o usuario %d:\n", i + 1);
        printf("Qual elevador voce utiliza mais frequentemente (A/B/C)? ");
        scanf(" %c", &elevador);

        printf("Qual periodo voce utiliza o elevador (M/V/N)? ");
        scanf(" %c", &periodo);

        switch(elevador) {
            case 'A':
                elevadorA++;
                break;
            case 'B':
                elevadorB++;
                break;
            case 'C':
                elevadorC++;
                break;
            default:
                printf("Elevador invalido.\n");
                i--;
        }

        switch(periodo) {
            case 'M':
                contadorMatutino++;
                break;
            case 'V':
                contadorVespertino++;
                break;
            case 'N':
                contadorNoturno++;
                break;
            default:
                printf("Periodo invalido.\n");
                i--;
        }
    }

    char periodo_mais_usado;
    if (contadorMatutino >= contadorVespertino && contadorMatutino >= contadorNoturno) {
        periodo_mais_usado = 'M';
    } else if (contadorVespertino >= contadorMatutino && contadorVespertino >= contadorNoturno) {
        periodo_mais_usado = 'V';
    } else {
        periodo_mais_usado = 'N';
    }

    char elevador_mais_frequentado;
    if (elevadorA >= elevadorB && elevadorA >= elevadorC) {
        elevador_mais_frequentado = 'A';
    } else if (elevadorB >= elevadorA && elevadorB >= elevadorC) {
        elevador_mais_frequentado = 'B';
    } else {
        elevador_mais_frequentado = 'C';
    }

    int total_periodos = contadorMatutino + contadorVespertino + contadorNoturno;
    float diferenca_percentual = ((float)(total_periodos - contadorNoturno) / total_periodos) * 100;
    float percentagem_elevador_media = ((float) (totalUsuarios - elevadorA - elevadorB - elevadorC) / totalUsuarios) * 100;

    printf("\nPeriodo mais usado de todos: %c (Elevador %c)\n", periodo_mais_usado, elevador_mais_frequentado);
    printf("Elevador mais frequentado: %c (Periodo %c)\n", elevador_mais_frequentado, periodo_mais_usado);
    printf("Diferenca percentual entre o mais usado e o menos usado: %.2f%%\n", diferenca_percentual);
    printf("Percentagem do elevador de media utilizacao sobre o total de servicos prestados: %.2f%%\n", percentagem_elevador_media);

}