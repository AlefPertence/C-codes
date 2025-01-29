#include <iostream>
#include <locale.h>
#include <stdlib.h>

void asteristico() {

    for (int i = 0; i < 50; i++) {

        printf("*");

    }
    
    return ;
}

double valorresult(double a, double b, double c);

int main(){

    double a, b, c;



    asteristico();
    printf("\n\nDigite os numeros deseja analisar: \n\n");
    asteristico();

    printf("\n\ndigite o primeiro numero: ");
    scanf_s("%lf", &a);

    printf("\n\ndigite o segundo numero: ");
    scanf_s("%lf", &b);

    printf("\n\ndigite o terceiro numero: ");
    scanf_s("%lf", &c);
    
     
        system("cls");

        if (a == b || a == c || b == c) {
            printf("\n\nO primeiro, segundo e terceiro numero sao iguais\n\n");

            return 1;
        }

        valorresult(a, b, c);

}

double valorresult(double a, double b, double c) {

    if (a > b && a > c) {
        printf("\n o primeiro numero digitar e o maior numero: %.2f\n\n", a);

    }

    else if (b > a && b > c) {
        printf("\no segundo numero digitado e o maior numero: %.2f\n\n", b);
    }

    else if(c > a && c > b){
        printf("\n O tercerido numero digitado e o maior numero: %.2f\n\n", c);
    }

    return a, b, c;
}
