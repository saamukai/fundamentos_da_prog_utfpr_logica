#include <stdio.h>

int main ()
{
    int valor =0;
    int b0=0, b1=0, b2=0, b3=0, b4=0, b5=0, b6=0, b7=0;

    printf("\n\n                 CONVERSOR DE BASES\n\n");
    printf("Digite um valor decimal ate 255: ");
    scanf("%d", &valor);
    if (valor > 255)
    {
    printf("O valor digitado %d e maior que 255, execute novamente\n\n\n\n\tVALOR NAO CONVERTIDO\n\n\n", valor);
    return 0;
    }

    printf("\nO valor digitado foi: %d", valor);
    printf("\nO valor %d em sistema octal e: %o", valor, valor);
    printf("\nO valor %d em sistema hexadecimal e: %X", valor, valor);

    b0 = valor %2;
    valor = valor /2;

    b1 = valor %2;
    valor = valor/2;

    b2 = valor %2;
    valor = valor/2;

    b3 = valor %2;
    valor = valor/2;

    b4 = valor %2;
    valor = valor/2;

    b5 = valor %2;
    valor = valor/2;

    b6 = valor %2;
    valor = valor/2;

    b7 = valor %2;
    valor = valor/2;

    printf("\nO valor em binario e: %d%d%d%d %d%d%d%d", b7, b6, b5, b4, b3, b2, b1, b0);


    printf("\n\n\n\n\n                CONVERTIDO COM SUCESSO\n\n\n\n\n");



    return 0;
}
