#include <stdio.h>

int main()
{
    float dolar;
    float euro;
    int escolha;
    float result;
    float valor;
    
    printf("Qual a cotação do dólar em relação ao real? ");
    scanf("%f", &dolar);
    
    printf("Qual a cotação do euro em relação ao real? ");
    scanf("%f", &euro);
    
    printf("1) Converter de Real para Euro\n2) Converter de Real para Dólar\n3) Converter de Euro para Dólar\n4) Converter de Euro para Real\n5) Converter de Dólar para Euro\n6) Converter de Dólar para Real\n Agora, digite o número da conversão que você deseja fazer: ");
    scanf("%d", &escolha);
    
    printf("Qual o valor a ser convertido? ");
    scanf("%f", &valor);
    
    if (escolha == 1)
    {
        result = valor / euro;
        
        printf("Isto é equivalente a %.2f euros!", result);
    }
    else if (escolha == 2)
    {
        result = valor / dolar;

        printf("Isto é equivalente a %.2f dólares", result);
    }
    else if (escolha == 3)
    {
        result = valor * euro / dolar;
        
        printf("Isto é equivalente a %.2f dólares!", result);
    }
    else if (escolha == 4)
    {
        result = valor * euro;
        
        printf("Isto é equivalente a %.2f reais!", result);
    }
    else if (escolha == 5)
    {
        result = valor * dolar / euro;
        
        printf("Isto é equivalente a %.2f euros!", result);
    }
    else if (escolha == 6)
    {
        result = valor * dolar;
        
        printf("Isto é equivalente a %.2f reais!", result);
    }
    else
    {
        printf("Algo deu errado, tente novamente!");
    }
    
    
    return 0;
}