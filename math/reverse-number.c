/*
 * Program: Number Reverser
 * Description: Reverses the digits of a given integer using
 * modulo and integer division to extract and rebuild the number.
 *
 * Author: Christopher
 * Course: Algorithms — PUCMM
 */

#include <stdio.h>

int main() 
{
    int numero, dig, i;
    int invertido = 0;

    printf  ("Ingrese un numero\n");
    scanf ("%i", &numero);

    while (numero != 0)
    {
        dig = numero % 10;
        invertido = invertido * 10 + dig;
        numero = numero / 10;
    }

    printf ("El numero invertido es: %i \n", invertido);

    return 0;
}
