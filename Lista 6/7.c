#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int m[5][5] = {0};
    srand(time(0));

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            m[i][j] = -10 + rand() % 21;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", -m[i][j]);
        }

        printf("\n");
    }

    return 0;
}