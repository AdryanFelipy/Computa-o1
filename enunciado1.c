#include <stdio.h>
#include <string.h>

int main() {
    
    char nomes[3][101] = {
        "Amanda",
        "Guilherme",
        "Marina"
    };

    char entrada[101]; 

    while (1) {
        printf("Digite um nome: ");
        fgets(entrada, 101, stdin);
        entrada[strcspn(entrada, "\n")] = 0;

        int encontrado = 0;

        for (int i = 0; i < 3; i++) {
            if (strcmp(entrada, nomes[i]) == 0) {
                encontrado = 1;
                break;
            }
        }

        if (encontrado) {
            printf("Este nome está entre os três nomes.\n");
            break; // Sai do loop
        } else {
            printf("Este nome não está entre os três nomes.\n");
        }
    }

    printf("Fim do programa.\n");
    return 0;
}
