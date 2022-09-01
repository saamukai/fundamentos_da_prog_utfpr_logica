// SAMUEL JONATHAN PEREIRA DA CONCEIÇÃO
// RA: a2461188

#include <stdio.h>
#include <string.h>

void inverte(char *palavra)
{
    int i= 0;
    int n = strlen(palavra);
    char reservaLetras;

    for(i = 0; i < n/2; i++)
    {
        reservaLetras = palavra[i];
        palavra[i] = palavra[n - i - 1];
        palavra[n - i - 1] = reservaLetras;
    }
}

int main()
{
    int i = 0;
    char palavras[20][100] = {0};

    /* lê até 20 palavras do usuário */
    for(i = 0; i < 20; i++)
    {
        printf("Entre com a palavra %d ou ponto (.) para terminar: ", i+1);
        scanf("%s", &palavras[i][0]);

        /* para se a entrada for um ponto */
        if(*palavras[i] == '.')
          {
            i--;
            break;
          }
    }

    if (i<20)
    {
        printf("\nForam lidas %d palavras\n", i+1);
    }
    else if (i>=20)
    {
        printf("\nForam lidas %d palavras\n", i);
    }

    /* imprime as palavras invertidas na ordem inversa da inserção */
    printf("Palavras na ordem inversa:\n");
    for(; i >= 0; i--)
    {
        inverte(&palavras[i][0]);
        printf("%s\n", palavras[i]);
    }
}

