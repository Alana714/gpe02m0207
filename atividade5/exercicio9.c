#include<stdio.h>

main(){

    float tempo, salario, reajuste;

    printf("Digite o salario");
    scanf("%f", &salario);
    printf("Digite o tempo de servico");
    scanf("%f", &tempo);

    if(salario <= 500){
        reajuste = (salario * 0.25) + salario;
    }else if(salario <= 1000){
        reajuste = (salario * 0.20) + salario;
    }else if(salario <= 1500){
        reajuste = (salario * 0.15) + salario;
    }else if(salario <= 2000){
        reajuste = (salario * 0.10) + salario;
    }else{
        reajuste = salario;
    }

    if(tempo < 1){
        printf("Sem bonus");
    }else if(tempo >= 1 && tempo <= 4){
        reajuste += 100;
    }else if(tempo >= 4 && tempo <= 7){
        reajuste += 200;
    }else if(tempo >= 7 && tempo <= 10){
        reajuste += 300;
    }else{
        reajuste += 500;
    }

    if(tempo < 1 && salario >= 2000){
        printf("Nao tem aumento");
    }else{
        printf("Salario com o reajuste: %f", reajuste);
    }

}