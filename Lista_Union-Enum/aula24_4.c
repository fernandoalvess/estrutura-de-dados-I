/*O programa basicamente recebe um valor inteiro (1 ou 0) do usuário,
 que corresponde às constantes "true" e "false", respectivamente. Em seguida,
  imprime o valor digitado e informa se é verdadeiro ou falso.
 Se o usuário digitar um valor diferente de 1 ou 0, o programa exibirá "ERRO".*/
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