#include <stdio.h>

enum boolean {false, true};

typedef enum boolean bool;

int main (void) {
    bool val;
    printf("Digite 1 ou 0:\n");
    scanf("%d", &val);
    printf("Valor informando: %d\n", val);
    if(val==true) {
        printf("Verdadeiro \n");
    }
    else if(val==false) {
        printf("Falso");
    }
    else {
        printf("ERRO");
    }
}