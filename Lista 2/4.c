#include <stdio.h>

int main()
{
    float ga;
    
    printf("Qual a sua nota do Grau A? ");
    scanf("%f", &ga);
    
    float gb;
    
    printf("Qual a sua nota do Grau B? ");
    scanf("%f", &gb);
    
    float media = (ga + gb * 2) / 3;
    
    printf("Então, a sua média final é de %.2f", media);
    
    return 0;
}