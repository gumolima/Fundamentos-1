#include <stdio.h>

int main()
{
    int meter = 1;
    float lastnew;
    float past;
    float average;
    
    while (meter < 16)
    {
        past = lastnew;
        
        printf("Digite um número: ");
        scanf("%f", &lastnew);
        
        lastnew = lastnew + past;
        
        meter = meter + 1;
    }
    
    average = lastnew / 15;
    
    printf("A soma de todos os número digitados é: %.2f, chegando a uma média de %.2f!", lastnew, average);
    
    return 0;
}