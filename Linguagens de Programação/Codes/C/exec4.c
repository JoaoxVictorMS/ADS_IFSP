#include <stdio.h>
#include <string.h>
#include <locale.h>

#define MAXIMO_TAREFAS 100
#define TAMANHO_MAXIMO 50

typedef struct {
    char texto[TAMANHO_MAXIMO];
    int completo;
} Tarefa;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    Tarefa tarefas[MAXIMO_TAREFAS];
    int numTarefas = 0;
    int i;

    while (1) {
    	
        printf("\n---------- Seja bem vindo ao ByTasks! -----------\n\n");
        printf("\nEscolha o que deseja fazer digitando o n�mero correspondente � op��o:\n\n");
        printf("1. Adicionar tarefa\n");
        printf("2. Listar tarefas\n");
        printf("3. Excluir tarefa\n");
        printf("4. Sair\n");
        printf("Digite sua op��o: ");
        
        int pick;
        scanf("%d", &pick);

        switch (pick) {
            case 1:
                if (numTarefas < MAXIMO_TAREFAS) {
                    Tarefa novaTarefa;
                    printf("Digite aqui sua tarefa, sem espa�os: ");
                    scanf("%s", novaTarefa.texto);
                    novaTarefa.completo = 0;
                    tarefas[numTarefas] = novaTarefa;
                    numTarefas++;
                    printf("\n\nCriando tarefa...\n\n");
                    printf("\n\nTarefa criada com sucesso!\n\n");
                } else {
                    printf("\n\nLimite m�ximo de tarefas atingido!\n\n");
                }
                break;

            case 2:
            	printf("\n---------- Lista de tarefas -----------\n\n");
                for (i = 0; i < numTarefas; i++) {
                    printf("%d. [%c] %s\n", i + 1, tarefas[i].completo ? 'X' : ' ', tarefas[i].texto);
                }
                break;

            case 3:
            	printf("\n---------- Excluir tarefa -----------\n\n");
                printf("Digite o n�mero da tarefa que deseja excluir: ");
                int numeroTarefa;
                scanf("%d", &numeroTarefa);
                printf("\nExcluindo tarefa...\n");
            	printf("\nTarefa exclu�da com sucesso!\n");
                
				
                if (numeroTarefa >= 1 && numeroTarefa <= numTarefas) {
                    for (i = numeroTarefa - 1; i < numTarefas - 1; i++) {
                        tarefas[i] = tarefas[i + 1];
                    }
                    numTarefas--;
                    printf("Tarefa exclu�da com sucesso!\n");
                } else {
                    printf("N�mero de tarefa inv�lido!\n");
                }
                break;

            case 4:
                printf("Saindo...\n");
                return 0;

            default:
                printf("Op��o inv�lida! Tente novamente.\n");
        }
    }

    return 0;
}

