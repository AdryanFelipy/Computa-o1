#include <stdio.h>

void converteHora(int total_segundos, int *hora, int *min, int *seg) {
   
    *hora = total_segundos / 3600;            
    total_segundos = total_segundos % 3600;    
    *min = total_segundos / 60;               
    *seg = total_segundos % 60;                
}

int main() {
    int total, h, m, s;

    printf("Digite o total de segundos: ");
    scanf("%d", &total);

    converteHora(total, &h, &m, &s);

    printf("Tempo convertido: %02d:%02d:%02d\n", h, m, s);

    return 0;
}
