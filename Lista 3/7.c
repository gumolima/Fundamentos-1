#include <stdio.h>

int main()
{
    float salario;
    float desconto;
    
    printf("Qual o seu salário? ");
    scanf("%f", &salario);
    
    desconto = salario * 0.11;
    
    if (desconto < 318.20)
    {
        printf("O desconto previdenciário, para você, é de R$ %.2f!!!", desconto);
    }
    else if (desconto > 318.20)
    {
        printf("O desconto previdenciário, para você, é de R$ 318.20!!!");
    }
    else
    {
        printf("Algo deu errado, tente novamente!!!");
    }
    
    return 0;
}