#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	float precPro, percPro, valDesc, precFim;
	setlocale(LC_ALL,"Portuguese");
	printf("Informe o pre�o do produto:");
	scanf("%f", &precPro);
	printf("Informe o percentual de desconto:");
	scanf("%f", &percPro);
	valDesc = precPro * (percPro/100);
	precFim = precPro - valDesc;
	printf("O valor de desconto �:%6.2f\n",valDesc);
	printf("O pre�o do produto com desconto �:%6.2f\n",precFim);
	system ("pause");
	return 0;
}
