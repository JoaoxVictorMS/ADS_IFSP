#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	float num_macas, preco_macas, preco_fim;
	setlocale(LC_ALL,"Portuguese");
	printf("Informe o n�mero de ma��s compradas:");
	scanf("%f", &num_macas);
	if (num_macas < 12)
	{
		preco_macas = 1.30;
	} else if (num_macas >= 12)
	{
		preco_macas = 1.00;
	}
	preco_fim = num_macas * preco_macas;
	printf("O pre�o que voc� vai pagar ser� de: R$ %6.2f\n", preco_fim);
	return 0;
}
