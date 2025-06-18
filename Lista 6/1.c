#include<stdio.h>

int main()
{
    int v1[5] = {1,5,9,2,5};
    int v2[5] = {7,4,13,21,6};
    int v3[5] = {8,-3,5,7,12};

    int m[3][5];

    for (int j=0; j < 5; j++)
    {
        m[0][j] = v1[j];
        m[1][j] = v2[j];
        m[2][j] = v3[j];
    }

    for (int i=0; i<3; i++)
    {
        for(int j=0; j<5; j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

    return 0;
}
