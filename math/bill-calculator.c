/*
 * Program: Bill Amount Calculator
 * Description: Calculates the total monetary value of a set of
 * bills in denominations of 5, 10, and 20 pesos based on
 * the quantity of each entered by the user.
 *
 * Author: Christopher
 * Course: Algorithms — PUCMM
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bill_5, bill_10, bill_20, cant_total, cant_5, cant_10, cant_20;


    printf("Ingrese la cantidad de billetes de 5\n");
    scanf("%i", &bill_5);
    printf("Ingrese la cantidad de billetes de 10\n");
    scanf("%i", &bill_10);
    printf("Ingrese la cantidad de billetes de 20\n");
    scanf("%i", &bill_20);


    cant_5 = (bill_5 * 5);
    cant_10 = (bill_10 * 10);
    cant_20 = (bill_20 * 20);

    cant_total = (cant_5 + cant_10 + cant_20);


    printf("El importe total es de: %i\n", cant_total);
    return 0;
}
