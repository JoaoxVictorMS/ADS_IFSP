#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	int ano, resto_100;
	setlocale(LC_ALL, "Portuguese");
	printf("Informe o ano que deseja verificar:");
	scanf("%d", &ano);
	if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) { /* As duas primeiras condi��es devem ser satisfeitas obrigatoriamente, a �ltima � apenas uma possibilidade */
		printf("O ano informado � bissexto");
	} else {
		printf("O ano informado n�o � bissexto");
	}
}
