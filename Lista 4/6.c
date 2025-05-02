#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int sort, menor, maior;
    float media = 0;
    int meter = 0;
    int soma = 0;
    
    srand(time(0));
    
    while(meter < 5)
    {    
        sort = rand() % 101;
        
        printf("Valor %d: %d\n", meter, sort);
        
        if (meter == 0)
        {
            menor = sort;
            maior = sort;
        }
        else
        {
            if (sort > maior)
            {
                maior = sort;
            }
            if (sort < menor)
            {
                menor = sort;
            }
        }
        
        soma = soma + sort;
        
        meter = meter + 1;
        
    }    
    
    media = (float)soma / 5.00;
    
    printf("Menor número: %d!\n", menor);
    printf("Maior número: %d!\n", maior);
    printf("Média: %.2f!\n", media);
    
    return 0;
}