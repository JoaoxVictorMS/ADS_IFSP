#include <stdio.h>

// Definindo uma enumera��o chamada "Status"
enum Status {
    Inativo,
    Ativo,
    Pausado
};

int main() {
    enum Status estado = Ativo;

    if (estado == Ativo) {
        printf("O sistema est� ativo.\n");
    } else {
        printf("O sistema n�o est� ativo.\n");
    }

    return 0;
}


