/*Alocar uma matriz 5x5 e preencher cada elemento,
depois imprimir a matriz*/

#include <stdio.h>
#include <stdlib.h>
 int main () {

    int linha = 5, coluna =5, i, j; //'i' para linha e 'j' para coluna

    int **matriz = (int **) malloc (linha * sizeof(int *)); 

    for (i=0; i<linha; i++) {
        matriz[i] = (int *) malloc (coluna * sizeof(int));
    }

    printf("Informe os valores da Matriz\n");
    for(i=0; i<5; i++) { //Pode ser substituido o numero '5' pela variavel 'linha'
        for(j=0; j<5; j++){ ////Pode ser substituido o numero '5' pela variavel 'coluna'
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n\nImprimindo toda a Matriz\n");
    for(i=0; i<5; i++) {
        for(j=0; j<5; j++) {
            printf("%d ", matriz[i][j]);
        }
    printf("\n");
    }
     
    free(matriz);

    return 0;
 }
