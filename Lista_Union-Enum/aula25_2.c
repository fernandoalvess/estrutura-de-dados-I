/*O programa pede ao usuário o nome e valor do produto, logo depois o tipio e imprimi
os dados logo derpois*/
#include <stdio.h>

typedef union Tipos
{
    char alim [100];
    char bebida [100];
    char eletro [100];
}Tipos;

typedef struct Produtos
{
    char nome [100];
    float preco;
    Tipos tipos;
}Produtos;

int main (void) { /*Programa principal*/
    Produtos produto;
    int opcao;

    printf("Qual o nome do produto?\n");
    scanf(" %[^\n]", produto.nome);
    printf("\nQual o valor do produto?\n");
    scanf("%f", &produto.preco);
    printf("\nDigite o tipo: \n 0-ALIMENTO \n 1-BEBIDA\n 2-ELETRONICO\n");
    scanf("%d", &opcao);
    printf("\nDADOS INFORMANDOS:");

    switch (opcao) //Imprime o tipó conforme o dado fornecido (0, 1 ou 2)
    {
    case 0:
        printf("\nUm Alimento!");
        break;
    case 1: 
        printf("\nUma Bebida!");
        break;
    case 2: 
        printf("\nUm Eletronico!");
        break;
    
    default:
        break;
    }

    printf("\nNome: %s. Preco: R$%.2f.", produto.nome, produto.preco);

    return 0;
}


