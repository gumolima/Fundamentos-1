#include <stdio.h>

int main()
{
    int meter = 0;
    int lastnew;
    int par = 0;
    int impar = 0;
    
    while (meter < 10)
    {
        printf("Digite um número: ");
        scanf("%d", &lastnew);
        
        if (lastnew % 2 == 0)
        {
            par = par + 1;
        }
        else
        {
            impar = impar + 1;
        }
        
        meter = meter + 1;
    }
    
    printf("Você digitou %d números pares e %d números ímpares!", par, impar);
    
    return 0;
}