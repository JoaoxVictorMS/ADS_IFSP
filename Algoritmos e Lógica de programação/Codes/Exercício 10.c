#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	float infoPes, convPol, convJarda, convMilha;
	setlocale(LC_ALL,"Portuguese");
	printf("Informe um valor em p�s para ser convertido:");	
	scanf("%f", &infoPes);
	convPol = infoPes * 12;
	convJarda = infoPes / 3;
	convMilha = infoPes / 5280;
	printf("O valor em p�s dado, convertido para polegadas, � de: %f\n",convPol);
	printf("O valor em p�s dado, convertido para jardas, � de: %f\n",convJarda);
	printf("O valor em p�s dado, convertido para milhas, � de: %f\n",convMilha);
	system ("pause");
	return 0;
}
