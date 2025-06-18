#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    float notas[10][3] = {0};
    srand(time(0));
    float ga[10] = {0};
    float gb[10] = {0};

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j == 0 || j == 1)
            {
                notas[i][j] = rand() % 101 / 10.0;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        ga[i] = notas[i][0];
    }

    for (int i = 0; i < 10; i++)
    {
        gb[i] = notas[i][1];
    }

    for (int i = 0; i < 10; i++)
    {
        notas[i][2] = ga[i] * (1.0 / 3.0) + gb[i] * (2.0 / 3.0);
    }

    printf("GRAU A       GRAU B        MÉDIA\n");

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%.2f          ", notas[i][j]);
        }
        
        printf("\n");
    }














    return 0;
}