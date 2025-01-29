/*Exercício 4: Calculadora de Temperaturas
Escreva um programa que peça ao usuário para inserir uma temperatura em graus Celsius e, em seguida, escolha uma conversão:
1: Converter para Fahrenheit
2: Converter para Kelvin
O programa deve realizar a conversão de acordo com a opção escolhida e exibir o resultado.
*/

#include <stdio.h>;

int main() {

	int celsius, fahrenheit, kelvin, opcao, opcao2;

	printf("Diga qual e a sua opcao de escala: \n 1 para Celsius \n 2 para Fahrenheit \n 3 para Kelvin \n");
	scanf_s("%d",& opcao);

	switch (opcao) {
		case 1:
			printf("voce selecionou Celsios \n ");
			printf("diga sua temperatura em Celsius: ");
			scanf_s("%d", &celsius);
			printf("agora escolha 1 caso queira calcular Celsios para Fahrenheit ou 2 para calcular Celsios para Kelvin\n ");
			scanf_s("%d", &opcao2);
			if (opcao2 == 1) {

				fahrenheit = (celsius * 9 / 5) + 32;
				printf("sua temperatura em Fahrenheit sera de %d F", fahrenheit);	
			}
			
			else {
				kelvin = celsius + 273;
				printf("sua temperatura para Kelvin sera de %d K", kelvin);
			}
			
			break;

		case 2:
			printf(" voce escolheu Fahrenheit \n ");
			printf("Diga sua temperatura em Fahrenheit: ");
			scanf_s("%d", &fahrenheit);
			printf("agora escolha a opcao 1 se quiser converter de Fahrenheit para Celsius ou opcao 2 para converter de Fahrenheit para Kelvin \n");
			scanf_s("%d", &opcao2);
			if (opcao2 == 1) {

				celsius = (fahrenheit * 5/9) - 32;
				printf("sua temperatura em celsius sera de %d C", celsius);
			}

			else {
				kelvin = (fahrenheit * 5 / 9) + 241;
				printf("sua temperatura para Kelvin sera de %d K", kelvin);
			}

			
				break;

		case 3:
			printf("voce escolheu kelvin\n");
			printf("Diga sua temperatura em Kelvin: ");
			scanf_s("%d", &kelvin);
			printf("agora escolha a opcao 1 se quiser converter de kelvin para Celsius ou opcao 2 para converter de kelvin para Fahrenheit\n ");
			scanf_s("%d", &opcao2);
			if (opcao2 == 1) {
				celsius = kelvin - 273;
				printf("sua tempera em celsius sera de %d C", celsius);

			}
			else {
				fahrenheit = (kelvin * 9 / 5) - 241;
				printf("sua temperatura em fahrenheit sera de %d F", fahrenheit);

			}
			
			
			break; 


		default:
			printf("opcao incorreta!!!");


	}



}
