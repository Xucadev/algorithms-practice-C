/*
 * Program: Shift Payroll Summary
 * Description: Reads and displays the salaries of 4 morning shift workers
 * and 4 afternoon shift workers. Calculates and prints the total
 * payroll for each shift.
 *
 * Author: Christopher
 * Course: Algorithms — PUCMM
 */

#include <stdio.h>

int main() 
{
    float nom_am[4];
    float nom_pm[4];
    float suma_am = 0;
    float suma_pm = 0;

    for (int i = 0; i < 4; i++) 
    {
        printf("Ingrese el sueldo del trabajador matutino %i:\n", i+1);
        scanf("%f", &nom_am[i]);
        suma_am += nom_am[i];
    }

    for (int i = 0; i < 4; i++) 
    {
        printf("Ingrese el sueldo del trabajador vespertino %i:\n", i+1);
        scanf("%f", &nom_pm[i]);
        suma_pm += nom_pm[i];
    }

    printf("Sueldos matutinos:\n");
    for (int i = 0; i < 4; i++) 
    {
        printf("Sueldo del trabajador %i: %.2f\n", i+1, nom_am[i]);
    }
    printf("El total del turno matutino es de: %.2f\n", suma_am);

    printf("Sueldos vespertinos:\n");
    for (int i = 0; i < 4; i++) 
    {
        printf("Sueldo del trabajador %i: %.2f\n", i+1, nom_pm[i]);
    }
    printf("El total del turno vespertino es de: %.2f\n", suma_pm);

    return 0;
}
