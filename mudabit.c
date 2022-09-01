// SAMUEL JONATHAN PEREIRA DA CONCEIÇÃO
// a2461188

#include <stdio.h>

int main ()
{
    int num, nums, pos;
    char op=0;

    FILE *file;
    file = fopen("entrada.txt", "r");

    while (1)
    {
    if (fscanf(file, "%d %c %d", &num, &op, &pos)!=3)
        break;
    switch (op)
    {
        case '-':
            nums = (num & ~(1<<pos));
            break;
        case '+':
            nums = (num | (1<<pos));
            break;
        case 'T':
            if ((num & ~(1<<pos))== num)
                nums = (num |(1<<pos));
            else
                nums = (num & ~(1<<pos));
            break;
        default:
            printf("\n Foi detectado um operador invalido");
    }
    FILE *file2;
    file2 = fopen ("saida.txt", "a");
    fprintf(file2, "%d\n", nums);
    }

    return 0;
}
