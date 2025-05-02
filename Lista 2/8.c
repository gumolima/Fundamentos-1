#include <stdio.h>

int main()
{
    float cels;
    
    printf("Quantos graus Celsius? ");
    scanf("%f", &cels);
    
    float fahren = cels * 9.0 / 5.0 + 32;
    
    printf("Isto equivale a %.2f Fahrenheit!!!", fahren);
    
    return 0;
}