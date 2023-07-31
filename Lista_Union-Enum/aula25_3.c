/*O programa basiucamente pede entrada da data ao usuário e logo depois 
imprime a data no formato (XX/XX/XXXX) */
#include<stdio.h>

typedef struct Data //Define uma nova estrutura chamada "Data"
{
    int dia, ano;
}Data;

enum boolean {not, jan, fev, mar, abr, mai, jun, jul, ago, set, out, nov, dez}; 

typedef enum boolean bool;

int main (void) { /*Funçao principal*/
    bool mes;
    Data data;

    printf("Qual o dia? (Ex.: 01)\n"); //Solicita a entrada do dia
    scanf("%d", &data.dia);
    printf("Qual o ano? (Ex.: 2023)\n"); // Solicitada a entrada do ano
    scanf("%d", &data.ano);
    printf("Selecione o mes?\n"); // pede ao usuário para selecionar oi mês
    printf("1-JANEIRO\n2-FEVEREIRO\n3-MARCO\n4-ABRIL\n5-MAIO\n6-JUNHO\n7-JULHO\n8-AGOSTO\n9-SETEMBRO\n10-OUTUBRO\n11-NOVEMBRO\n12-DEZEMBRO\n");
    scanf("%d", &mes);
   /*Imprime a data no formato xx/xx/xxxx na tela*/
    if(mes==jan) {
        printf("\nDATA: %d/01/%d.\n", data.dia, data.ano);
    }
    else if (mes==fev) {
        printf("\nDATA: %d/02/%d.\n", data.dia, data.ano);
    }
    else if(mes==mar) {
        printf("\nDATA: %d/03/%d.\n", data.dia, data.ano);
    }
    else if(mes==abr) {
        printf("\nDATA: %d/04/%d.\n", data.dia, data.ano);
    }
    else if(mes==mai) {
        printf("\nDATA: %d/05/%d.\n", data.dia, data.ano);
    }
    else if(mes==jun) {
        printf("\nDATA: %d/06/%d.\n", data.dia, data.ano);
    }
    else if(mes==jul) {
        printf("\nDATA: %d/07/%d.\n", data.dia, data.ano);
    }
    else if(mes==ago) {
        printf("\nDATA: %d/08/%d.\n", data.dia, data.ano);
    }
    else if(mes==set) {
        printf("\nDATA: %d/09/%d.\n", data.dia, data.ano);
    }
    else if(mes==out) {
        printf("\nDATA: %d/10/%d.\n", data.dia, data.ano);
    }
    else if(mes==nov) {
        printf("\nDATA: %d/11/%d.\n", data.dia, data.ano);
    }
    else if(mes==dez) {
        printf("\nDATA: %d/12/%d.\n", data.dia, data.ano);
    }
    else {
        printf("ERRO AO LER A DATA");
    }
    return 0;
}

