#include<stdio.h>

main(){

    int valores[6];

    for(int i = 0; i < 6; i++){
        printf("Digite os valores: ");
        scanf("%d", &valores[i]);
    }

    for (int i = 0; i < 6; i++) {
        printf("Valores lidos:%d\n", valores[i]);
    }
    
}
