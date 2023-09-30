#include<stdio.h>

main(){
    
    int numFilhos, totalHabitantes = 0, salario100 = 0, somaNumFilhos = 0;
    double salario, mediaSalario, maiorSalario, somaSalario = 0;

    printf("Digite o salario do habitante: ");
    scanf("%lf", &salario);

    while(salario > 0){
        printf("Digite o numero de filhos: ");
        scanf("%d", &numFilhos);

        totalHabitantes++;
        somaNumFilhos += numFilhos;
        somaSalario += salario;

        printf("Digite o salario do habitante: ");
        scanf("%lf", &salario);

        if(salario > maiorSalario){
            maiorSalario = salario;
        }

        if(salario <= 100.00){
            salario100++;
        }

    }

    if(totalHabitantes > 0){
        mediaSalario =  somaSalario / totalHabitantes;
    }else{
        mediaSalario = 0;
    }

    if(totalHabitantes > 0){
        double percentualSalario100 = (double)salario100 / totalHabitantes * 100.0;

        printf("Media do salario da populacao: %.2lf\n", mediaSalario);
        printf("Media do numero de filhos: %.2lf\n", (double)somaNumFilhos / totalHabitantes);
        printf("Maior salario: %.2lf\n", maiorSalario);
        printf("Percentual de pessoas com salario ate R$100,00: %.2lf%%\n", percentualSalario100);
    } 

}