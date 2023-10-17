#include<stdio.h>

char* nomeMes(int n);

main() {
    int n;

    printf("Digite um numero de 1 a 12: ");
    scanf("%d", &n);

    char* mes = nomeMes(n);

    printf("O mes e: %s", mes);

}

char* nomeMes(int n) {
    char* mes;

    switch (n) {
        case 1:
            mes = "Janeiro, 31 dias";
            break;
        case 2:
            mes = "Fevereiro, 28 ou 29 dias";
            break;
        case 3:
            mes = "Março, 31 dias";
            break;
        case 4:
            mes = "Abril, 30 dias";
            break;
        case 5:
            mes = "Maio, 31 dias";
            break;
        case 6:
            mes = "Junho, 30 dias";
            break;
        case 7:
            mes = "Julho, 31 dias";
            break;
        case 8:
            mes = "Agosto, 31 dias";
            break;
        case 9:
            mes = "Setembro, 30 dias";
            break;
        case 10:
            mes = "Outubro, 31 dias";
            break;
        case 11:
            mes = "Novembro, 30 dias";
            break;
        case 12:
            mes = "Dezembro, 31 dias";
            break;
        
        default:
            mes = "Numero invalido";
            break;
    }

    return mes;
}
