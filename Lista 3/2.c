#include <stdio.h>


int main()
{

float a;

printf("Digite um valor 'A': ");
scanf("%f", &a);

float b;

printf("Digite um valor 'B': ");
scanf("%f", &b);

float c;

printf("Digite um valor 'C': ");
scanf("%f", &c);

float ab = a+b;

float ac = a+c;

if (ab<ac)

{
printf("A soma dos valores 'A' e 'B' é menor que a soma de 'A' e 'C'!!!");
}

else
{
printf("A soma dos valores 'A' e 'B' NÃO é menor que a soma de 'A' e 'C'!!!");
}


return 0;
}