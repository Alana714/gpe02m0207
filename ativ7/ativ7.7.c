#include<stdio.h>

main(){
    char olhos, cabelos, sexo;
    int idade, totalHabitantes = 0, totalEspecifico = 0, porcentagem;
    float salario;

    do{
        totalHabitantes++;
        fflush(stdin);

        do{
            fflush(stdin);
            printf("Digite o sexo: (m ou f) ");
            scanf("%c", &sexo);
            if(sexo != 'm' && sexo != 'f'){
                printf("Opcao invalida. Digite novamente.");
            }

        }while(sexo != 'm' && sexo != 'f');

        do{
            fflush(stdin);
            printf("Digite a cor dos olhos: (v-verde, p-preto, a-azul, c-castanho) ");
            scanf("%c", &olhos);
            if(olhos != 'a' && olhos != 'v' && olhos != 'p' && olhos != 'c'){
                printf("Opcao invalida. Digite novamente.");
            }

        }while(olhos != 'a' && olhos != 'v' && olhos != 'p' && olhos != 'c');

        do{
            fflush(stdin);
            printf("Digite a cor dos cabbelos: (l-loiro, p-preto, r-ruivo, c-castanho) ");
            scanf("%c", &cabelos);
            if(cabelos != 'l' && cabelos != 'p' && cabelos != 'r' && cabelos != 'c'){
                printf("Opcao invalida. Digite novamente.");
            }
            
        }while(cabelos != 'l' && cabelos != 'p' && cabelos != 'r' && cabelos != 'c');

        do{
            fflush(stdin);
            printf("Digite o salario: ");
            scanf("%c", &salario);
            if(salario < 0){
                printf("Valor invalido. Digite novamente.");
            }

        }while(salario < 0);

        do{
            fflush(stdin);
            printf("Digite a idade: ");
            scanf("%d", &idade);
            if(idade < 10 || idade > 100){
                printf("Valor invalido. Digite novamente.");
            }
        }while(idade < 10 || idade > 100);

        if(sexo == 'f' && cabelos =='c' && olhos == 'c' && (idade > 18 && idade < 35)){
            totalEspecifico++;
        }


        printf("Deseja registrar um novo habitante? 2 Sim, -1 Nao");
        scanf("%d", &idade);
    }while(idade != -1);

    porcentagem = totalEspecifico/totalHabitantes * 100;

     printf("\nTotal de habitantes cadastrados: %d", totalHabitantes);
     printf("\nTotal de pessoas com caracteristicas especificas: %d", totalEspecifico);
     printf("\nPorcentagem de pessoas com caracteristicas especificas: %d", porcentagem);


}