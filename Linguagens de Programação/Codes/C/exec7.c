#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    float x, y, z;
    
    setlocale(LC_ALL, "Portuguese");
	
	printf("\n---------- Seja bem vindo ao ByteTriangle! -----------\n\n");
    printf("\nDigite o comprimento do lado X do tri�ngulo: ");
    scanf("%f", &x);

    printf("\nDigite o comprimento do lado Y do tri�ngulo: ");
    scanf("%f", &y);

    printf("\nDigite o comprimento do lado Z do tri�ngulo: ");
    scanf("%f", &z);
    
    printf("\nLendo os valores...\n");
    printf("\nDetectando o tri�ngulo correspondente...\n");
    printf("\nTri�ngulo detectado:\n");

    if ((x + y > z) && (x + z > y) && (y + z > x)) {
        if (x == y && y == z) {
            printf("\nTri�ngulo Equil�tero\n");
        } else if (x == y || x == z || y == z) {
            printf("\nTri�ngulo Is�sceles\n");
        } else {
            printf("\nTri�ngulo Escaleno\n");
        }
    } else {
        printf("\nOs lados n�o formam um tri�ngulo.\n");
    }

    return 0;
}

