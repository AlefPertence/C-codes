#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

double valordelta(double a, double b, double c);

void Baskararesult(double a, double b, double c);

int main() {
	setlocale(LC_ALL, "portuguese");
	double a, b, c, delta, baskara;

	printf("=====CALCULADORA DE EQUAÇÂO DE SEGUNDO GRAU=====\n");

	printf("digite os coeficiente da equação: \n");
	printf("coeficiente a: ");
	scanf_s("%lf", &a);
	printf("Coeficiente b: ");
	scanf_s("%lf", &b);
	printf("coeficiente c: ");
	scanf_s("%lf", &c);

	system("cls");

	if (a == 0) {
		printf(" O coeficiente a tem que ser diferente de zero");

		return 1;
	}

	delta = valordelta(a, b, c);

	printf("O valor do discriminante é: %.2f\n", delta);

	Baskararesult(a, b, c);




	return 0;

}

double valordelta(double a, double b, double c) {

	double delta;

	delta = b * b - 4 * a * c;

	return delta;

}

void Baskararesult(double a, double b, double c) {

	double raiz;
	double x1;
	double x2;
	raiz = valordelta(a, b, c);



	if (raiz == 0) {

		printf("Só há uma unica raiz real\n");

		x1 = (-b - sqrt(raiz)) / (2 * a);

		printf("Raiz: x1 = %.2f\n\n", x1);
	}

	else if (raiz < 0) {
		printf("Não existe raiz exata. \n");


	}

	else {
		printf("As raizes da equação de segundo grau é: \n");

		x1 = (-b - sqrt(raiz)) / (2 * a);
		x2 = (-b + sqrt(raiz)) / (2 * a);

		printf("\n\nx1 = %.2f\n", x1);
		printf("x2 = %.2f\n\n", x2);
	}






}
