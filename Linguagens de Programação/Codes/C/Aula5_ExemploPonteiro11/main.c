#include <stdio.h>
#include <stdlib.h>

int soma(int a, int b) {
    return a + b;
}

int main() {
	int i;
	
    // Ponteiro para fun��o
    int (*operacao)(int, int) = soma;

    // Aloca��o din�mica de um array de inteiros
    int tamanho = 5;
    int *valores = (int *)malloc(sizeof(int) * tamanho);

    if (valores == NULL) {
        perror("Erro na aloca��o din�mica");
        return 1;
    }

    // Preenchendo o array com valores
    for (i = 0; i < tamanho; i++) {
        valores[i] = i + 1;
    }

    // Realizando a opera��o usando o ponteiro para fun��o
    for (i = 0; i < tamanho; i++) {
        int resultado = operacao(valores[i], 10);
        printf("Resultado da operacao: %d\n", resultado);
    }

    // Liberando a mem�ria alocada dinamicamente
    free(valores);

    return 0;
}


