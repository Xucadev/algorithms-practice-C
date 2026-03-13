/*
 * Program: Stadium Seat Locator
 * Description: Calculates the row and column of a seat in a stadium
 * with 25,000 seats (50 rows x 500 columns) based on a ticket number.
 * Validates that the ticket number is within the valid range.
 *
 * Author: Christopher
 * Course: Algorithms — PUCMM
 */

#include <stdio.h>


int num_fila (int boleto)
{

    int fila;
    fila = boleto / 500;
    return fila;
}

int num_columna (int boleto)
{
    int columna;
    columna = boleto - (num_fila(boleto) * 500);
    if (columna == 0) 
    {
        columna = 500;
    }
    return columna;
}

int main() 
{
    int boleto, fila, columna;
    printf("Digite el numero de asiento que le toco\n");
    scanf("%i", &boleto);
    if ((boleto >= 1) && (boleto <= 25000))
    {
        printf("Su asiento se encuentra en:\n");
        columna = num_columna(boleto);
        fila = num_fila(boleto);
        if (columna < 500)
        {
            fila = fila + 1;
        }
        
        printf("Fila: %i\n", fila);
        printf("Columna: %i\n", columna);
    }
    else
    {
        printf("Boleto Invalido\n");
    }
    return 0;
}
