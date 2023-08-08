#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura Funcionario
typedef struct {
    int funcional;
    char nome[50];
    char departamento;
    float salario;
} Funcionario;

// Função para copiar os dados do arquivo para um vetor de funcionários
void copia_dados(FILE* fl, int n, Funcionario** pessoal) {
    *pessoal = (Funcionario*)malloc(n * sizeof(Funcionario));
    for (int i = 0; i < n; i++) {
        fscanf(fl, "%d\t%s\t%c\t%f\n", &((*pessoal)[i].funcional), (*pessoal)[i].nome, &((*pessoal)[i].departamento), &((*pessoal)[i].salario));
    }
}

// Função para imprimir o valor gasto com a folha de pagamento para um departamento específico
void imprime_folha_pagamento(int n, Funcionario** pessoal, char depto) {
    float total_gasto = 0;
    for (int i = 0; i < n; i++) {
        if ((*pessoal)[i].departamento == depto) {
            total_gasto += (*pessoal)[i].salario;
        }
    }
    printf("Valor gasto com a folha de pagamento do departamento %c: R$ %.2f\n", depto, total_gasto);
}

int main() {
    FILE* arquivo;
    int num_funcionarios;

    // Abre o arquivo com a relação de funcionários
    arquivo = fopen("funcionarios.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Lê o número de funcionários
    fscanf(arquivo, "%d", &num_funcionarios);

    // Cria um vetor para armazenar os funcionários
    Funcionario* pessoal;
    copia_dados(arquivo, num_funcionarios, &pessoal);

    // Fecha o arquivo
    fclose(arquivo);

    // Exemplo de chamada da função para imprimir o valor gasto com a folha de pagamento para cada departamento
    imprime_folha_pagamento(num_funcionarios, &pessoal, 'A');
    imprime_folha_pagamento(num_funcionarios, &pessoal, 'B');
    imprime_folha_pagamento(num_funcionarios, &pessoal, 'C');

    // Libera a memória alocada para o vetor de funcionários
    free(pessoal);

    return 0;
}
