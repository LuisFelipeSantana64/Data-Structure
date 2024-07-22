#include <stdio.h>
#include <stdlib.h>
#define N 10

int A[N+1];

void geraVetor(){
    int i;
    srand(10);
    for(i = 0; i < N; i++)
        A[i] = rand() % (N * 10);
}

int BuscaSequencial(int chave){  // método de Busca Sequencial simples
    for(int i = 0; i < N; i++){
        if(A[i] == chave)
            return 1;
    }
    return 0;
}

int BuscaSequencialSentinela(int chave){  // método de Busca Sequencial com sentinela
    int i = 0;
    A[N] = chave;
    while(A[i] != chave){
        i++;
    }
    return i;
}

int main(){
    int procura;
    geraVetor();
    
    printf("\n\n\tVetor gerado:\n");
    for(int j = 0; j < N; j++){
        printf("%d ", A[j]);
    }

    printf("\n\nBusca sequencial com sentinela:\n\n");
    printf("Qual numero INTEIRO quer verificar na lista? ");
    scanf("%d", &procura);
    
    int resultado = BuscaSequencialSentinela(procura);
    if(resultado == N)
        printf("\nNumero nao encontrado!\n\n");
    else
        printf("\n\nValor encontrado!\n\n");

    printf("Vetor apos a busca:\n");
    for(int j = 0; j <= N; j++){ // imprimindo os valores após colocar a 'chave' na ultima posição
        printf("%d ", A[j]);
    }
    
    return 0;
}
