#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // Inicializar a semente para a fun��o rand() usando o tempo atual
    srand(time(NULL));

    // Gerar e imprimir  n�mero aleat�rio
        int random_number = rand();
        //int random_number = 10 + rand() % (20 - 10 + 1);
        printf("Random number: %d\n", random_number);

    return 0;
}

