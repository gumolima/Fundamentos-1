#include <stdio.h>

int main()
{
    float n1;
    
    printf("Qual número você deseja dividir?");
    scanf("%f", &n1);
    
    float n2;
    
    printf("Por qual número?");
    scanf("%f", &n2);
    
    
    float divi = n1/n2;

    if (n2 == 0)
    {
        printf("O divisor não pode ser 0!!!");
    }
    else
    {
        printf("O resultado é: %.2f!!!", divi);
    }
    
    return 0;
}