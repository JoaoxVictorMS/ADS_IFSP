#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	float valDepo, taxJu, valRend, valFinal;
	setlocale(LC_ALL,"Portuguese");
	printf("Digite o valor do seu desp�sito:");
	scanf("%f", &valDepo);
	printf("Digite o valor da taxa de juros:");
	scanf("%f", &taxJu);
	valRend = valDepo * (taxJu/100);
	valFinal = valDepo + valRend;
	printf("O valor do rendimento �:%6.2f\n",valRend);
	printf("O valor final do seu dep�sito somado ao rendimento �:%6.2f\n",valFinal);
	system ("pause");
	return 0;
}
