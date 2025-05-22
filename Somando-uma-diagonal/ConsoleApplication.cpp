#include <stdio.h>
#include <locale.h>

void criacao(int matriz[3][3]) {
    int i, j, cont = 1;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o %d° termo: ", cont);
            scanf_s("%d", &matriz[i][j]);
            cont++;
        }
    }
}


int somatorio(int matriz[3][3]) {
    int i, soma = 0;

    for (i = 0; i < 3; i++) {
        soma += matriz[i][i]; 
    }

    return soma;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int matriz[3][3];
    int i, j, soma;

    printf("Digite aqui os termos da sua matriz quadrática 3x3:\n");

    
    criacao(matriz);

   
    printf("\n==++== MATRIZ DIGITADA ==++==\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n"); 
    }

    soma = somatorio(matriz);

    printf("\nA soma da diagonal principal é: %d\n", soma);

    return 0;
}
