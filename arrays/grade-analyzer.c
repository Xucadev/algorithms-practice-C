/*
 * Program: Grade Analyzer
 * Description: Reads up to 10 grades (0–100) and calculates the average,
 * highest grade, lowest grade, and final status (pass/fail).
 * Pass threshold is 70. Rejects invalid grades and re-prompts the user.
 *
 * Author: Christopher
 * Course: Algorithms — PUCMM
 */

#include <stdio.h>

float Calcular_promedio(float nota[], float suma, int num_calif)
{
    float promedio;
    promedio = suma / num_calif;
    return promedio;
}

float buscar_max(float nota[], int num_calif)
{
    float nota_max = nota[0];
    for (int i = 0; i < num_calif; i++) 
        {
            if (nota[i] > nota_max) 
            {
                nota_max = nota[i];    
            }
        }
    return nota_max;
}

float buscar_min(float nota[], int num_calif)
{
    float nota_min = nota[0];
    for (int i = 0; i < num_calif; i++) 
        {
            if (nota[i] < nota_min) 
            {
                nota_min = nota[i];    
            }
        } 
    return nota_min;
}

int main() 
{
    int i;
    int num_calif;
    float suma = 0;
    float nota[10];
    
    printf("Ingrese la cantidad de calificaciones:\n");
    scanf("%i", &num_calif);

    if ((num_calif >= 1) && (num_calif <=10)) 
    {
        for (int i = 0.00; i < num_calif; i++) 
        {
            printf("Ingrese la calificacion #%i:\n", i + 1);
            scanf("%f", &nota[i]);
            suma+= nota[i];
            if (nota[i] < 0 || nota[i] > 100) 
            {
                printf("Nota invalida, debe estar entre 0 y 100.\n");
                i--;
            }
        }

        float promedio = Calcular_promedio(nota, suma, num_calif);
        float nota_max = buscar_max(nota, num_calif);
        float nota_min = buscar_min(nota, num_calif);

        printf("Promedio: %.2f\n", promedio);
        if (promedio >= 70) 
        {
            printf("Estado: Aprobado\n");
        }
        else
        {
            printf("Estado: Desaprobado\n");
        }

        printf("La nota mas alta: %.2f \n", nota_max);
        printf("La nota mas Baja: %.2f \n", nota_min);
    }
    else
    {
        printf("No puede pasar de 10 calificaciones\n");
    }
    return 0;
}
