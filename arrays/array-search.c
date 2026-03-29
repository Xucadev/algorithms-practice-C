/*
 * Program: Array Element Search
 * Description: Fills an array of 10 integers and searches for
 * a value at a user-specified position, returning the element found.
 *
 * Author: Christopher
 * Course: Algorithms — PUCMM
 */

#include <stdio.h>

int main() 
{
    int arr[10];
    int buscador = 0;
    int posicion;


    for (int i = 0; i < 10; i++) 
    {
        printf("Introduzca el digito %i\n", i+1);
        scanf("%i", &arr[i]);
    }

    printf("Introduzca la posicion que desea consultar:\n");
    scanf("%i", &posicion);


    for (int i = 0; i < 10; i++) 
    {
        if (posicion == arr[i+1]) 
        {
            printf("%i\n", arr[i+1]);    
        }
    }

    return 0;
}
