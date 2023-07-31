/*O programa coleta informações como o nome, a idade e o gênero 
(masculino ou feminino) de uma pessoa e,
 em seguida, imprime os dados fornecidos pelo usuário.*/
#include <stdio.h>

typedef struct Pessoa // Define uma nova estrutura chamada "Pessoa"
{
    char nome [100];
    int idade;

}Pessoa;

enum boolean {masc, femi};

typedef enum boolean bool;

int main (void) {
    bool val;
    Pessoa pessoa;
    // Solicita a entradas de dados do usuário
    printf("Qual o seu nome?\n");
    scanf("%[^\n]", pessoa.nome);
    printf("Qual a sua idade?\n");
    scanf("%d", &pessoa.idade);
    
    printf("QUAL SEU GENERO?\n");
    printf("Digite 0-MASCULINO ou 1-FEMININO:\n");
    scanf("%d", &val);
    printf("Valor informando foi: %d\n", val);
    if(val==masc) { //Faz uma logica if de acordo com o valor de 'val'
        printf("Genero Masculino\n");
    }
    else if(val==femi) {
        printf("Genero Feminino");
    }
    else {
        printf("ERRO AO LER O GENERO");
    }
    printf("Nome informando: %s\t Idade informada: %d\t", pessoa.nome, pessoa.idade); //Imprime os dados fornecidos
}
