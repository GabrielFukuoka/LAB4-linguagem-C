#include <stdio.h>

float soma(float a, float b, float c) {
    return a + b + c;
}

int main() {
    float num1, num2, num3;

    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);

    printf("Digite o segundo valor: ");
    scanf("%f", &num2);

    printf("Digite o terceiro valor: ");
    scanf("%f", &num3);

    float resultado = soma(num1, num2, num3);

    printf("A soma dos três valores é: %.2f\n", resultado);

    return 0;
}