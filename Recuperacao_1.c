#include<stdio.h>
#include<math.h>

int main ()
{
    float altura, largura, area, tinta;

    printf ("Digite a altura da parede (em metros): ");
    scanf("%f", &altura);

    printf ("Digite a largura da parede (em metros):");
    scanf("%f", &largura);

    area = altura *largura;
    tinta = ceil(area / 2);

    printf("Area da parede: %.2f metros quadrados\n", area );
    printf("Quantidade de tinta necessaria: %.0f litros\n", tinta);

    return 0;
}
