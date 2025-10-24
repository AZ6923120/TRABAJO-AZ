#include <stdio.h>

int main() {
    float parcial1, parcial2, parcial3, examen_final, proyecto,nota_parcial, nota_final;

    printf("Ingrese las tres notas parciales (0 a 40): ");
    scanf("%f %f %f", &parcial1, &parcial2, &parcial3);

    printf("Ingrese la nota del examen final (0 a 40): ");
    scanf("%f", &examen_final);

    printf("Ingrese la nota del proyecto final (0 a 20): ");
    scanf("%f", &proyecto);

    nota_parcial= parcial1 + parcial2 + parcial3;

    nota_final = (nota_parcial + examen_final + proyecto) /3;

    printf("La nota final del alumno es: %.2f\n", nota_final);

    return 0;
}
