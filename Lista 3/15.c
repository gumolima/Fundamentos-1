#include <stdio.h>

int main()
{
    float etiqueta;
    int formapagamento;
    float preco;
    
    printf("Qual o valor de etiqueta do produto a ser comprado? ");
    scanf("%f", &etiqueta);
    
    printf("Qual será a forma de pagamento?\n1 - À vista em dinheiro\n2 - À vista no cartão de crédito\n3 - Em duas vezes\n4 - Em três vezes\n");
    scanf("%d", &formapagamento);
    
    if (formapagamento == 1)
    {
        preco = etiqueta * 0.85;
        
        printf("Nesta forma de pagamento, o produto sai por R$%.2f!", preco);
    }
    else if (formapagamento == 2)
    {
        preco = etiqueta * 0.90;
        
        printf("Nesta forma de pagamento, o produto sai por R$%.2f!", preco);
    }
    else if (formapagamento == 3)
    {
        preco = etiqueta;
        
        printf("Nesta forma de pagamento, o produto sai por R$%.2f!", preco);
    }
    else if (formapagamento == 4)
    {
        preco = etiqueta * 1.10;
        
        printf("Nesta forma de pagamento, o produto sai por R$%.2f!", preco);
    }
    else
    {
        printf("Algo deu errado, tente novamente!");
    }
    
    return 0;
}