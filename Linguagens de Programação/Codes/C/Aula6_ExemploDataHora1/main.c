#include <stdio.h>
#include <time.h>

int main() {
    time_t currentTime;         // Declara��o da vari�vel que armazenar� o tempo atual
    struct tm *timeInfo;        // Ponteiro para a estrutura que conter� informa��es sobre o tempo

    time(&currentTime);         // Obten��o do tempo atual em segundos
    timeInfo = localtime(&currentTime);  // Converte o tempo em segundos para uma estrutura de data e hora local
    
    /*
    tm_sec -> segundos (0-59)
	tm_min -> minutos (0-59)
	tm_hour -> horas (0-23)
	tm_mday -> dia do m�s (1-31)
	tm_mon -> meses a partir de jan (0-11)
	tm_year -> anos a partir de 1900
	tm_wday -> dias a partir de domingo (0-6)
	tm_yday -> dias a partir de 1 de jan (0-365)
	tm_isdst -> Indicador de hor�rio de ver�o (positivo-> Ok, 0-> n�o est�, negativo->info indisp.)
	*/

    printf("Hora atual: %02d:%02d:%02d\n",
           timeInfo->tm_hour, timeInfo->tm_min, timeInfo->tm_sec); // Imprime a hora atual formatada

    return 0;
}





