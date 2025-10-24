#include <stdio.h>
#include <math.h>

int main() {
    float D, r, circunferencia, area, volumen;

    printf("Ingrese el diametro de la esfera: ");
    scanf("%f", &D);

    r = D / 2;
    circunferencia = M_PI * D;
    area = 4 * M_PI * r * r;
    volumen = (4.0/3.0) * M_PI * pow(r, 3);

    printf("\nResultados:\n");
    printf("Circunferencia = %.2f\n", circunferencia);
    printf("Area = %.2f\n", area);
    printf("Volumen = %.2f\n", volumen);

    return 0;
}
