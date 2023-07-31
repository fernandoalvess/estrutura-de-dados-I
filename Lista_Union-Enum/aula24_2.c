#include <stdio.h>
#include <stdlib.h>

union documento {
    int cpf;
    int rg;
    int cnh;
};

typedef union documento docs; 




int main(void) { /*O programa pede entradas de dados ao usuário e exibe na tela*/
    docs documento;

printf("Digite o CPF: ");
scanf("%d", &documento.cpf);
printf("Digite o RG: ");
scanf("%d", &documento.rg);
printf("Digite a CNH: ");
scanf("%d", &documento.cnh);

printf("\n Documento: CPF %d RG %d CNH %d", documento.cpf, documento.rg, documento.cnh);

    return 0;
}