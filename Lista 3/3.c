#include <stdio.h>

int main()

{
    float n;
    
    printf("Digite um número: ");
    scanf("%f", &n);
    
    float n2 = n * 2;
    float n3 = n * 3;
    
    
    if (n==0)
    {
        printf("Você digitou 0, e 0 multiplicado por qualquer número é 0!");
    }
    else if (n>0)
    {
        printf("Você digitou um número positivo, o dobro dele é %.2f!", n2);
    }
    else if (n<0)
    {
        printf("Você digitou um número negativo, o triplo dele é %.2f!", n3);
    }
    
    
    return 0;
}