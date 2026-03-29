/*
 * Program: Positive Negative Counter
 * Description: Reads 10 integers and counts how many are
 * positive, negative, or zero. Displays each count separately.
 *
 * Author: Christopher
 * Course: Algorithms — PUCMM
 */

#include <stdio.h>

int main() 
{
    int i;
    int dig = 1;
    int neg = 0;
    int pos = 0;
    int cero = 0;

    printf ("Ingrese 10 numeros de su eleccion\n");

    for (i = 1 ; i <= 10; i++)
    {
       
        printf ("Ingrese el numero %i \n", i);
        scanf ("%i", &dig);

        
        if (dig < 0)
        {
            neg++;
        }
        else if (dig > 0)
        {
            pos++;
        }
        else
        {
            cero++;
        }

    }
    printf ("La cantidad de numeros positivos son: %i\n", pos);
    printf ("La cantidad de numeros negativos son: %i\n", neg);
    printf ("La cantidad de ceros son: %i\n", cero);
    
    return 0;
}
