#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int parimpar;
    int min;
    int max;
    int escolhido;
    int dedos;
    int total;
    
    min = 0;
    
    max = 5;
    
    srand (time(0));
    
    parimpar = min + rand() % (max - min + 1);
    
    printf("Vamos jogar par ou ímpar, escolha 0 para par e 1 para ímpar: ");
    scanf("%d", &escolhido);
    
    printf("Agora, escolha quantos dedos irá colocar (0 a 5): ");
    scanf("%d", &dedos);
    
    total = dedos + parimpar;
    
    if (total % 2 == 0 && escolhido == 0)
    {
        printf("Parabéns, você ganhou!!!");
    }
    else
    {
        printf("Infelizmente, você perdeu!!!");
    }
    
    
    return 0;
}