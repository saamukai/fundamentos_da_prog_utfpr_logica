#include <stdio.h>

int main ()
{
    int b0=0, b1=0, b2=0, b3=0, b4=0, b5=0, b6=0, b7=0;
    int emDecimal=0;
    int i=0;
    printf("\n\n\tCONVERSOR DE BASES\n\n\n");
    printf("Digite um numero binario de 8 bits do mais significativo para o menos significativo um a um\n\n");
    printf("Digite o primeiro bit: ");
    scanf ("%d", &b0);
    if ((b0 !=0)&&(b0 !=1))
    {
        printf("\n\tO valor digitado nao pode ser diferente de 0 ou 1\n\tVALOR NAO CONVERTIDO");
        printf ("\n\tExecute Novamente\n\n");
        return 0;
    }
    printf("Digite o proximo bit: ");
    scanf ("%d", &b1);
    if ((b1 !=0)&&(b1 !=1))
    {
        printf("\n\tO valor digitado nao pode ser diferente de 0 ou 1\n\tVALOR NAO CONVERTIDO");
        printf ("\n\tExecute Novamente\n\n");
        return 0;
    }
    printf("Digite o proximo bit: ");
    scanf ("%d", &b2);
    if ((b2 !=0)&&(b2 !=1))
    {
        printf("\n\tO valor digitado nao pode ser diferente de 0 ou 1\n\tVALOR NAO CONVERTIDO");
        printf ("\n\tExecute Novamente\n\n");
        return 0;
    }
    printf("Digite o proximo bit: ");
    scanf ("%d", &b3);
    if ((b3 !=0)&&(b3 !=1))
    {
        printf("\n\tO valor digitado nao pode ser diferente de 0 ou 1\n\tVALOR NAO CONVERTIDO");
        printf ("\n\tExecute Novamente\n\n");
        return 0;
    }
    printf("Digite o proximo bit: ");
    scanf ("%d", &b4);
    if ((b4 !=0)&&(b4 !=1))
    {
        printf("\n\tO valor digitado nao pode ser diferente de 0 ou 1\n\tVALOR NAO CONVERTIDO");
        printf ("\n\tExecute Novamente\n\n");
        return 0;
    }
    printf("Digite o proximo bit: ");
    scanf ("%d", &b5);
    if ((b5 !=0)&&(b5 !=1))
    {
        printf("\n\tO valor digitado nao pode ser diferente de 0 ou 1\n\tVALOR NAO CONVERTIDO");
        printf ("\n\tExecute Novamente\n\n");
        return 0;
    }
    printf("Digite o proximo bit: ");
    scanf ("%d", &b6);
    if ((b6 !=0)&&(b6 !=1))
    {
        printf("\n\tO valor digitado nao pode ser diferente de 0 ou 1\n\tVALOR NAO CONVERTIDO");
        printf ("\n\tExecute Novamente\n\n");
        return 0;
    }
    printf("Digite o ultimo bit: ");
    scanf ("%d", &b7);
    if ((b7 !=0)&&(b7 !=1))
    {
        printf("\n\tO valor digitado nao pode ser diferente de 0 ou 1\n\tVALOR NAO CONVERTIDO");
        printf ("\n\tExecute Novamente\n\n");
        return 0;
    }

    printf("\nO valor digitado em binario com 8 bits foi: %d%d%d%d %d%d%d%d\n", b0, b1, b2, b3, b4, b5, b6, b7);
    emDecimal = b7*1+b6*2+b5*4+b4*8+b3*16+b2*32+b1*64+b0*128;
    printf ("\nO valor em decimal e %d", emDecimal);
    printf ("\nO valor em octal e %o", emDecimal);
    printf ("\nO valor em hexadecimal %X\n\n\n", emDecimal);
    printf ("\n\tCONVERTIDO COM SUCESSO\n\n");

    return 0;
}
