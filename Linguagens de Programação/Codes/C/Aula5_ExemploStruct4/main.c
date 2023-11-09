#include <stdio.h>
#include <string.h>

// Defini��o da estrutura
struct Pessoa {
    char nome[50];
    int idade;
};

// Fun��o que recebe uma estrutura como par�metro
void imprimirPessoa(struct Pessoa p) {
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
}

int main() {
    // Criando uma estrutura e preenchendo seus dados
    struct Pessoa pessoa1;
    strcpy(pessoa1.nome, "Edinaldo");
    pessoa1.idade = 60;

    // Chamando a fun��o para imprimir os dados da estrutura
    imprimirPessoa(pessoa1);

    return 0;
}



