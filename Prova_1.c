#include <stdio.h>

int main()
{
    float base, altura, total, rodape, area, largura = 0.8;

    printf ("Digite a base do quarto (em metros): ");
    scanf("%f", &base);

    printf("Digite a altura do quarto (em metros): ");
    scanf("%f", &altura);

    total = 2 * (base +altura);

    rodape = total - largura;

    area = base * altura;

    printf("Perimetro total: %.2f metros\n", total);
    printf ("Quantidade necessaria de rodape (descontando a porta): %.2f metros\n", rodape);
    printf ("Area do quarto: %.2f metros quadrados\n", area);

    return 0;
}
