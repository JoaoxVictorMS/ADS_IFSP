#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i, vet[10], imp, par;
	
	par = 0; // Armazena todos os n�meros pares ap�s a condi��o ser atendida. Deve se inicar no zero uma vez que ir� passar por um la�o
	imp = 0;// Armazena todos os n�meros �mpares ap�s a condi��o ser atendida. Deve se inicar no zero uma vez que ir� passar por um la�o
	
	/* Solicita valores ao usu�rio 10 vezes usando um la�o*/
	printf ("Informe 10 elementos inteiros\n");
	for (i=0; i < 10; i++){
		printf("Digite o elemento %d: ", i+1); // O i+1 adiciona mais um n�mero na hora de imprimir qual � a posi��o do n�mero solicitado 
		scanf ("%d", &vet[i]);
	}
	
	/* Verifica quais n�meros s�o pares atrav�s do resto da divis�o por 2 e imprime quais s�o */
	printf("\nN�meros pares: ");
	for(i=0; i < 10; i++){
		if (vet[i] % 2 == 0){ // Verfica se cada �ndice do vetor ter� um resto diferente de zero quando divido por 2
			printf("%d", vet[i]); // Ap�s feito o printf("\nN�meros pares: ") ser� impresso cada item par, lado a lado, atrav�s do la�o
			par++; 
			printf(",");	
		}	
	}
	
/* Imprime a quantidade de n�meros pares*/
printf("\nQuantidade de n�meros pares: %d\n", par);

	/* Verifica quais n�meros s�o �mpares atrav�s do resto da divis�o por 2, queve ser diferente de 0, e imprime quais s�o */
	printf("\nN�meros �mpares: ");
	for(i=0; i < 10; i++){
		if (vet[i] % 2 != 0){
			printf("%d", vet[i]);
			imp++;
			printf(",");	
		}
	}
	
	/* Imprime a quantidade de n�meros �mpares*/
printf("\nQuantidade de n�meros �mpares: %d\n", imp);
	
				
system("pause");
return 0;
}
