#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i, aluno_med;
	float vet[10], soma, media;
	
	soma = 0; // Armazena o valor da soma de todos os valores do vetor. Deve se inicar no zero uma vez que ir� passar por um la�o
	aluno_med = 0; // Armazena o n�mero de alunos com nota acima da m�dia. Deve se inicar no zero uma vez que ir� passar por um la�o
	
	printf ("Informe as 10 notas\n");
	for (i=0; i < 10; i++){
		printf("Digite a nota %d: ", i+1); // O i+1 adiciona mais um n�mero na hora de imprimir qual � a posi��o do n�mero solicitado 
		scanf ("%f", &vet[i]);
		soma += vet[i];
	}
	
media = soma/10;
printf("A m�dia � de: %6.2f", media);
	
	for(i=0; i < 10; i++){
		if (vet[i] > media){
			aluno_med++;
		}	
	}

printf("\nQuantidade de alunos com nota superior a m�dia : %d\n", aluno_med);

system("pause");
return 0;
}
