#include <stdio.h>
#include <stdbool.h>

bool ehDivisor(int N, int D) {
    return N % D == 0;
}

int contarDivisores(int M) {
    int count = 0;
    for (int i = 1; i <= M; i++) {
        if (ehDivisor(M, i)) {
            count++;
        }
    }
    return count;
}

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    int quantidadeDivisores = contarDivisores(numero);

    printf("O número %d possui %d divisores.\n", numero, quantidadeDivisores);

    return 0;
}