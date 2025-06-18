#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int lança;

    srand(time(0));

    printf("Quantas vezes o dado será lançado? ");
    scanf("%d", &lança);

    int array[6] = {0};

    for (int i = 0; i < lança; i++)
    {
        int lado = rand() % 6;

        array[lado]++;
    }

    printf("\nResultados: \n");

    for (int i = 0; i < 6; i++)
    {
        printf("Lado %d: %d vezes!\n", i, array[i]);
    }

    return 0;
}