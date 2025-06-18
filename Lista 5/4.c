#include <stdio.h>

int main()
{
    int array[7] = {0};
    float total, media;

    for (int i = 0; i < 7; i++)
    {
        printf("Passos de hoje: ");
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < 7; i++)
    {
        total = total + array[i];
    }
    
    media = total / 7;

    printf("Total de passos da semana: %.0f!", total);

    printf("\nA média de passos diários esta semana foi de: %0.0f!", media);

    for (int i = 0; i < 7; i++)
    {
        if (array[i] >= 10000)
        {
            int dia = i + 1;
            printf("\nParabéns, no dia %d, você alcançou a meta de 10000 passos!", dia);
        }
    }

    return 0;
}