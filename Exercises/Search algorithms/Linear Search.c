#include <stdio.h>
#include <stdlib.h>
#define N 10

int A[N+1];
int comparacoes;

void geraVetor() {
    int i;
    srand(10);
    for(i = 0; i < N; i++)
        A[i] = rand() % (N * 10);
}

int BuscaSequencial(int chave) {  // método de Busca Sequencial simples
    for(int i = 0; i < N; i++) {
        if(A[i] == chave)
            return 1;
    }
    return 0;
}

int BuscaSequencialSentinela(int chave) {  // método de Busca Sequencial com sentinela
    int i = 0;
    A[N] = chave;
    while(A[i] != chave) {
        i++;
    }
    return i;
}

int main() {
    int procura;
    int escolha;

    geraVetor();
    printf("\n\n\tVetor gerado:\n");
    for(int j = 0; j < N; j++) {
        printf("%d ", A[j]);
    }

    printf("\n\nFazer a busca com Busca Sequencial normal ou Busca Sequencial com sentinela: \n1 - Simples\n2 - Sentinela\n");
    scanf("%d", &escolha);

    switch(escolha) {
        case 1:
            printf("\n\nBusca sequencial:\n\n");
            printf("Qual numero INTEIRO quer verificar na lista? ");
            scanf("%d", &procura);
            if(BuscaSequencial(procura) == 1)
                printf("Numero encontrado!\n");
            else
                printf("Valor nao esta na lista!\n");
            break;

        case 2:
            printf("\n\nBusca sequencial com sentinela:\n\n");
            printf("Qual numero INTEIRO quer verificar na lista? ");
            scanf("%d", &procura);
            int resultado = BuscaSequencialSentinela(procura);
            if(resultado == N)
                printf("\nNumero nao encontrado!\n\n");
            else
                printf("\nValor encontrado!\n\n");

            printf("Vetor apos a busca:\n");
            for(int j = 0; j <= N; j++) { // imprimindo os valores após colocar a 'chave' na última posição
                printf("%d ", A[j]);
            }
            break;

        default:
            printf("Opcao invalida!\n");
            break;
    }
    return 0;
}
