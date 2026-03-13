/*
 * Program: Hollow Square Pattern
 * Description: Prints a hollow square border made of asterisks (*) based
 * on a user-provided size. Validates that the input is a positive number
 * and requires a minimum size of 3 to form a visible hollow shape.
 *
 * Author: Christopher
 * Course: Algorithms — PUCMM
 */

#include <stdio.h>
#include <stdlib.h>

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

    if (cantast >= 3)
    {

        for (k = 0; k < cantast; k++)
        {
            for (i = 0; i < cantast; i++)
            {
                if (k == 0 || k == cantast -1 || i == 0 || i == cantast - 1)
                printf("*");
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
