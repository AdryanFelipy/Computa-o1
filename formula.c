#include <stdio.h>

int arredonda(float x) {
    int inteiro = (int)x;
    float resto = x - inteiro;

    if (resto > 0.5) {
        return inteiro + 1;
    } else if (resto < -0.5) {
        return inteiro - 1;
    } else if (resto == 0.5) {
        return inteiro + 1;
    } else if (resto == -0.5) {
        return inteiro - 1;
    } else {
        return inteiro;
    }
}

int main() {
    float numero;

    printf("Digite um número decimal : ");
    scanf("%f", &numero);

    int resultado = arredonda(numero);
    printf("O número %.2f foi arredondado para %d\n", numero, resultado);

    return 0;
}
