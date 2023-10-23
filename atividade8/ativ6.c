#include <stdio.h>

main() {
    char resposta;
    
    do {
        int ano, mes;
        
        printf("Digite o mes (1-12): ");
        scanf("%d", &mes);
        
        if (mes < 1 || mes > 12) {
            printf("Mes invalido. Digite um numero de 1 a 12.\n");
            continue;
        }
        
        printf("Digite o ano: ");
        scanf("%d", &ano);
        
        if (ano % 400 == 0) {

            int diasNoMes[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
            printf("O mes %d/%d tem %d dias.\n", mes, ano, diasNoMes[mes]);

        } else {

            int diasNoMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
            printf("O mes %d/%d tem %d dias.\n", mes, ano, diasNoMes[mes]);
        }
        
        printf("VOCE DESEJA OUTRAS ENTRADAS (S/?)? ");
        scanf(" %c", &resposta);
    } while (resposta == 'S' || resposta == 's');

}