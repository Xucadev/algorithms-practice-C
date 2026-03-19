/*
 * Program: Classroom Grade Comparison
 * Description: Reads grades for 6 students in two classrooms (A and B).
 * Calculates each classroom's average, the overall general average,
 * which classroom has the higher average, and how many students
 * across both classrooms scored above the general average.
 *
 * Author: Christopher
 * Course: Algorithms — PUCMM
 */

#include <stdio.h>

int main() 
{
    float nota_A[6];
    float nota_B[6];
    float suma_nota_a = 0;
    float suma_nota_b = 0;
    float suma_prom_a = 0;
    float suma_prom_b = 0;
    float prom_gen;
    int total_prom = 0;


    printf("-----AULA A----\n");
    for (int i = 0; i < 6; i++) 
    {
        printf("Estudiante %i\n", i+1);
        scanf("%f", &nota_A[i]);
        suma_nota_a += nota_A[i];
    }
    printf("-----AULA B----\n");
    for (int i = 0; i < 6; i++) 
    {
        printf("Estudiante %i\n", i+1);
        scanf("%f", &nota_B[i]);
        suma_nota_b += nota_B[i];
    }
    suma_prom_a = suma_nota_a / 6;
    suma_prom_b = suma_nota_b / 6;


    prom_gen = (suma_nota_a + suma_nota_b) / 12;

    for (int i = 0; i < 6; i++) 
{
    if (nota_A[i] > prom_gen) 
    {
        total_prom += 1;
    }
    if (nota_B[i] > prom_gen)
    {
        total_prom += 1;
    }
}

    float mayor_prom = suma_prom_a;
    if (suma_prom_b> mayor_prom) 
    {
        mayor_prom = suma_prom_b;
        printf("El aula con mayor promedio es la B\n");
    }
    else
    {
        printf("El aula con mayor promedio es la A\n");
    }

    printf("El promedio general es de: %.2f\n", prom_gen);
    printf("La cantidad de estudiantes por enccima del promedio es de: %i\n", total_prom);

    
    return 0;
}
