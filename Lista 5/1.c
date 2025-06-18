#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int array[10];
    int arrayinverso[10];

    for (int i = 0;i < 10; i++)
    {
        array[i] = 10 + rand() % 81;

        printf("array[%d] = %d\n", i, array[i]);
    }

    int tem50 = 0;

    for (int i = 0; i < 10; i++)
    {
        if (array[i] == 50)
        {
            tem50 = 1;
        }
    }

    if (tem50 == 1)
    {
        printf("Achou o número 50 no vetor!\n");
    }
    else
    {
        printf("Não achou o número 50 no vetor!\n");
    }

    int qtd50 = 0;

    for (int i = 0; i < 10; i++)
    {
        if (array[i] == 50)
        {
            qtd50++;
        }
    }

    printf("O número 50 aparece %d vezes no vetor!\n", qtd50);

    float soma = 0;
    float media;

    for (int i = 0; i < 10; i++)
    {
        soma = soma + array[i];
    }

    media = soma / 10;

    printf("A média dos valores do vetor é igual a %.2f!\n", media);

    int maior = array[0];
    int menor = array[0];

    for (int i = 0; i < 10; i++)
    {
        if (array[i] > maior)
        {
            maior = array[i];
        }
        if (array[i] < menor)
        {
            menor = array[i];
        }


    }

    printf("O maior número do vetor é: %d!\n", maior);

    printf("O menor número do vetor é %d!\n", menor);

    printf("Soma dos números do vetor: %.0f!\n", soma);

    int produto = 1;

    for (int i = 0; i < 10; i++)
    {
        produto = produto * array[i];
    }

    printf("\nProduto dos números do vetor: %d\n!", produto);

    printf("\n---------------------\n");

    for (int i = 9; i >= 0; i--)
    {
        printf("\nArray ao contrário[%d]: %d", i, array[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        arrayinverso[i] = array[9 - i];
    }

    int pares[10];
    int impares[10];
    int qtdpares = 0;
    int qtdimpares = 0;

    for (int i = 0; i < 10; i++)
    {
        if (array[i] % 2 == 0)
        {
            pares[qtdpares] = array[i];
            qtdpares++;
        }
        else
        {
            impares[qtdimpares] = array[i];
            qtdimpares++;
        }
    }

    for (int i = 0; i < qtdpares; i++)
    {
        printf("\nArray de pares[%d]: %d", i, pares[i]);
    }

    for (int i = 0; i < qtdimpares; i++)
    {
        printf("\nArray de ímpares[%d]: %d", i, impares[i]);
    }

    return 0;
}
