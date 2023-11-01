#include<stdio.h>
#include<stdlib.h>

void locGratis(int locacoes [500], int qtdGratis[500]){
    for(int i = 0; i < 500; i++){
        qtdGratis[i] = locacoes [1]/15;
    }
}

main(){
    int locacoes [500], qtdGratis[500];

    for(int i = 0; i < 500; i++){
        locacoes[i] = rand()% 100 + 1;
    }
    locGratis(locacoes, qtdGratis);

    for(int i = 0; i < 20; i++){
        printf("\n %d %d", locacoes[i], qtdGratis[i]);
    }
}