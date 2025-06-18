#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int m[4][6] = {0};
    int maior = m[0][0];
    int menor = m[0][0];

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
            if (m[i][j] > maior)
            {
                maior = m[i][j];
            }
            if (m[i][j] < menor)
            {
                menor = m[i][j];
            }
        }
    }

    printf("\nMaior número da matriz: %d", maior);
    printf("\nMenor número da matriz: %d", menor);


    return 0;
}