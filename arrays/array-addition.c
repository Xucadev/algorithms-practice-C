/*
 * Program: Array Addition
 * Description: Reads two groups of 5 integers and produces a third array
 * containing the element-wise sum of both groups.
 *
 * Author: Christopher
 * Course: Algorithms — PUCMM
 */

#include <stdio.h>

int main() 
{
    int ArrUno[5];
    int ArrDos[5];
    int ArrSum[5];


    for (int i = 0; i < 5; i++) 
    {
        printf("Ingrese el termino %i del primer grupo\n", i+1);
        scanf("%i", &ArrUno[i]);
    }
    for (int i = 0; i < 5; i++) 
    {
        printf("Ingrese el termino %i del segundo grupo grupo\n", i+1);
        scanf("%i", &ArrDos[i]);
        ArrSum[i] = ArrUno[i] + ArrDos[i];
    }

    for (int i = 0; i < 5; i++) 
    {
        printf(" %i", ArrSum[i]);
    }

    return 0;
}
