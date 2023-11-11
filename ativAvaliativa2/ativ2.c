#include <stdio.h>
#include <string.h>

char* validaSexo(char sexo);
char* classificaSalario(float salario);
void mostraClassifica(char sexo[], float salario, char classifSalario[]);

int quantAbaixo = 0, quantAcima = 0;

int main() {
    int quantProfissionais;
    float salario;
    char sexo, sexoConfirm[10], salarioConfirm[10];

    printf("Digite quantos profissionais possuem carteira assinada: ");
    scanf("%d", &quantProfissionais);

    for (int i = 0; i < quantProfissionais; i++) {
        printf("Digite o sexo do profissional (M ou F): ");
        scanf(" %c", &sexo);

        strcpy(sexoConfirm, validaSexo(sexo));

        printf("Digite o salario: R$");
        scanf("%f", &salario);

        strcpy(salarioConfirm, classificaSalario(salario));

        mostraClassifica(sexoConfirm, salario, salarioConfirm);
    }

    printf("O total de profissionais que recebem menos que o salario minimo e: %d\n", quantAbaixo);
    printf("O total de profissionais que recebem mais que o salario minimo e: %d", quantAcima);

    return 0;
}

char* validaSexo(char sexo) {
    static char sexoConfirm[10];

    while (sexo != 'M' && sexo != 'F') {
        printf("Resposta invalida, por favor digite novamente (M ou F): ");
        scanf(" %c", &sexo);
    }

    if (sexo == 'M') {
        strcpy(sexoConfirm, "Masculino");
    } else {
        strcpy(sexoConfirm, "Feminino");
    }

    return sexoConfirm;
}

char* classificaSalario(float salario) {
    static char relacaoSalario[10];

    while (salario < 1.00) {
        printf("Valor invalido, por favor digite novamente: R$");
        scanf("%f", &salario);
    }

    if (salario < 1400) {
        strcpy(relacaoSalario, "Abaixo");
        quantAbaixo++;
    } else if (salario > 1400) {
        strcpy(relacaoSalario, "Acima");
        quantAcima++;
    } else {
        strcpy(relacaoSalario, "Igual");
    }

    return relacaoSalario;
}

void mostraClassifica(char sexo[], float salario, char classifSalario[]) {
    printf("Sexo confirmado: %s\n", sexo);
    printf("Salario: R$ %.2f\n", salario);
    printf("Classificacao em relacao ao salario minimo: %s\n", classifSalario);
}