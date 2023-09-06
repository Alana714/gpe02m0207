#include<stdio.h>

main(){

    int idade, tempoServico;

    printf("Digite a idade");
    scanf("%d", &idade);
    printf("Digite o tempo de servico");
    scanf("%d", &tempoServico);

    if(idade >= 65 || tempoServico >= 30 ||(idade >= 60 && tempoServico >= 25)){
        printf("Pode se aposentar");
    }else{
        printf("Nao pode se aposentar");
    }
}