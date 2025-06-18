#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(0));

    int rodada[4];
    int total[4] = {0};
    int ganhadores = 0;
    int maior = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("\n--------- Rodada %d ---------", i+1);

        for (int i = 0; i < 4; i++)
        {
            rodada[i] = rand() %101;

            printf("\nJogador %d: %d pontos!", i+1, rodada[i]);

            if (rodada[i] > 80)
            {
                printf("\nRodada de destaque para jogador %d!", i+1);
            }
            
            total[i] += rodada[i];
        }
    }

    printf("\n--------- FIM DAS RODADAS ---------");

    for (int i = 0; i < 4; i++)
    {
        printf("\nTotal do jogador %d: %d!", i+1, total[i]);

        if (total[i] > maior)
        {
            maior = total[i];
        }
    }
    
    for (int i = 0; i < 4; i++)
    {
        if (total[i] == maior)
        {
            ganhadores++;
        }
    }

    if (ganhadores > 1)
    {
        printf("\nHouve um empate entre: ");

        for (int i = 0; i < 4; i++)
        {
            if (total[i] == maior)
            {
                printf("\nJogador número %d!", i+1);
            }
        }
    }
    else
    {
        for (int i = 0; i < 4; i++)
        {
            if (total[i] == maior)
            {
                printf("\nO vencedor foi o jogador número %d!", i+1);
            }
        }
    }   

    return 0;
}