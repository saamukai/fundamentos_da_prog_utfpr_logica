// SAMUEL JONATHAN PEREIRA
// a2461188

#include <stdio.h>

int main ()
{
    int opcao =0, tam=0, tamuser=0, espaco=0, nivel=0, folhas=0;

    do {
    printf("\n\n\tPROGRAMINHA DOS QUADRADOS E ARVORES");
    printf("\n\nEscolha que figura deseja mostrar:");
    printf("\n1. Quadrado\n2. Arvore\n3. Fechar Programa");
    printf("\nDigite a opcao desejada: ");
    scanf("%i", &opcao);
    system ("cls||clear");

    switch (opcao)
    {
    case 1:
        printf("\nVoce escolheu o quadrado");
        printf("\nDigite a altura/largura desejado para o quadrado: ");
        scanf("%i", &tamuser);
        printf("\n");

        for (tam=0; tam<tamuser; tam++)             // -------- "TAMPA" DO QUADRADO
        {
            printf("*");
        }
        printf("\n");
        for (tam=0; tam<tamuser-2; tam++)           // ---------- MEIO, ESPAÇOS E LATERAIS
        {
            printf("*");
            for (espaco=0;espaco<tamuser-2; espaco++)       // -------- ESPAÇOS
            {
                printf(" ");
            }
            printf("*");
            printf("\n");
        }
            for (tam=0; tam<tamuser; tam++)         // --------- BASE DO QUADRADO
            {
                printf("*");
            }
    break;
    case 2:
        printf("\nVoce escolheu a arvore");
        printf("\nDigite a altura desejada para a arvore: ");
        scanf("%i", &tamuser);
        printf("\n");

    for (nivel=0; nivel<tamuser; nivel++) // ARVORE
    {
       for (espaco=0; espaco<tamuser-nivel-1; espaco++) // ESPAÇOS
        {
        printf(" ");
        }
        for (folhas=0; folhas<nivel; folhas++) // FOLHAS ESQUERDA
        {
            printf("*");
        }
    printf("|");        // TRONCO
        for (folhas=0; folhas<nivel; folhas++)
        {
            printf("*");  // FOLHA DIREITA
        }
    printf("\n");
    }

    break;
    case 3:
            printf("\n\n\tVoce escolheu sair do programa!\n\n");
            return 0;
    break;
    default:
            printf("\n\n\tOPCAO INVALIDA!\n\n");
    break;
    }
    } while (opcao);
    return 0;
}
