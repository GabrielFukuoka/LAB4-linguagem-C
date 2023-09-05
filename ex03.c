#include <stdio.h>

void tabuada(int N) {
    printf("Tabuada do %d:\n", N);
    for (int i = 1; i <= 9; i++) {
        printf("%d x %d = %d\n", N, i, N * i);
    }
    printf("\n");
}

int main() {
    int numero;
    printf("Digite um número para ver a tabuada (1 a 9): ");
    scanf("%d", &numero);

    if (numero >= 1 && numero <= 9) {
        tabuada(numero);
    } else {
        printf("Número fora do intervalo permitido.\n");
    }

    return 0;
}