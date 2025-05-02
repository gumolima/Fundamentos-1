#include <stdio.h>

int main()
{
    float gramas;
    
    printf("Olá, seja bem vindo!!! O Valor do buffet a quilo é de R$ 40 o quilo!!!\n");
    printf("Quantos gramas pesou o seu prato? ");
    scanf("%f", &gramas);
    
    float valor = gramas * 0.04;
    
    printf("Levando em conta que seu prato pesou %.0f gramas, você deverá pagar %.2f reais!!!", gramas, valor);
    
    return 0;
}