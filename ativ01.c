#include<stdio.h>

main() {

    char nome[50];
    int idade;
    char matricula[20];
    char endereco[50];
    char curso[40];
    int periodo;
    char disciplinas[100];


    printf("Informacoes de cadastro.");
    printf("\nDigite o seu nome: ");
    fgets(nome, 50, stdin);

    printf("\nDigite a sua idade: ");
    scanf("%d", &idade);
    fflush(stdin);

    printf("\nDigite a sua matricula: ");
    fgets(matricula, 20, stdin);

    printf("\nDigite o seu endereco: ");
    fgets(endereco, 50, stdin);

    printf("\nDigite o seu curso: ");
    fgets(curso, 40, stdin);

    printf("\nDigite o seu periodo: ");
    scanf("%d", &periodo);
    fflush(stdin);

    printf("\nDigite as suas disciplinas: ");
    fgets(disciplinas, 50, stdin);

    printf("Os dados inderidos sao: Nome: %s, Idade: %d, Matricula: %s, Endereco:%s, Curso: %s, Periodo: %d, Disciplinas: %s.", nome, idade, matricula, endereco, curso, periodo, disciplinas);

}