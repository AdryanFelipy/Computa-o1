#include<stdio.h>

int main ()
{

    float n1, n2, n3;
    float media;
    int frequencia;

    printf ("Digite as tres notas: ");
    scanf ("%f %f %f", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3;

    printf ("Digite sua frequencia: ");
    scanf ("%d", &frequencia) ;

    if (media > 8 && frequencia >= 75)
    printf("O estudante foi Aprovado com Distincao pois teve media %.2f e frequencia %d%%. \n", media, frequencia);

    else if (media >= 6 && frequencia >=75)
        printf("O etudante foi Aprovado Direto pois teve media %.2f e frequencia %d%%. \n", media, frequencia);

    else if (
        ((media >=4 && media < 6) && frequencia >= 75)||
         (media >=6 && frequencia < 75) ||
         (media >=4 && frequencia > 50) && frequencia < 75)

        printf("Vai para Final pois teve media &2f e frequencia %d%%. \n", media, frequencia);

    else
        printf("Reprovado Direto pois teve media &2f e frequencia %d%%. \n", media, frequencia);

    return 0;

}
