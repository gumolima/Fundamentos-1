#include <stdio.h>

int main()
{   
    int num, meter = 1;
    double fatorial = 1;
    char continuar;
    
    do
    {
        printf("Digite um número: ");
        scanf("%d", &num);
        
        while (meter <= num)
        {
            fatorial = fatorial * meter;
            
            meter++;
        }
        printf("O fatorial de %d é %.0lf!\n", num, fatorial);
        
        printf("Deseja calcular o fatorial de outro número?(S ou N) ");
        scanf(" %c", &continuar);
    }
    while (continuar == 's' || continuar == 'S');
    
    printf("Programa encerrado!");
    
    return 0;
}