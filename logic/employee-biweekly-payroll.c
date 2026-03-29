/*
 * Program: Employee Biweekly Payroll
 * Description: Calculates the biweekly payroll for 5 workers based on
 * daily hours worked over 15 days. Tracks overtime hours (above 8/day),
 * absent days, daily average, and total salary including overtime pay.
 *
 * Author: Christopher
 * Course: Algorithms — PUCMM
 */

#include <stdio.h>

void Cant_Trabajadores()
{
    float cant_horas[15];
    float sueldo = 235;
    float dias_no_trabajados = 0;
    float horas_extras = 0;
    float prom_diario = 0;
    float salario_qincenal = 0;
    float precio_extras = 0;

    for ( int i = 0; i < 15; i++) 
    {
        printf("Ingrese la cantidad de horas del dia %i del trabajador\n", i+1);
        scanf("%f", &cant_horas[i]);

        if (cant_horas[i] > 8) 
        {
            horas_extras = horas_extras + (cant_horas[i] - 8);
        }

        if (cant_horas[i] == 0) 
        {
            dias_no_trabajados +=1;
        }

        salario_qincenal = salario_qincenal + (cant_horas[i] * sueldo);
        precio_extras = horas_extras * 23;
    if (horas_extras > 0) 
        {
            salario_qincenal = salario_qincenal + precio_extras;  
        }
        prom_diario = prom_diario + (cant_horas[i] / 15);
    }



    printf("La cantidad de diias que el trabajador no asisitio al trabajo es igual a: %i\n", dias_no_trabajados);
    printf("Cantidad de horas extras: %.2f\n", horas_extras);
    printf("Promedio diario: %.2f\n", prom_diario);
    printf("Salario Quincenal: %.2f\n", salario_qincenal);
}



int main() 
{
   

   for (int i = 0; i < 5; i++) 
   {
        printf("Trabajador %i\n", i+1);
        Cant_Trabajadores();
   }


    return 0;
