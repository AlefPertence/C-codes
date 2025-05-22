#include <stdlib.h>	
#include <stdio.h>
#include <locale.h>

#define M 50
#define quantAlunos 3
#define quantNotas 3

typedef struct aluno {
	char nome[M];
	int matricula;
	float notas[quantNotas];
	float media;

};

void LimparBuffer(void);
float CalcularMedia(float notas[], int quantN);

int main() {
	
	int i, j;
	struct aluno alunos[quantAlunos];


	for (i = 0; i < quantAlunos;i++) {

		printf("Digite o nome do aluno %i: ", i + 1);
		fgets(alunos[i].nome, M, stdin);
		printf("Matricula: ");
		scanf_s("%d", &alunos[i].matricula);
		LimparBuffer();
	}
	
	for (i = 0; i < quantAlunos; i++) {
		printf("\n digete a nota do aluno: %s \n", alunos[i].nome);

		for (j = 0; j < quantNotas; j++) {
			printf("nota %d: ", j + 1);
			scanf_s("%f", &alunos[i].notas[j]);
		}
		LimparBuffer();
		alunos[i].media = CalcularMedia(alunos[i].notas, quantNotas);
	}
	system("cls");

	printf("\n ======= Dados dos Alunos ======= \n\n");
	

	
	for (i = 0; i < quantAlunos; i++) {

		printf("aluno: %s ", alunos[i].nome);
		printf("mtricula: %d \n", alunos[i].matricula);
		printf(" media: %.2f \n\n", alunos[i].media);
	
	}
	


}

void LimparBuffer(void) {
	char c;
	while ((c = getchar()) != '\n' && c != EOF);	
}

float CalcularMedia(float notas[], int quantN) {

	float soma = 0;

	for (int i = 0;i < quantN;i++) {

		soma += notas[i];
	}

	return soma / quantN;

}
