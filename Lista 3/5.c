#include <stdio.h>

int main()
{
    int num;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    
    int result = num % 2;
    
    if (result==0)
    {
        printf("O número digitado é par!");
    }
    else if (result!=0)
    {
        printf("O número digitado é ímpar!");
    }
    else
    {
        printf("Você não digitou um número!");
    }
    
    return 0;
}