#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int m[4][6] = {0};
    int seglinha = 0;
    int quintacol = 0;
    int c = 0;
    int d = 0;
    int e = 0;


    srand(time(0));

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            m[i][j] = -10 + rand() % 21;
        }
    }
        
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
           printf("%d ", m[i][j]); 
        }

        printf("\n");
    }


     for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (i == 1)
            {
                seglinha = seglinha + m[i][j];
            }
        }
    }

    printf("\nSoma dos elementos da segunda linha: %d", seglinha);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (j == 4)
            {
                quintacol = quintacol + m[i][j];
            }
        }
    }

    printf("\nSoma dos elementos da quinta coluna: %d", quintacol);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (i == 0)
            {
                c = c + m[i][j] * m[3][j];
            }
        }
    }

    printf("\nSoma da multiplicação dos elementos da primeira pela quarta linha: %d", c);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (j % 2 == 0)
            {
                d = d + m[i][j];
            }
        }
    }

    printf("\nSoma dos elementos das colunas com índices pares: %d", d);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (i % 2 != 0)
            {
                e = e + m[i][j];
            }
        }
    }

    printf("\nSoma dos elementos das colunas com índices ímpares: %d", e);

    return 0;
}