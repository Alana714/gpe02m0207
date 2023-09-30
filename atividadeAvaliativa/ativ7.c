#include<stdio.h>

main(){

    int alunos = 30;
    double n1, n2, n3, mediaGeral = 0.00;

    for(int i = 0; i < alunos; i++){

        printf("Digite as notas dos alunos: ");
        scanf("%lf %lf %lf", &n1, &n2, &n3);

        double mediaPonderada = (n1 * 2 + n2 * 4 + n3 * 4)/ 10;
        mediaGeral += mediaPonderada;

        if(mediaPonderada >= 7.0){
            printf("Media Ponderada: %.2lf: Aprovado", mediaPonderada);
        }else{
            printf("Media Ponderada: %.2lf: Reprovado", mediaPonderada);
        }

    }

    mediaGeral /= alunos;
    printf("\nMedia geral da turma: %.2lf\n", mediaGeral);
}