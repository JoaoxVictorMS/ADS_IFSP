#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	float A[10], B[10], C[10];
	
	printf ("Informe 10 elementos inteiros para a lista A\n");
	for (i=0; i < 10; i++){
		printf("Digite o elemento %d: ", i+1); // O i+1 adiciona mais um n�mero na hora de imprimir qual � a posi��o do n�mero solicitado 
		scanf ("%f", &A[i]);
	}
	
	printf ("Informe 10 elementos inteiros para a lista B\n");
	for (i=0; i < 10; i++){
		printf("Digite o elemento %d: ", i+1); // O i+1 adiciona mais um n�mero na hora de imprimir qual � a posi��o do n�mero solicitado 
		scanf ("%f", &B[i]);
	}
	
	// Neste caso o vetor C[i] se comporta como uma vari�vel que guarda valores, assim como as vari�veis 'soma', 'imp' e 'par' de exerc�cios anteriores
	for (i=0; i<10; i++){
		C[i] = A[i] + B[i];
	}

    printf("A soma de cada elemento das duas listas nas suas posi��es correspondentes � de: ");
    for(i = 0; i < 10; i++){
        printf("%6.2f ", C[i]);
        printf(",");
    }

system("pause");
return 0;
}
