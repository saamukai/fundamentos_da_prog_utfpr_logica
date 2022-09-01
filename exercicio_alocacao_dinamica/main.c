#include <stdio.h>
#include <stdlib.h>
#include "leitorNumeros.h"

int main()
{
    int N = 0;
    int *numeros = NULL;

    numeros = leArquivo("numeros.txt", &N);

    if(numeros == NULL)
    {
        printf("O arquivo de entrada nao existe.");
        return 1;
    }

   qsort(numeros, N, sizeof(int), cmpfunc);

   salvaArquivo("saida.txt", numeros, N);

    return 0;
}
