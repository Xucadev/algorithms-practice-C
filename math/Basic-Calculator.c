/*
 * Program: Basic Calculator
 * Description: Performs basic arithmetic operations (addition, subtraction,
 * multiplication, division) between two numbers. Uses a char variable
 * to determine the desired operation via user input.
 *
 * Author: Christopher
 * Course: Algorithms — PUCMM
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, resultado;
    char Operacion;

    printf("Elija que quiere realizar:\n");
    printf("SUMA = S\n");
    printf("RESTA = R\n");
    printf("MULTIPLICACION = M\n");
    printf("DIVISION = D\n");

    printf("Digite la opcion: ");
    scanf(" %c", &Operacion);

    printf("Digite el primer numero: ");
    scanf("%f", &n1);

    printf("Digite el segundo numero: ");
    scanf("%f", &n2);

    if (Operacion == 'S' || Operacion == 's')
    {
        resultado = n1 + n2;
        printf("Resultado: %.2f\n", resultado);
    }
    else if (Operacion == 'R' || Operacion == 'r')
    {
        resultado = n1 - n2;
        printf("Resultado: %.2f\n", resultado);
    }
    else if (Operacion == 'M' || Operacion == 'm')
    {
        resultado = n1 * n2;
        printf("Resultado: %.2f\n", resultado);
    }
    else if (Operacion == 'D' || Operacion == 'd')
    {
        if (n2 != 0)
        {
            resultado = n1 / n2;
            printf("Resultado: %.2f\n", resultado);
        }
        else
        {
            printf("Error: No se puede dividir entre 0\n");
        }
    }
    else
    {
        printf("Opcion no valida\n");
    }

    return 0;
}
