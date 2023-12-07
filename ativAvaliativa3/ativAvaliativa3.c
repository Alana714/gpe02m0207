#include<stdio.h>
#include<stdlib.h>

typedef struct Produto{
    int codigo, quantidade;
    char descricao[50];
    float valor;
    struct Produto *prox;
}Produto;

Produto* criarListaVazia(){
    return NULL;
}

Produto* criarProduto(){
    Produto *novoProduto = (Produto*)malloc(sizeof(Produto));
    if(novoProduto == NULL){
        printf("Erro de alocacao de memoria");
        exit(EXIT_FAILURE);
    }
    novoProduto->prox = NULL;
    return novoProduto;
}

Produto* adicionar(Produto *lista){
    Produto *novoProduto = criarProduto();
    printf("\nDigite o codigo do produto: ");
    scanf("%d", &novoProduto->codigo);
    fflush(stdin);
    printf("Digite a descricao do produto: ");
    fgets(novoProduto->descricao, sizeof(novoProduto->descricao), stdin);
    fflush(stdin);
    printf("Digite a quantidade do produto: ");
    scanf("%d", &novoProduto->quantidade);
    fflush(stdin);
    printf("Digite o valor do produto: ");
    scanf("%f", &novoProduto->valor);
    fflush(stdin);

    if(lista == NULL){
        return novoProduto;
    }else{
        Produto* atual = lista;
        while(atual->prox != NULL){
            atual = atual->prox;
        }
        atual->prox = novoProduto;
        return lista;
    }
}

void imprimirLista(Produto *lista){
    Produto *atual = lista;
    if(atual == NULL){
        printf("Lista vazia.\n");
        return;
    }else{
        while(atual != NULL){
            printf("\nDescricao: %s", atual->descricao);
            printf("Codigo: %d", atual->codigo);
            printf("\nQuantidade: %d", atual->quantidade);
            printf("\nValor: %.2f", atual->valor);
            printf("\n");
            atual = atual->prox;
        }
    }
}

Produto* pesquisar(Produto *lista, int codigoBusca){
    Produto *atual = lista;
    if(atual == NULL){
        printf("\nLista vazia.");
        return;
    }else{
        while(atual != NULL){
            if(atual->codigo == codigoBusca){
                printf("\nDescricao: %s", atual->descricao);
                printf("Codigo: %d", atual->codigo);
                printf("\nQuantidade: %d", atual->quantidade);
                printf("\nValor: %.2f", atual->valor);
                printf("\n");
                return atual;
            }
            atual = atual->prox;
        }
        printf("Produto nao encontrado.\n");
        return NULL;
    }
}

Produto* remover(Produto *lista, int codigBusca){
    Produto *atual = lista;
    Produto *anterior= NULL;
    while(atual != NULL && atual->codigo != codigBusca){
        anterior = atual;
        atual = atual->prox;
    }
    if(atual != NULL){
        if(anterior != NULL){
            anterior->prox = atual->prox;
        }else{
            lista = atual->prox;
        }
        free(atual);
        printf("Produto removido com sucesso!\n");
    }else{
        printf("Produto nao cadastrado.\n");
    }
    return lista;
}

main(){
    Produto *lista = criarListaVazia();
    Produto *encontrada;
    int opcao, codigoBusca;

    do{
        printf("\nEscolha uma das opcoes a seguir:");
        printf("\n1 - Adicionar um produto.");
        printf("\n2 - Imprimir relatorio dos produtos.");
        printf("\n3 - Pesquisar um produto pelo codigo.");
        printf("\n4 - Remover um produto.");
        printf("\n0 - Sair");
        printf("\n\n");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                lista = adicionar(lista);
            break;
            case 2:
                imprimirLista(lista);
            break;
            case 3:
                printf("Digite o codigo para pesquisar: ");
                scanf("%d", &codigoBusca);
                encontrada = pesquisar(lista, codigoBusca);
            break;
            case 4:
                printf("Digite o codigo para remover: ");
                scanf("%d", &codigoBusca);
                lista = remover(lista, codigoBusca);
            break;
        }
    }while(opcao != 0);

}
