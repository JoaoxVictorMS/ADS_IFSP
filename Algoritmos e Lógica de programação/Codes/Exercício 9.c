#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	float precoFab, percLucro, percImps, lucroDist, valorImps, valorFinal;
	setlocale(LC_ALL,"Portuguese");
	printf("Informe o pre�o de f�brica do ve�culo:");
	scanf("%f", &precoFab);
	printf("Informe o percentual de lucro:");
	scanf("%f", &percLucro);
	printf("Informe o percentual de impostos:");
	scanf("%f", &percImps);
	lucroDist = precoFab * (percLucro/100);
	valorImps = precoFab * (percImps/100);
	valorFinal = precoFab + lucroDist + valorImps;
	printf("O lucro do distribuidor �:%6.2f\n",lucroDist);
	printf("O valor do imposto �:%6.2f\n",valorImps);
	printf("O pre�o final do ve�culo �:%6.2f\n",valorFinal);
	system ("pause");
	return 0;
}
