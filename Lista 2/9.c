#include <stdio.h>

int main()
{
    float valor;
    
    printf("Qual o valor da compra? ");
    scanf("%f", &valor);
    
    float totalcdesc = valor * 0.85;
    
    printf("Você recebeu um desconto e precisará pagar apenas %.2f", totalcdesc);
    
    return 0;
}