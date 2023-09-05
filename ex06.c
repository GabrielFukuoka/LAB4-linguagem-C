#include <stdio.h>
#include <math.h>

double calcularExpressao(int n) {
    double resultado = 0.0;
    int sinal = 1;

    for (int k = 1; k <= n; k++) {
        resultado += (double)(sinal * k) / (double)(k * k);
        sinal *= -1;
    }

    return resultado;
}

int main() {
    int n;

    printf("Digite um valor numérico (n): ");
    scanf("%d", &n);

    double resultado = calcularExpressao(n);

    printf("O resultado da expressão é: %lf\n", resultado);

    return 0;
}







