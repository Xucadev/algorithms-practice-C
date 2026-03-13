/*
 * Program: Payroll Calculator
 * Description: Calculates the payroll for 10 workers based on hours worked.
 * Base pay covers 120 hours. Hours beyond that are counted as overtime
 * and paid at a higher rate (base price + 1/3). Valid range: 120–160 hours.
 *
 * Author: Christopher
 * Course: Algorithms — PUCMM
 */

#include <stdio.h>
#include <stdlib.h>

int calcular_horas_extras(int horas_trabj)
    {
        int resultado;
        resultado = horas_trabj - 120;
        return resultado;
    }
int main()
{
    int horas_trabj, nom;
    int horas_bases = 120;
    float precio_nom = 327.5;
    float max_hrs_extras = 160;
    float precio_horas_extras = precio_nom + (precio_nom/3);
    int i;


    for (int i = 1; i < 11; i++)
    {
        printf("Inserte las horas trabajadas del obrero %i\n", i);
        scanf("%i", &horas_trabj);
        if ((horas_trabj >= horas_bases) && (horas_trabj <= max_hrs_extras))
        {
            nom = horas_bases * precio_nom + (calcular_horas_extras(horas_trabj) * precio_horas_extras);
            printf("La nomina para el trabajador %i", i);
            printf(" es de: %i\n", nom);
        }
        else
        {
            printf("Inserte horas validas entre 120 y 160\n");
        }
    }

    return 0;
}
