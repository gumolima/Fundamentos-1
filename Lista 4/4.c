#include <stdio.h>

int main()
{
    int divisor;
    int inicio;
    int fim;
    
    printf("Digite o valor do divisor: ");
    scanf("%d", &divisor);
    
    printf("Digite o início do intervalo: ");
    scanf("%d", &inicio);
    
    printf("Digite o fim do intervalo: ");
    scanf("%d", &fim);
    
    printf("Os números divisíveis por %d no intervalo de %d a %d são:\n", divisor, inicio, fim);
    
    while (inicio <= fim)
    {
        if (inicio % divisor == 0)
        {
            printf("%d\n", inicio);
        }
        
        inicio = inicio + 1;
    }
    
    return 0;
}