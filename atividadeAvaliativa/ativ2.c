#include<stdio.h>

main(){

    double alturaChico = 1.50, alturaZe = 1.10, crescimChico = 0.02, crescimZe = 0.03;
    int anos = 0;

    while(alturaZe <= alturaChico){
        alturaChico += crescimChico;
        alturaZe += crescimZe;
        anos++;
    }

    printf("Serao necessarios %d anos para que Ze seja maior que Chico", anos);

}