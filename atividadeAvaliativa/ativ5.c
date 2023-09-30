#include<stdio.h>
#include<math.h>

main(){

    int x1, x2, y1, y2;

    printf("Digite os valores do primeiro ponto p1(x1, y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Digite os valores do segundo ponto p2(x2, y2): ");
    scanf("%d %d", &x2, &y2);

    double distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("A distancia entre os dois pontos e de: %.4lf", distancia);

}