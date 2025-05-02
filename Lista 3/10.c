#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int faces;
    int sorteado;
    
    printf("Quantas faces terá o dado a ser rolado? (d4, d6, d8, d10, d12 ou d16) ");
    scanf("%d", &faces);
    
    if (faces == 4 || faces == 6 || faces == 8 || faces == 10 || faces == 12 || faces == 16)
    {
        srand(time(0));
    
        sorteado = 1 + rand() % (faces);
        
        printf("O resultado da rolagem do d%d foi %d!", faces, sorteado);
    }
    else
    {
        printf("Você não digitou um dos valores válidos para o dado!");
    }
    return 0;
}   