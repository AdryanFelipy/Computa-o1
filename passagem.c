#include <stdio.h>
#include <math.h>


int calcula_raizes(float a, float b, float c, float *x1, float *x2) {
    float delta;

    if (a == 0) {
        
        return 0;
    }
    delta = b * b - 4 * a * c;

    if (delta < 0) {
        return 0;
    } else if (delta == 0) {
        
        *x1 = -b / (2 * a);
        *x2 = *x1;
        return 1;
        
    } else {
        *x1 = (-b + sqrt(delta)) / (2 * a);
        *x2 = (-b - sqrt(delta)) / (2 * a);
        return 2;    }
        
}
int main() {
    float a, b, c;
    float x1, x2;
    int resultado;

    printf("Digite os valores de a: ");
    scanf("%f", &a);
    printf("Digite os valores de b: ");
    scanf("%f", &b);
    printf("Digite os valores de c: ");
    scanf("%f", &c); 
    
    resultado = calcula_raizes(a, b, c, &x1, &x2);

    if (resultado == 0) {
        printf("Nao existem raizes reais.\n");
    } else if (resultado == 1) {
        printf("Existe uma raiz real: %.2f\n", x1);
    } else {
        printf("Existem duas raizes reais: %.2f e %.2f\n", x1, x2);
    }
    return 0;
}
