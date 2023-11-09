#include <stdio.h>

// Duas fun��es simples para fins de exemplo
int soma(int a, int b) {
    return a + b;
}

int subtracao(int a, int b) {
    return a - b;
}

int main() {
    // Declara��o do ponteiro para fun��o
    int (*operacao)(int, int);

    // Atribuindo o endere�o da fun��o 'soma' ao ponteiro
    operacao = soma;

    // Usando o ponteiro para chamar a fun��o 'soma'
    int resultado = operacao(5, 3);
    printf("Resultado da soma: %d\n", resultado);

    // Mudando o ponteiro para apontar para a fun��o 'subtracao'
    operacao = subtracao;

    // Usando o ponteiro para chamar a fun��o 'subtracao'
    resultado = operacao(10, 4);
    printf("Resultado da subtracao: %d\n", resultado);

    return 0;
}


