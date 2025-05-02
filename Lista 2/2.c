#include <stdio.h>

int main()
{
    float dolar;
    
    printf("Olá, digite a cotação atual do dólar: ");
    scanf("%f", &dolar);
    
    float qtd;
    
    printf("Digite a quantidade de dólares que você deseja adquirir: ");
    scanf("%f", &qtd);
    
    float reais = dolar * qtd;
    
    printf("Ok. Para adquirir os dólares, você deverá pagar R$ %f", reais);
    
    return 0;
}