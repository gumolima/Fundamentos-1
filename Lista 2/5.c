#include <stdio.h>

int main()
{
    float preço_gas;
    
    printf("Quanto está custando o litro da gasolina? ");
    scanf("%f", &preço_gas);
    
    float dindin;
    
    printf("Qual o valor disponível para o abastecimento? ");
    scanf("%f", &dindin);
    
    float total_gas = dindin / preço_gas;
    
    printf("Com o seu dinheiro, é possível abastecer %.2f litros!!!", total_gas);
    
    return 0;
}