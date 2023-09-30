#include<stdio.h>

main(){

    int voto, candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0, votosNulos = 0, votosBranco = 0;

    printf("Digite o codigo do candidato: ");
    scanf("%d", &voto);

    while (voto != 0) {
        switch (voto) {
            case 1:
                candidato1++;

            break;
            case 2:
                candidato2++;

            break;
            case 3:
                candidato3++;

            break;
            case 4:
                candidato4++;

            break;
            case 5:
                votosNulos++;

            break;
            case 6:
                votosBranco++;

            break;
            default:
                printf("Codigo invalido\n");
            break;
        }

        printf("Digite o codigo do candidato: ");
        scanf("%d", &voto);
    
    }

    printf("\nTotal de votos para o Candidato 1: %d", candidato1);
    printf("\nTotal de votos para o Candidato 2: %d", candidato2);
    printf("\nTotal de votos para o Candidato 3: %d", candidato3);
    printf("\nTotal de votos para o Candidato 4: %d", candidato4);
    printf("\nTotal de votos nulos: %d", votosNulos);
    printf("\nTotal de votos em branco: %d", votosBranco);

}