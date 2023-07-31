#include <stdio.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL,"Portuguese");

    int N; // Número de questões
    printf("Digite o número de questões na prova: ");
    scanf("%d", &N);

    char gabarito[N + 1]; // +1 para armazenar o caractere de fim de string ('\0')
    printf("Digite o gabarito da prova (respostas corretas): ");
    scanf("%s", gabarito);

    int num_alunos = 10;
    char respostas_alunos[num_alunos][N + 1];

    // Leitura das respostas dos alunos
    for (int i = 0; i < num_alunos; i++) {
        printf("Digite as respostas do aluno %d (use letras maiúsculas A, B, C, D, E): ", i + 1);
        scanf("%s", respostas_alunos[i]);
    }

    // Cálculo e exibição das notas dos alunos
    printf("\nNotas dos alunos:\n");
    float pontos_por_questao = 10.0 / N;
    int aprovados = 0;

    for (int i = 0; i < num_alunos; i++) {
        int nota = 0;
        for (int j = 0; j < N; j++) {
            if (respostas_alunos[i][j] == gabarito[j]) {
                nota += pontos_por_questao;
            }
        }
        printf("Aluno %d: %d/%d\n", i + 1, nota, 10);
        
        if (nota >= 6) {
            aprovados++;
        }
    }

    // Cálculo e exibição da porcentagem de aprovação
    float porcentagem_aprovacao = (aprovados * 100.0) / num_alunos;
    printf("\nPorcentagem de aprovação: %.2f%%\n", porcentagem_aprovacao);

    return 0;
}
