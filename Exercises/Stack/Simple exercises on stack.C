#include <stdio.h>
#include <stdlib.h>
#define TAM 5
int pilha[TAM], topo = -1;

void push (int valor)
{
    if(topo == TAM - 1)
    {
        printf("\nA pilha ja esta cheia\n");
    }
    else topo++;
        pilha[topo] = valor;
}
int pop()
{
    int valor;
    if (topo == -1 )
    {
        printf("\nPilha vazia\n");
        return -1;
    }
    else valor = pilha[topo];
        topo--;
    return valor;
}
int pilhaVazia()
{
    if (topo == -1)
        return 1;
    else return -1;
}
void topoPilha()
{   if(pilhaVazia() == 1){

        printf("Topo: Vazio");
    }
    else printf("\nValor topo da pilha: %d\n", pilha[topo]);
}
void imprimePilha()
{
    printf("\t\t\t\tPILHA\n");
    if(topo != -1)
    {
        for(int i = topo; i > -1; i--)
        {
            printf("\t%d\n", pilha[i]);
        }
    }
    else printf("\nPilha vazia\n");
}

int main()
{
    push(1);
    push(2);
    push(12);
    push(13);
    push(15);
    imprimePilha();
    topoPilha();
    printf("\n\n\n\n\nNovo teste apos modificacoes na lista:\n");
    pop();
    pop();
    pop();
    imprimePilha();
    topoPilha();
    printf("\n\n\n\n\nNovo teste apos modificacoes na lista:\n");
    push(15);
    imprimePilha();
    topoPilha();
    printf("\n\n\n\n\nNovo teste apos modificacoes na lista:\n");
    pop();
    pop();
    pop();
    imprimePilha();
    topoPilha();


}