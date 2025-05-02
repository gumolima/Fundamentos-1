#include <stdio.h>

int main()
{
    int num;
    int colunas = 0;
    int linhas = 0;
    char caractere;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    printf("Digite um caractere: ");
    scanf(" %c", &caractere);
    
    while (linhas < num)
    {
        colunas = 0;
        
        while (colunas <= linhas)
        {
            printf("%c", caractere);
            
            colunas++;
            
        }
        
        printf("\n");
        
        linhas++;
    }

    return 0;
}