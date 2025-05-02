#include <stdio.h>

int main()
{
    int alunos;
    int meter = 1;
    float ga, gb, gc, gf, media;
    float soma = 0;
    
    printf("Quantidade de alunos: ");
    scanf("%d", &alunos);
    
    while (meter < alunos + 1)
    {
        printf("Aluno %d\n", meter);
        
        printf("Qual a nota do grau A? ");
        scanf("%f", &ga);
        
        printf("Qual a nota do grau B? ");
        scanf("%f", &gb);
        
        gf = (ga + gb * 2) / 3;
        
        if (gf > 6)
        {
            printf("APROVADO!\n");
        }
        else
        {
            printf("Qual a nota do grau C? ");
            scanf("%f", &gc);
            
            char g;
            
            printf("Qual grau a ser substituído?(A ou B) ");
            scanf(" %c", &g);
            
            if (g == 'a' || g == 'A')
            {
                gf = (gc + gb * 2) / 3;
                
                if(gf > 6)
                {
                    printf("APROVADO!\n");
                }
                else
                {
                    printf("REPROVADO!\n");
                }
            }
            else
            {
                gf = (ga + gc * 2) / 3;
                
                if(gf > 6)
                {
                    printf("APROVADO!\n");
                }
                else
                {
                    printf("REPROVADO!\n");
                }
            }
        }
        
        meter = meter + 1;
        
        soma = soma + gf;
    }
    
    media = soma / alunos;
    
    printf("A média dos alunos é de %.2f!", media);
    
    return 0;
}