#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	float horas, salario, salario_novo, calcsal, hora_extra;
	setlocale(LC_ALL, "Portuguese");
	printf("Informe sua jornda de trabalho semanal, em horas:");  
	scanf("%f", &horas);
	printf("Informe o sal�rio ganho por hora:");
	scanf("%f", &salario);
	calcsal = (horas * salario) * 4;
	hora_extra = (calcsal/2);
	if (horas > 40){
		salario_novo = calcsal + hora_extra;
		printf("O sal�rio que voc� receber� neste m�s, com reajuste, � de:R$ %6.2f\n", salario_novo);
	} else {
		salario_novo = calcsal;
		printf("O sal�rio que voc� receber� neste m�s, sem reajuste, � de:R$ %6.2f\n", salario_novo);
	}
	return 0;
}
