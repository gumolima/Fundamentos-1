#include <stdio.h>
int main()
{
int min;

printf("Tempo em minutos: ");

scanf("%i", &min);

int sec = (min*60);

printf("O tempo escolhido, em segundos: %i", sec);

return 0;
}