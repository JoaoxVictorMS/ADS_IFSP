#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	int num, result;
	int i;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite um n�mero qualquer:");
	scanf("%d", &num);
	printf("Todos os n�meros existentes entre 0 e o seu n�mero informado � de: ");
	for (i = 0; i <= num; i++){
		result = i;
		printf(" %d", result);
        if (i < num){
        printf(",");}
    
	}
	return 0;
}
