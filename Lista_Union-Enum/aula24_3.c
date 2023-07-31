#include <stdio.h>

typedef union indiceAcademico {
    float IRA, IG, IRT;
} indiceAcademico;

typedef struct Aluno {
    char nome [255];
    char curso [100];
    int matricula;
    indiceAcademico indice;
} Aluno;

int main (void) {
    Aluno aluno;
    int op;

    printf("\nDigite seu nome: ");
    scanf(" %[^\n]", aluno.nome);
    printf("\nIforme a matricula:\n");
    scanf("%d", &aluno.matricula);
    printf("\nDigite seu curso: ");
    scanf(" %[^\n]", aluno.curso);
    printf("\nDigite: \n 0 - IG \n 1 - IRA\n 2 - IRT\n");
    scanf("%d", &op);

    switch (op)
    {
    case 0: 
        printf("\nInforme o IG: ");
        scanf("%f", &aluno.indice.IG);
        break;
    case 1: 
        printf("\nInforme o IRA: ");
        scanf("%f", &aluno.indice.IRA);
        break;
    case 2: 
        printf("\nInforme o IRT: ");
        scanf("%f", &aluno.indice.IRT);
        break;
    
    default:
        break;
    }
    printf("\nDados informandos:\n Nome:%s\t Matricula:%d\t Curso:%s\t Indice:%f", aluno.nome, aluno.matricula, aluno.curso, aluno.indice.IG);

    return 0;
}