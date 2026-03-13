/*
 * Program: Solid Square Pattern
 * Description: Prints a solid square filled with asterisks (*) based
 * on a user-provided size. Validates that the input is a positive number.
 *
 * Author: Christopher
 * Course: Algorithms — PUCMM
 */

#include <stdio.h>


int main()
{
    int cantast, i, k;

    printf("Ingrese la cantidad de asteriscos:\n");
    scanf("%i", &cantast);

    while (cantast < 0)
    {
        printf("Ingrese un numero positivo:\n");
        scanf("%i", &cantast);
    }
    for (k = 0; k < cantast; k++)
    {
        for (i = 0; i < cantast; i++)
        {
            printf("*");
        }
         printf("\n");
    }

    return 0;
}
