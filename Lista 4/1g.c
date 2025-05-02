#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int meter = 0;
    int num = 0;
    int pos = 0;
    int neg = 0;
    int nulo = 0;

    srand(time(0));


    while (meter < 20)
    {
        num = -10 + rand() % 20;

        if (num > 0)
        {
            printf("%d POSITIVO\n", num);

            pos = pos + 1;

        }
        else if (num < 0)
        {
            printf("%d NEGATIVO\n", num);

            neg = neg + 1;

        }
        else if (num == 0)
        {
            printf("%d NULO\n",  num);

            nulo = nulo + 1;

        }

        meter = meter + 1;
    }

    printf("Foram printados %d nulos, %d positivos e %d negativos!", nulo, pos, neg);

    return 0;
} 
