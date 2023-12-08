#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Veiculo{
    char proprietario[50], combustivel[10], modelo[20], cor[15], placaLetra[10];
    int chassi, ano, placaNum;
    struct Veiculo *prox;
}Veiculo;

Veiculo* criarListaVazia(){
    return NULL;
}

Veiculo* criarVeiculo(){
    Veiculo *novoVeiculo = (Veiculo*)malloc(sizeof(Veiculo));
    if(novoVeiculo == NULL){
        printf("Erro de alocacao de memoria");
        exit(EXIT_FAILURE);
    }
    novoVeiculo->prox = NULL;
    return novoVeiculo;
}

Veiculo* registrar(Veiculo *lista){
    Veiculo *novoVeiculo = criarVeiculo();
    fflush(stdin);
    printf("\nDigite o nome do proprietario do veiculo: ");
    fgets(novoVeiculo->proprietario, sizeof(novoVeiculo->proprietario), stdin);
    fflush(stdin);

    printf("Digite o combustivel utilizado no veiculo (Alcool, Diesel ou Gasolina): ");
    fgets(novoVeiculo->combustivel, sizeof(novoVeiculo->combustivel), stdin);
    fflush(stdin);

    printf("Digite o modelo do veiculo: ");
    fgets(novoVeiculo->modelo, sizeof(novoVeiculo->modelo), stdin);
    fflush(stdin);

    printf("Digite a cor do veiculo: ");
    fgets(novoVeiculo->cor, sizeof(novoVeiculo->cor), stdin);
    fflush(stdin);

    printf("Digite o numero do chassi do veiculo: ");
    scanf("%d", &novoVeiculo->chassi);
    fflush(stdin);

    printf("Digite o ano do veiculo: ");
    scanf("%d", &novoVeiculo->ano);
    fflush(stdin);

    printf("Digite as tres primeiras letras da placa do veiculo (Maiusculas): ");
    fgets(novoVeiculo->placaLetra, sizeof(novoVeiculo->placaLetra), stdin);
    fflush(stdin);

    printf("Digite os quatro ultimos digitos da placa do veiculo: ");
    scanf("%d", &novoVeiculo->placaNum);
    fflush(stdin);
    
    if(lista == NULL){
        return novoVeiculo;
    }else{
        Veiculo* atual = lista;
        while(atual->prox != NULL){
            atual = atual->prox;
        }
        atual->prox = novoVeiculo;
        return lista;
    }
}

void verifAnoCombust(Veiculo *lista){
    Veiculo *atual = lista;
    if(atual == NULL){
        printf("Lista vazia.\n");
        return;
    }else{
        while(atual != NULL){          
           if(atual->ano >= 2010 && strncmp("Diesel", atual->combustivel, 6) == 0){
                fflush(stdin);
                printf("Proprietario: %s", atual->proprietario);            
                printf("\n");
                atual = atual->prox;
            }else{
                atual = atual->prox;
            }
        }
    }

}

void verifPlacas(Veiculo *lista){
    Veiculo *atual = lista;
    if(atual == NULL){
        printf("Lista vazia.\n");
        return;
    }else{
        while(atual != NULL){      
            int sobra = atual->placaNum % 10;    
           if(atual->placaLetra[0] == 'J' && (sobra == 0 || sobra == 2 || sobra == 4 || sobra == 7)){
                fflush(stdin);
                printf("Proprietario: %s", atual->proprietario);            
                printf("Placa: %s%d", atual->placaLetra, atual->placaNum);            
                printf("\n");
                atual = atual->prox;            
        }else{
                atual = atual->prox;
            }
        }
    }
    
}

void verifModCOr(Veiculo *lista){
  Veiculo *atual = lista;
    if(atual == NULL){
        printf("Lista vazia.\n");
        return;
    }else{
        while(atual != NULL){          
           if(atual->placaLetra[1] == 'A' || atual->placaLetra[1] == 'E' || atual->placaLetra[1] == 'I' || atual->placaLetra[1] == 'O' || atual->placaLetra[1] == 'U'){
                int soma = 0;
                while(atual->placaNum > 0){
                    int digito = atual->placaNum % 10;
                    soma += digito;
                    atual->placaNum /= 10;
                }
                if(soma % 2 == 0){
                printf("Modelo do veiculo: %s", atual->modelo);
                printf("Cor do veiculo: %s\n", atual->cor);
                }
                atual = atual->prox;
            }else{
                atual = atual->prox;
            }
        }
    }  
}

void trocarProp(Veiculo *lista, int chassiBusca){  
  Veiculo *atual = lista;
    if(atual == NULL){
        printf("Lista vazia.\n");
        return;
    }else{
        while(atual != NULL){ 
            int numZero = 0;
            if(atual->chassi == chassiBusca){
                int placa = atual->placaNum;
                int primDigito = placa / 1000;         
                do{
                    int digito = placa % 10;
                    if(digito == 0){
                        numZero++;
                    }
                    placa /= 10;
                }while(placa > 0);

                if(primDigito < 1 ){
                    numZero++;
                }

                if(numZero > 0){
                        fflush(stdin);
                        printf("Nao e possivel alterar o proprietario.\n");
                        
                }else{
                        fflush(stdin);
                        printf("Alterar o proprietario: ");
                        fflush(stdin);
                        fgets(atual->proprietario, sizeof(atual->proprietario), stdin);
                        printf("Proprietario alterado com sucesso!\n");
                        fflush(stdin);
                    }
                    return;                 
                }
            atual = atual->prox;
        }
    }
    
}


void main(){ 
    Veiculo *lista = criarListaVazia();
    int opcao, chassiBusca;

    do{
        printf("\nEscolha uma das opcoes a seguir:");
        printf("\n1 - Registrar um veiculo.");
        printf("\n2 - Listar proprietarios cujos carros sao do ano de 2010 ou posterior e movidos a diesel");
        printf("\n3 - Listar placas que comecem com 'J' e terminem com 0, 2, 4 ou 7.");
        printf("\n4 - Listar modelo e a cor dos veiculos cujas placas possuem como segunda letra uma vogal e cuja soma dos numeros seja par.");
        printf("\n5 - Trocar proprietario para carros com placa que nao possui digito 0");
        printf("\n0 - Sair");
        printf("\n\n");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                lista = registrar(lista);
            break;
            case 2:
                verifAnoCombust(lista);
            break;
            case 3:
                verifPlacas(lista);
            break;
            case 4:
                verifModCOr(lista);
            break;
            case 5:
                printf("Digite o numero do chassi do veiculo para alterar o proprietario: ");
                scanf("%d", &chassiBusca);
                trocarProp(lista, chassiBusca);
            break;
        }
    }while(opcao != 0);

    Veiculo *atual = lista;
    while (atual != NULL) {
        Veiculo *temp = atual;
        atual = atual->prox;
        free(temp);
    }
}