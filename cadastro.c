#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM 1000

typedef struct{
    char nome[20], email[30], sexo[10], endereco[30];
    int id, vacina;
    double altura;
}Usuario;

void cadastrar(Usuario u[], int indice){
    u[indice].id = rand() % 200;
    fflush(stdin);
    printf("\nDigite o nome do Usuario: ");
    fflush(stdin);
    fgets(u[indice].nome, sizeof(u[indice].nome), stdin);
    fflush(stdin);
    printf("Digite o e-mail do usuário: ");
    fflush(stdin);
    fgets(u[indice].email, sizeof(u[indice].email), stdin);
    fflush(stdin);
    printf("\n\n");

    do {
        printf("Digite o sexo do usuário (Feminino, Masculino ou Indiferente): ");
        fflush(stdin);
        fgets(u[indice].sexo, sizeof(u[indice].sexo), stdin);
    } while (strcmp(u[indice].sexo, "Feminino\n") != 0 &&
             strcmp(u[indice].sexo, "Masculino\n") != 0 &&
             strcmp(u[indice].sexo, "Indiferente\n") != 0);

    printf("Digite o endereço do usuário: ");
    fflush(stdin);
    fgets(u[indice].endereco, sizeof(u[indice].endereco), stdin);

    do {
        printf("Digite a altura do usuário (entre 1 e 2 metros): ");
        scanf("%lf", &u[indice].altura);
    } while (u[indice].altura < 1.0 || u[indice].altura > 2.0);

    do {
        printf("Digite 1 se o usuário foi vacinado, 0 caso contrário: ");
        scanf("%d", &u[indice].vacina);
    } while (u[indice].vacina != 0 && u[indice].vacina != 1);
}

void imprimir(Usuario u[], int totalCadastro){
    if(totalCadastro == 0 ){
        printf("\n\nnao existem Usuarios cadastrados");
    }else{
        for(int i = 0; i < totalCadastro; i++ ){
            printf("Id: %d", u[i].id);
            printf("\nNome: %s", u[i].nome);
            printf("\nEmail: %s", u[i].email);
            printf("\nSexo: %s", u[i].sexo);
            printf("\nEndereco: %s", u[i].endereco);
            printf("\nId: %d", u[i].id);
            printf("\nAltura: %lf", u[i].altura);
            printf("\n\n");
        }
    }
}
void buscarRegistro(Usuario u[], int totalCadastro, const char *email){
    if(totalCadastro == 0){
        printf("\nNao existe cadastros na lista\n");
        return;
    }else{
        for(int i = 0; i < totalCadastro; i++){
            if(strcmp(u[i].email, email) != 0){
                printf("\nNome do registro encontrado: %s", u[i].nome);
                return;
            }
        }
    }
    printf("\nRegistro nao encontrado na lista");
}
void alterarRegistro(Usuario u[], int totalCadastro, int buscarId){
    int opcaoEscolhida;
    if(totalCadastro == 0 ){
        printf("Lista vazia");
        return;
    }else{
        for(int i = 0 ; i < totalCadastro; i++){
            if(u[i].id == buscarId){
                printf("\nNome: %s ", u[i].nome);

                printf("\nAlterar os dados: ");

                printf("Digite 1 para alterar o nome, Digite 2 para alterar o endereco, Digite 3 para alterar o sexo, Digite 4 para alterar o email, Digite 5 para alterar a altura ou Digite 6 para alterar todos os campos");
                scanf("%d", &opcaoEscolhida);
                switch (opcaoEscolhida){
                    case 1: 
                        printf("Alteracao do nome: ");
                         fflush(stdin);
                        fgets(u[i].nome, sizeof(u[i].nome), stdin);
                         fflush(stdin);
                    break;
                    case 2: 
                        printf("Alteracao do endereco: ");
                         fflush(stdin);
                        fgets(u[i].endereco, sizeof(u[i].endereco), stdin);
                         fflush(stdin);
                    break;
                    case 3: 
                        printf("Alteracao do sexo: ");
                         fflush(stdin);
                        fgets(u[i].sexo, sizeof(u[i].sexo), stdin);
                         fflush(stdin);
                    break;
                    case 4:
                        printf("Alteracao do email: ");
                            fflush(stdin);
                            fgets(u[i].email, sizeof(u[i].email), stdin);
                            fflush(stdin);
                    break;
                    case 5:
                        printf("Alteracao da altura: ");
                        scanf("%lf", &u[i].altura);
                    break;
                    case 6:
                        printf("Alteracao do nome: ");
                        fflush(stdin);
                        fgets(u[i].nome, sizeof(u[i].nome), stdin);
                        fflush(stdin);
                        printf("Alteracao do endereco: ");
                         fflush(stdin);
                        fgets(u[i].endereco, sizeof(u[i].endereco), stdin);
                         fflush(stdin);
                        printf("Alteracao do sexo: ");
                         fflush(stdin);
                        fgets(u[i].sexo, sizeof(u[i].sexo), stdin);
                         fflush(stdin);
                         printf("Alteracao do email: ");
                        fflush(stdin);
                        fgets(u[i].email, sizeof(u[i].email), stdin);
                        fflush(stdin);
                        printf("Alteracao da altura: ");
                        scanf("%lf", &u[i].altura);

                }
            }
        }
    }
}

int excluirRegistro(Usuario u[], int totalCadastro, int buscarId){
    int achou;
    for(int i = 0; i < totalCadastro; i++){
            if(u[i].id == buscarId){
                for(int j = i; j < totalCadastro - 1; j++ ){
                    u[j] = u[j + 1];
                }
                achou = 1;
                printf("\nExcluido com sucesso");
                return achou;
            }
        }
        achou  = 0;
        return achou;
}
    


main(){
    Usuario a[TAM];
    int opcao, totalCadastro = 0, buscarId;
    char buscarEmail;

    do{
        printf("\nDigite 1 para cadastrar");
        printf("\nDigite 2 para imprimir os cadastros");
        printf("\nDigite 3 para buscar um cadastro");
        printf("\nDigite 4 para alterar um cadastro");
        printf("\nDigite 5 para excluir um cadastro");
        printf("\nDigite 0 para encerrar o programa");
        scanf("%d", &opcao);
        switch (opcao){
            case 1:
                if(totalCadastro < TAM ){
                    cadastrar(a, totalCadastro);
                    totalCadastro++;
                }else{
                    printf("\n\nLimite maximo de cadastro atingido");
                }
                break;
            case 2:
                imprimir(a, totalCadastro);
                break;
            case 3:
                printf("Digite o email para buscar");
                fgets(buscarEmail, sizeof(buscarEmail), stdin);
                buscarRegistro(a, totalCadastro, buscarEmail);
                break;
            case 4:
                printf("Digite o id para alterar");
                scanf("%d", &buscarId);
                alterarRegistro(a, totalCadastro, buscarId);
                break;
            case 5:
                printf("Digite o id para excluir");
                scanf("%d", &buscarId);
                if(totalCadastro == 0){
                    printf("Lista vazia");
                }else{
                    int res = excluirRegistro(a, totalCadastro, buscarId);
                    if(res == 1){
                        totalCadastro--;
                    }else{
                        printf("Não foi possivel excluir - Usuario nao encontrado");
                    }
                }
 
                break;
        }
    }while(opcao != 0);
}