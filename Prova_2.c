#include <stdio.h>

int main()
{
    int distancia, min, seg, total_seg, rit_total, rit_min, rit_seg;

    printf ("Qual e a distancia (em km)? ");
    scanf("%d", &distancia);

    printf ("Em quanto minutos voce percorreu? ");
    scanf("%d", &min);

    printf ("Em quantos segundos voce percorreu? ");
    scanf("%d", &seg);

    total_seg = min * 60 + seg;

    rit_total = total_seg / distancia;

    rit_min = rit_total / 60;
    rit_seg = rit_total % 60;

    printf("Ritmo: %d:%d\n", rit_min, rit_seg);

    return 0;

}
