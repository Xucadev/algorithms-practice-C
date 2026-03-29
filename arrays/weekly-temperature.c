/*
 * Program: Weekly Temperature Analyzer
 * Description: Reads the daily temperature in Celsius for 7 days,
 * calculates the weekly average, and classifies the week
 * as cold (below 15°C), mild (15–30°C), or hot (above 30°C).
 *
 * Author: Christopher
 * Course: Algorithms — PUCMM
 */

#include <stdio.h>

int main() 
{   
    float temp_dia[7], prom_sem;
    float suma = 0;
    


    for (int i = 0; i < 7; i++) 
    {
        printf("Ingrese la temperatura en grados Celcius (C) del dia %i:\n", i+1);
        scanf("%f", &temp_dia[i]);
        suma += temp_dia[i];
    }

    prom_sem = suma / 7;


    printf("Temperatura por cada dia:\n");
    printf("Dia 1: %.2f\n", temp_dia[0]);
    printf("Dia 2: %.2f\n", temp_dia[1]);
    printf("Dia 3: %.2f\n", temp_dia[2]);
    printf("Dia 4: %.2f\n", temp_dia[3]);
    printf("Dia 5: %.2f\n", temp_dia[4]);
    printf("Dia 6: %.2f\n", temp_dia[5]);
    printf("Dia 7: %.2f\n", temp_dia[6]);



    if (prom_sem < 15)
    {
        printf("Calificacion: Semana fría\n");
    }
    else if ((prom_sem >=15) && (prom_sem <=30))
    {
         printf("Calificacion: Semana templada\n");
    }
    else if (prom_sem > 30)
    {
         printf("Calificacion: Semana calurosa\n");
    }
    
    
    
    return 0;
}
