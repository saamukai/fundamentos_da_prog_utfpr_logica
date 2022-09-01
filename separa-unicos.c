// SAMUEL JONATHAN PEREIRA DA CONCEIÇÃO
// a2461188

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int * separaUnicos(const int *v, const int n, int *nsaida)
{
    int *saida = calloc(n, sizeof(int));
    memcpy(saida, v, n * sizeof(int));
    int len = n;

    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (saida[i] == saida[j])
            {
                for (int k = j; k < len; k++)
                {
                    saida[k] = saida[k + 1];
                }
                len--;
                j--;
            }
        }
    }
    *nsaida = len;
    return saida;
}

int main ()
{
    int entrada[] = {1, 2, 3, 3, 7, 7, 4, 5, 5, 5, 6, 7, 8, 8, 8, 20};
    int unicos;
    int tamanho = sizeof(entrada)/sizeof(entrada[0]);
    int *saida = 0;

    printf("\nTAMANHO ENTRADA: %d", (sizeof(entrada)/sizeof(entrada[0])));

    saida = separaUnicos(entrada, tamanho, &unicos);

    printf("\nUNICOS: ");
    for (int i = 0; i < unicos; i++) {
        printf("%d ", saida[i]);
    }
    printf("\nTAMANHO UNICOS: %d\n", unicos);

    return 0;
}
