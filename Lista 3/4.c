#include <stdio.h>

int main()
{
    int num;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    
    int result = num % 3;
    
    if (result==0)
    {
        printf("O número digitado é divisível por 3!");
    }
    else if (result!=0)
    {
        printf("O número digitado NÃO é divisível por 3!");
    }
    else
    {
        printf("Você não digitou um número inteiro!");
    }
    
    return 0;
}