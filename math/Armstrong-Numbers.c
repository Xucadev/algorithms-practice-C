/*
 * Program: Armstrong Numbers
 * Description: Determines whether a given number is an Armstrong number.
 * An Armstrong number is equal to the sum of its digits each raised
 * to the power of the number of digits.
 * Example: 153 = 1³ + 5³ + 3³
 *
 * Author: Christopher
 * Course: Algorithms — PUCMM
 */

#include <stdio.h>


int main() 
{
    int numero, numero_2, digito;
    int suma = 0;

    printf("Ingrese un numero:\n");
    scanf("%i", &numero);

    numero_2 = numero;

    while ( numero != 0)
    {
        digito = numero % 10;
        suma = suma + (digito * digito * digito);
        numero = numero / 10;
    }

    
    if (suma == numero_2) 
    {
        printf("El numero es Armstrong\n");
    }
    else
    {
        printf("No es un numero Armstrong\n");
    }


    return 0;
}
