/*
 * Program: Age Classifier
 * Description: Reads a user's age and determines whether
 * they are a minor or an adult. Rejects invalid ages below 1.
 *
 * Author: Christopher
 * Course: Algorithms — PUCMM
 */

#include <stdio.h>

int main() 
{
    int edad;

    printf ("Introduzca su edad:\n");
    scanf ("%i", &edad);

    while (edad < 1)
    {
        printf ("Introduzca su edad:\n");
        scanf ("%i", &edad);
    }

    if (edad < 18)
    {
        printf ("Eres menor de edad!\n");
    }
    else 
    {
        printf ("Eres Mayor de edad!\n");
    }

    return 0;
}
