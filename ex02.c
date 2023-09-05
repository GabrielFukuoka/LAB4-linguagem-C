#include <stdio.h>

float c2f(float celsius) {
    return (celsius * 9/5) + 32;
}

float f2c(float fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

int main() {
    int escolha;
    float temperatura;

    printf("Escolha uma opção:\n");
    printf("1. Converter de Celsius para Fahrenheit\n");
    printf("2. Converter de Fahrenheit para Celsius\n");
    scanf("%d", &escolha);

    if (escolha == 1) {
        printf("Digite a temperatura em Celsius: ");
        scanf("%f", &temperatura);

        float resultado = c2f(temperatura);
        printf("A temperatura em Fahrenheit é: %.2f\n", resultado);
    } else if (escolha == 2) {
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%f", &temperatura);

        float resultado = f2c(temperatura);
        printf("A temperatura em Celsius é: %.2f\n", resultado);
    } else {
        printf("Opção inválida. Por favor, escolha 1 ou 2.\n");
    }

    return 0;
}