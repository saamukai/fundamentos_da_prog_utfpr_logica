// ENGENHARIA DE COMPUTAÇÃO
// FUNDAMENTOS DA PROGRAMAÇÃO
// ALUNO: SAMUEL JONATHAN PEREIRA DA CONCEIÇÃO
// RA: a2461188

#include <stdio.h>
#include <math.h>

int main ()
{
    int opcao = 0, loop=0;
    float valor1 = 0, valor2 =0, resultado=0;
    float a =0, b=0, c=0, x1=0, x2=0, delta=0;

    printf("\n\tCALCULADORA");

    do
    {
    printf("\n============================================");
    printf("\n\nAs opcoes de calculo sao as seguintes:");
    printf("\n1. Adicao\n2. Subtracao\n3. Multiplicacao\n4. Divisao\n5. Exponenciacao\n6. Bhaskara");
    printf("\n\nDigite o numero/opcao da operacao desejada: ");
    scanf ("%i", &opcao);

        switch (opcao)
        {
            case 1:
                printf("\n\tADICAO:");
                printf("\nDigite o primeiro valor: ");
                scanf("%f", &valor1);
                printf("Digite o segundo valor: ");
                scanf("%f", &valor2);
                resultado = valor1 + valor2;
                printf("O resultado da soma e: %.2f", resultado);
                printf("\n============================================\n");
            break;
            case 2:
                printf("\n\tSUBTRACAO:");
                printf("\nDigite o primeiro valor (minuendo): ");
                scanf("%f", &valor1);
                printf("Digite o segundo valor (subtraendo): ");
                scanf("%f", &valor2);
                resultado = valor1 - valor2;
                printf("O resultado da diferenca e: %.2f\n", resultado);
                printf("\n============================================\n");
            break;
            case 3:
                printf("\n\tMULTIPLICACAO:");
                printf("\nDigite o primeiro valor (multiplicando): ");
                scanf("%f", &valor1);
                printf("Digite o segundo valor (multiplicador): ");
                scanf("%f", &valor2);
                resultado = valor1 * valor2;
                printf("O resultado do produto e: %.2f\n", resultado);
                printf("\n============================================\n");
            break;
            case 4:
                printf("\n\tDIVISAO:");
                printf("\nDigite o primeiro valor (dividendo): ");
                scanf("%f", &valor1);
                printf("Digite o segundo valor (divisor): ");
                scanf("%f", &valor2);
                resultado = valor1 / valor2;
                printf("O resultado (quociente) da operacao da e: %.2f\n", resultado);
                printf("\n============================================\n");
            break;
            case 5:
                printf("\n\tEXPONENCIACAO / POTENCIACAO:");
                printf("\nDigite o valor da base: ");
                scanf("%f", &valor1);
                printf("Digite o expoente: ");
                scanf("%f", &valor2);
                resultado = pow(valor1,valor2);
                printf("O resultado da operacao e: %.2f\n", resultado);
                printf("\n============================================\n");
            break;
            case 6:
                printf("\n\tBHASKARA:");
                printf("\nDigite o valor do coeficiente a: ");
                scanf("%f", &a);
                printf("Digite o valor do coeficiente b: ");
                scanf("%f", &b);
                printf("Digite o valor do coeficiente c: ");
                scanf("%f", &c);
                delta = (pow(b,2)-(4*a*c));
                if (delta <0)
                    printf ("\nA equacao informada nao possui valores reais\n\n======================================");
                else if (delta == 0)
                {
                    printf("\nFoi encontrada uma raiz real para a equacao informada: ");
                    x1 = (-b+sqrt(delta))/(2*a);
                    printf("%2.f\n\n", x1);
                    printf("\n============================================\n");
                }
                else
                {
                    printf ("\nForam encontradas duas raizes reais para a equacao informada: ");
                    x1 = (-b+sqrt(delta))/(2*a);
                    x2 = (-b-sqrt(delta))/(2*a);
                    printf("%2.f e %2.f\n\n", x1, x2);
                    printf("\n============================================\n");
                }
            break;
            default:
                printf("\n\tOPCAO INVALIDA\n\tOPERACAO NAO REALIZADA\n");
                printf("\n============================================\n");
            break;
        }
        printf("\n\nO QUE DESEJA FAZER AGORA?\n\n1. Realizar outra operacao\n2. Fechar calculadora\n");
        printf("Digite o numero da opcao desejada: ");
        scanf("%i", &loop);
    }
        while (loop == 1);
        printf("\n\nVoce escolheu fechar a calculadora.\n\n\n");

    return 0;
}
