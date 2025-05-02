#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int meter = 0;
    int num = 0;
    int chute;

    srand(time(0));

    num = 1 + rand() % 10;

    printf("Eu escolhi um número inteiro aleatório de 1 a 10!\n");
    
    while (meter < 3)
    {
        printf("Tente adivinhá-lo: \n");
        scanf("%d", &chute);
    
        if (chute == num)
        {
            printf("Parabéns, você me venceu!");
            
            break;
        }
        else
        {
            printf("Errado!\n");
            
            if (chute > num)
            {
                printf("O número que eu escolhi é menor!\n");
            }
            else
            {
                printf("O número que eu escolhi é maior!\n");
            }
        }
        
        meter = meter + 1;
    }

    return 0;
}