#include <stdio.h>
#include <iostream>
#include <locale.h>


void matri(int matriz[3][3]) {
	setlocale(LC_ALL, "Portuguese");
	int i, j, cont = 1;

	for (i = 0; i < 3;i++) {
		for (j = 0; j < 3; j++) {
			
			printf("digite o termo %d: ", cont);
			scanf_s("%d", &matriz[i][j]);
			cont++;
		}
	}
	
}

int soma_matriz(int matriz[3][3]) {
	int soma = 0;
	int i, j;


	for (i = 0; i < 3;i++) {
		for (j = 0; j < 3; j++) {
			
			soma += matriz[i][j];
		}
	}

	return soma;
	
}
int main()
{
	int matriz[3][3];
	int i, j, soma =0;
	setlocale(LC_ALL, "portuguese");

	printf("digite sua matriz 3x3 e descobrir a sua soma\n\n");

	matri(matriz);

	printf("\n==++==MATRIZ CONCLUIDA==++==\n");

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3;j++) {

			printf("%d", matriz[i][j]);
		}
		printf("\n");
	}

	soma = soma_matriz(matriz);

	printf("A soma de todos os termos da sua matriz será: %d", soma);


}
