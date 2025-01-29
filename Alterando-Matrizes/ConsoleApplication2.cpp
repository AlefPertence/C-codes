#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void CriarMatriz(int matriz[2][2]);
int main() {

	int matriz[2][2];
	int i = 0;
	int j = 0;
	
	printf("digite aqui sua matriz 2x2: ");

	
	CriarMatriz(matriz);

	

	printf("Sua matriz: \n");

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {

			printf(" %d ", matriz[i][j]);
		}
		printf("\n");

	}

}

 void CriarMatriz(int matriz[2][2]) {

	int i; 
	int j;

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {

			scanf_s("%d", &matriz[i][j]);
			if (i == j && matriz[i][j] != 1) {

				matriz[i][j] = 1;
			}

			if (i != j && matriz[i][j] != 0) {

				matriz[i][j] = 0;
			}

			

		}
	}

 }
