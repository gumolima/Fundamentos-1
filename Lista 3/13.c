#include <stdio.h>

int main()
{
    float ga;
    float gb;
    
    printf("Qual a sua nota do GRAU A? ");
    scanf("%f", & ga);
    
    printf("Qual a sua nota do GRAU B? ");
    scanf("%f", &gb);
    
    float notaunisinos = (ga + 2 * gb) / 3;
    
    printf("A sua média é de %.2f!\n", notaunisinos);
    
    if (notaunisinos > 6.0)
    {
        printf("Você não ficou em recuperação!\n");
    }
    else if (notaunisinos < 6)
    {
        printf("Você ficou em recuperação!\n");
        
        float gc;
        int subst;
        
        printf("Qual a sua nota do GRAU C? ");
        scanf("%f", &gc);
        
        printf("Qual nota você deseja substituir?\n1 - GRAU A\n2 - GRAU B\n");
        scanf("%d", &subst);
        
        if (subst == 1)
        {
            notaunisinos = (gc + 2 * gb) / 3;
            
            printf("Sua nova nota é %.2f!\n", notaunisinos);
            
            if (notaunisinos > 6)
            {
                printf("Parabéns, você passou de ano!");
            }
            else if (notaunisinos < 6)
            {
                printf("Que pena, você não passou de ano!");
            }
            
        }
        else if (subst == 2)
        {
            notaunisinos = (ga + 2 * gb) / 3;
            
            printf("Sua nova nota é %.2f!\n", notaunisinos);
            
            if (notaunisinos > 6)
            {
                printf("Parabéns, você passou de ano!");
            }
            else if (notaunisinos < 6)
            {
                printf("Que pena, você não passou de ano!");
            }
        }
        else
        {
            printf("Algo deu errado, tente novamente!");
        }
    }
    else
    {
        printf("Algo deu errado, tente novamente!");
    }
    
    return 0;
}