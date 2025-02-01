#include <stdio.h>
#include <iostream>
#include <locale.h>

int fatorial(int num);

int main() {
	setlocale(LC_ALL, "pt_BR.UTF-8");
	int num;
	int result;

	printf("digite o número que deseja fatorar: ");
	scanf_s("%i", &num);

	result = fatorial(num);

	printf("O resultado é: %i", result);

}

int fatorial(int num) {

	

	if (num == 0) {

		num = 1;

		return num;
	}

	else if (num < 0) {

		printf("Número negativo detectado! Convertendo para positivo automaticamente...\n");
		
		num *= -1;
		num = num * fatorial(num - 1);
		
		return num;
	}
	else {

		num = num * fatorial(num - 1);

		return num;
	}

	
}

