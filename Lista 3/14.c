#include <stdio.h>

int main()
{
    int dp10;
    int dp1030;
    int dp3160;
    int dp61;
    
    printf("Quantos dependentes com menos de 10 anos? ");
    scanf("%d", &dp10);
    
    printf("Quantos dependentes com idade entre 10 e  30 anos? ");
    scanf("%d", &dp1030);
    
    printf("Quantos dependentes com idade entre 31 e 60 anos? ");
    scanf("%d", &dp3160);
    
    printf("Quantos dependentes com mais de 60 anos? ");
    scanf("%d", &dp61);
    
    int total = dp10 * 100 + dp1030 * 220 + dp3160 * 395 + dp61 * 480;
    
    printf("O valor total do plano de saúde é igual a R$ %d!", total);
    
    return 0;
}