#include <stdio.h>

int main ()
{
    float num, soma = 0, media;
    int contPositivos = 0;

    printf("Digite um valor (-1000 para sair): \n");
    scanf("%f", &num);

    while (num != -1000)
    {
        if (num > 0)
        {
            soma += num;
            contPositivos++;
        }

        printf("Digite um valor (-1000 para sair): \n");
        scanf("%f", &num);
    }

    if (contPositivos > 0)
    {
        media = soma / contPositivos;
        printf("Quantidade de valores positivos: %d\n", contPositivos);
        printf("Media dos valores positivos: %.1f\n", media);
    }
    else
    {
        printf("Nenhum valor positivo foi digitado.\n");
    }

    return 0;
}
