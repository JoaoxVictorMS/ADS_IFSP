#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	float precPro, precReaj, precFim;
	setlocale(LC_ALL,"Portuguese");
	printf("Informe o pre�o do produto:");	
	scanf("%f", &precPro);
	precReaj = 0.15 * precPro;
	precFim = precReaj + precPro;
	printf("O pre�o do produto com o reajuste de 15 por cento �: %6.2f\n",precFim);
	system ("pause");
	return 0;
}
