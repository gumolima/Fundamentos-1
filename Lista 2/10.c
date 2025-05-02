#include <stdio.h>

int main()
{
    float camiseta;
    
    printf("Quantas camisetas foram compradas? ");
    scanf("%f", &camiseta);
    
    float calca;
    
    printf("Quantas calças foram compradas? ");
    scanf("%f", &calca);
    
    float cinto;
    
    printf("Quantos cintos foram comprados? ");
    scanf("%f", &cinto);
    
    float total = camiseta * 25 + calca * 100 + cinto * 40;
    
    float desc = total * 0.10;
    
    float totalcdesc = total - desc;
    
    printf("Suas compras totalizaram R$ %.2f, mas você recebeu um desconto de R$ %.2f!!! \n", total, desc);
    printf("Você deve pagar apenas R$ %.2f!!!", totalcdesc);
    
    return 0;
}