#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int array[30];
    float total = 0;
    float media = 0;

    srand(time(0));

    for (int i = 0; i < 30; i++)
    {
        array[i] = 100 + rand() % 401;

        total = total + array [i];
    }

    media = total / 30; 

    int menor = array[0];
    int maior = array[0];
    int diamaior = 0;
    int diamenor = 0;

    for (int i = 0; i < 30; i++)
    {
        if (array[i] > maior)
        {
            maior = array[i];
            diamaior = i;
        }

        if (array[i] < menor)
        {
            menor = array[i];
            diamenor = i;
        }
    }

    printf("O total de litros consumidos este mês foi de: %.2f litros!", total);
    
    printf("\nA média diária de consumo, neste mês, foi de: %.2f litros!", media);
   
    printf("\nO dia de maior consumo foi: dia %d!", diamaior);

    printf("\nO dia de menor consumo foi: dia %d!", diamenor);
    
    return 0;
}