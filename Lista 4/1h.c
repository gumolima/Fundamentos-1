#include <stdio.h>

int main()
{
    int meter = 1;
    float lastnew = 0;
    float past;
    int n;
    
    printf("Quantos números você deseja somar? ");
    scanf("%d", &n);
    
    printf("Certo, agora digite eles: \n");
    
    while (meter < (n + 1))
    {
        past = lastnew;
        
        printf("Digite um número: ");
        scanf("%f", &lastnew);
        
        lastnew = lastnew + past;
        
        meter = meter + 1;
    }
    
    printf("A soma de todos os número digitados é: %.2f!", lastnew);
    
    return 0;
}