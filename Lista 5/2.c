#include <stdio.h>

int main()
{
    int array[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um número para o array: ");
        scanf("%d", &array[i]);
    }

    printf("Aqui está o número de cada posição do array multiplicado por sua posição:\n");

    for (int i = 0; i < 5; i++)
    {
        int multi = i * array[i];
        
        printf("%d\n", multi);
    }

    return 0;
}