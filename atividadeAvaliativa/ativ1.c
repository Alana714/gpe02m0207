#include<stdio.h>
#include<math.h>

main(){

    double x, resultado;

    printf("Digite um valor para x: ");
    scanf("%lf", &x);

    if(x > 4){
        
        resultado = (x * 5 + 3) / sqrt(x * x - 16);
        printf("O resultado da funcao f(x) e: %.2lf", resultado);

    }else{

        printf("Nao e possivel calcular a funcao f(x) com este valor, por favor insira um numero maior.");

    }

}