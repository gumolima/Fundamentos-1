#include <stdio.h>

int main()
{
    int passaros;
    
    printf("Qual a quantidade de pássaros a serem alimentados? ");
    scanf("%i", &passaros);
    
    int racao = passaros * 30;
    
    printf("Serão necessários %i gramas de ração!!!", racao);
    
    return 0;
}