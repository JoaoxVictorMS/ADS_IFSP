#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	float F, C;
	int i; /* Declra��o da vari�vel de incremento. Deve ser inteiro*/
	setlocale(LC_ALL, "Portuguese");
	for ( i = 10; i <= 20; i++){
		C = i;
		F = C * (9.0/5.0)+32.0;
		printf("A covers�o de %6.2f graus Celcius para graus Fahrenheit �: %6.2f\n", C, F); /* O 'prinft' fica dentro do 'for' para imprimir todos os resultados diferentes*/ 	
	}
	return 0;
}
