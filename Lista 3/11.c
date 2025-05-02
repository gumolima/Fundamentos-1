#include <stdio.h>

 int main()
 {
    int valor;
    
    printf("Qual o valor a ser trocado em notas? ");
    scanf("%d", &valor);
    
    int notas100 = valor / 100;
    valor = valor % 100;
   
    int notas50 = valor / 50;
    valor = valor % 50;
    
    int notas20 = valor / 20;
    valor = valor % 20;
    
    int notas10 = valor / 10;
    valor = valor % 10;
    
    int notas5 = valor / 5;
    valor = valor % 5;
    
    int notas1 = valor / 1;
    valor = valor % 1;
    
    if (notas100 > 0)
        printf("%d nota(s) de R$ 100.\n", notas100);
    if (notas50 > 0)
        printf("%d nota(s) de R$ 50.\n", notas50);
    if (notas20 > 0)
        printf("%d nota(s) de R$ 20.\n", notas20);
    if (notas10 > 0)
        printf("%d nota(s) de R$ 10.\n", notas10);
    if (notas5 > 0)
        printf("%d nota(s) de R$ 5.\n", notas5);
    if (notas1 > 0)
        printf("%d nota(s) de R$ 1.\n", notas1);

    return 0;
 }