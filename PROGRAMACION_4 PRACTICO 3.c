#include <stdio.h>

int main() {
    float C, N, T, interes;

    printf("Ingrese el capital (C): ");
    scanf("%f", &C);
    printf("Ingrese el periodo (N años): ");
    scanf("%f", &N);
    printf("Ingrese la tasa de interes (T %%): ");
    scanf("%f", &T);

    interes = (C * N * T) / 100;

    printf("El interes simple ganado es: %.2f\n", interes);

    return 0;
}
