#include <stdio.h>

int main()
{
	int idade;

	printf("Qual a sua idade, nadador? ");
	scanf("%d", &idade);

	if (idade > 4 && idade < 8)
	{
		printf("Você se encaixa na categoria INFANTIL A!");
	}
	else if (idade > 7 && idade < 11)
	{
		printf("Você se encaixa na categoria INFANTIL B!");
	}
    else if (idade > 10 && idade < 14)
	{
		printf("Você se encaixa na categoria JUVENIL A!");
	}
    else if (idade > 13 && idade < 18)
	{
		printf("Você se encaixa na categoria JUVENIL B!");
	}
    else if (idade > 17)
	{
		printf("Você se encaixa na categoria SÊNIOR!");
	}
    else
    {
        printf("Algo deu errado, tente novamente!");
    }

	return 0;
}