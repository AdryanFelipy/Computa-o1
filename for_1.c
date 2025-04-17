#include <stdio.h>

int main()
{
    int n,i=1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    for ( i = 0; i<= 200; i++)
{
    if (i % n == 3 && 1 % 2 == 0)
        printf ("%d\n",i);
}
        return 0;
}

