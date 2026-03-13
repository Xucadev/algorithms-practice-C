/*
 * Program: Minimum Number Finder
 * Description: Reads 4 integers from the user and determines
 * the smallest one by comparing each input against a running minimum.
 *
 * Author: Christopher
 * Course: Algorithms — PUCMM
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int num_entero, i;
    int comparador = INT_MAX;

    for (i = 0; i < 4; i++)
    {
        printf("Inserte el numero %i\n", i+1);
        scanf("%i", &num_entero);
        if (num_entero < comparador)
        {
            comparador = num_entero;
        }
    }
    printf("El numero mas pequenno es: %i\n\n", comparador);
    return 0;
}
