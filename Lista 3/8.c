#include <stdio.h>

int main()
{
    float prod;
    float lucro;
    
    printf("Qual o valor do produto? ");
    scanf("%f", &prod);
    
    if (prod < 20)
    {
        lucro = prod * 1.45;
        
        printf("Então, o produto deve ser vendido por R$ %.2f!", lucro);
    }
    else if (prod >= 20 && prod <= 50)
    {
        lucro = prod * 1.35;
        
        printf("Então, o produto deve ser vendido por R$ %.2f!", lucro);
    }
    else if (prod > 50)
    {
        lucro = prod * 1.25;
        
        printf("Então, o produto deve ser vendido por %.2f!", lucro);
    }
    else
    {
        printf("Algo deu errado, tente novamente!");
    }
    
    return 0;
}