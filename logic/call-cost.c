/*
 * Program: Phone Call Cost Calculator
 * Description: Calculates the cost of a phone call based on its duration.
 * The first 3 minutes have a flat rate of 2.50 pesos. Each additional
 * minute is charged at 1 peso per minute.
 *
 * Author: Christopher
 * Course: Algorithms — PUCMM
 */

#include <stdio.h>

int main() 
{
    
    float callxmin = 2.5;
    float tiempo_call;
    float costo_total = 0;

    printf("Cuanto tiempo duro su llamada?\n");
    scanf("%f", &tiempo_call);


    if (tiempo_call <= 3) 
    {
        printf("El costo de su llamda es de: 2.5 pesos\n");    
    }
    
   else
    {
        costo_total = callxmin + (tiempo_call - 3.0) * 1 ;
        printf("El costo de su llamada es de %f\n", costo_total );
    }

    return 0;
}
