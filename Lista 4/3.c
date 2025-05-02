#include <stdio.h>

int main()
{
    int meter;
    int num;
    int multi;
    int result;
    char prox;
    prox = 's';
    
    do
    {   
        printf("Escolha um número de 1 a 9 para ver sua tabuada: \n");
        scanf("%d", &num);
        
        meter = 0;
        multi = 1;
        
        while (meter < 10)
        {
        
        result = num * multi;
        
        printf("%d X %d = %d!\n", num, multi, result);
        
        multi = multi + 1;
        
        meter = meter + 1;
            
        }
        
        printf("Deseja calcular outra tabuada? (s ou n) \n");
        scanf(" %c", &prox);
        
    }
    while (prox == 's' || prox == 'S');
    
    return 0;
}