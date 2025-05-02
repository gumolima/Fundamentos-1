#include <stdio.h>

int main()
{
    float celular, tablet;
    
    printf("Quantos celulares foram vendidos? ");
    scanf("%f", &celular);
    
    printf("Quantos tablets foram vendidos? ");
    scanf("%f", &tablet);
    
    float total = celular * 1000 + tablet * 1500;

    printf("Hoje, o total arrecadado foi de R$ %.2f!!!", total);

    return 0;
}