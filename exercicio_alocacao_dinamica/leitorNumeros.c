#include <stdio.h>
#include <stdlib.h>
#include "leitorNumeros.h"

int *leArquivo (char *arquivo, int *N)
{
    FILE *entrada;
    entrada = fopen(arquivo, "r");

    if(entrada == NULL)
        return NULL;

int nums;
    while (1)
    {
        if (fscanf (entrada, "%d", &nums)!=1)
        break;
        (*N)++;
    }
fseek(entrada, 0, SEEK_SET);
int *vetor = malloc((*N)*sizeof(int));
int i=0;
    while (1)
    {
        if (fscanf (entrada, "%d", &vetor[i])!=1)
        break;
        i++;
    }
    return vetor;
}

int cmpfunc(const void *numA, const void *numB)
{
    if ((*(int*)numA) < (*(int*)numB))
        return -1;
    if ((*(int*)numA) == (*(int*)numB))
        return 0;
    if ((*(int*)numA) > (*(int*)numB))
        return 1;
}

void salvaArquivo (char *saida, int *numeros, int N)
{
    FILE *arquivo2;
    arquivo2 = fopen(saida, "w");

int i;
for (i=0; i<N; i++)
    fprintf(arquivo2, "%d\n", numeros[i]);
}




