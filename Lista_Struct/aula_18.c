/*Esse programa permite criar, preencher, imprimir e remover 
informações de alunos em um vetor de ponteiros. Cada aluno é 
representado por uma estrutura que armazena sua matrícula,
nome, endereço e telefone*/
#include <stdio.h>
#include <stdlib.h>

 struct aluno { //Define uma estrutura chamada "aluno".
	int mat;
	char nome [81];
	char end [121];
	char tel [21];
	
};
typedef struct aluno Aluno; /*Cria um novo tipo "Aluno" que
 representa a estrutura definida anteriormente*/

 void inicializa (int n, Aluno** tab) { //Recebe um vetor de ponteiros para "Aluno" (tab)
    int i;
    for (i = 0; 1 < n; i++)
         tab[i] = NULL;    
 }

 void preenche (int n, Aluno** tab, int i) { /* Permite preencher as informações de um
  aluno na posição i do vetor tab.*/
    if (i < 0 || i >=n) {
    printf ("Indice fora do limite do vetor. \n");
    exit (1); /*aborta o progama*/
 }
 if (tab [i] == NULL)
     tab[i] = (Aluno*) malloc(sizeof(Aluno));

printf ("Entre com a matricula: ");
scanf ("%d", &tab[i]->mat);

printf ("Entre com o nome: ");
scanf (" %80[^\n]", tab[i]->nome);

printf ("Entre com o endereco: ");
scanf (" %120[^\n]", tab[i]->end);

printf ("Entre com o telefone: ");
scanf (" %20[^\n]", tab[i]->tel);
 }
 void retira (int n, Aluno** tab, int i) { /*Remove os dados do aluno na posição i do vetor tab*/
    if (i < 0 || i >= n) {
        printf("Indice fora do limite do vetor.\n");
        exit(1); /*aborda o proga*/
    }
    if (tab[i] != NULL) {
        free(tab[i]);
        tab[i] = NULL; /*indica que na posição não mais exite dados*/
    }
 }

 void imprime (int n, Aluno** tab, int i) {
    if (i < 0 || i >= n) {
        printf("Indice fora do limite do vetor.\n");
        exit(1); /*aborta programa*/
    }
    if (tab[i] != NULL) {
        printf ("Matricula: %d\n", tab[i]->mat);
        printf("Nome: %s\n", tab[i]->nome);
        printf("Endereco: %s\n", tab[i]->end);
        printf("Telefone: %s\n", tab[i]->tel);
    }
 }

 void imprime_tudo (int n, Aluno** tab) { /*Percorre todo o vetor tab e 
 imprime as informações de cada aluno presente.*/
    int i;
    for (i = 0; i < n; i++)
         imprime(n, tab, i);
 }
  
  int main (void) { /*Progama principal*/
    Aluno* tab[10];
    inicializa (10, tab);
    preenche (10, tab, 0);
    preenche (10, tab, 1);
    preenche (10, tab, 2);
    imprime_tudo (10, tab);
    retira(10, tab, 0);
    retira(10, tab, 1);
    retira(10, tab, 2);
    return 0;
  }
