/*
 * Program: Ascending Order Validator
 * Description: Reads 10 integers and determines whether
 * they are arranged in strictly ascending order.
 *
 * Author: Christopher
 * Course: Algorithms — PUCMM
 */

#include <stdio.h>

int main() 
{
    int num[10];
    int orden = 0;


    for (int i = 0; i < 10; i++) 
    {
        printf("Ingrese el digito %i\n", i+1);
        scanf("%i", &num[i]);
    }

    for (int i = 0; i < 9; i++) 
    {
        printf("%i e %i\n", i, i+1);
        if (num[i] > num[i+1]) 
        {
           orden = orden + 1; 
        }
    }

    if (orden == 0) 
    {
        printf("Caso Valido\n");
    }
    else
    {
        printf("Caso Invalido\n");
    }

    return 0;
}
