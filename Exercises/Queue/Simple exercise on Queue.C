#include <stdio.h>
#include <locale.h>
#include <string.h>
#define TAM 3

int fila[TAM];
int inicio=0;
int fim=0;
int cont=0;

void insereFila(int valor)  //Se a fila não estiver cheia, insere o 'valor' mandado por parametro, no fim da fila
{
    if (cont == TAM)
    {
        printf("\n\nFila cheia!\n");
    }
    else
    {
        fila[fim] = valor;
        cont++;
        if (fim == TAM-1)
        {
            fim = 0;
        }
        else fim++;
    }
}

void removeFila() //Se a fila não estiver vazia, retira o valor do começo da fila.
{
    if (cont == 0)
    {
        printf("\nFila vazia!");
        return;
    }
    cont--;
    if (inicio == TAM-1)
    {
        inicio=0;
    }
    else inicio++;;
}

void inicioFila() //Se a fila não estiver vazia, retorna na tela o valor que esta no inicio da fila.
{
    if (cont == 0)
    {
        printf("\nNao tem inicio, fila vazia!");
    }
    else
        printf("\n\nInicio da fila: %d",fila[inicio]);

}

void imprimir () //Imprime a fila
{
    int aux=inicio;
    int aux2=0;
    int aux3=0;



    printf("\n\nFILA");
    while (aux2<cont)
    {
        printf("\n%d",fila[aux]);
        if(aux == TAM-1)
        {
            aux=0;
        }
        else
        {
            aux++;
        }
        aux2++;
    }


}

int main()
{

    removeFila();

    insereFila(10);
    insereFila(8);

    imprimir();

    insereFila(12);
    insereFila(14);

    imprimir();

    removeFila();
    imprimir();

    insereFila(14);
    imprimir();


    inicioFila();

    insereFila(16);
    imprimir();
}
