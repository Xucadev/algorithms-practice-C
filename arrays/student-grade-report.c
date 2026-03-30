/*
 * Program: Student Grade Report
 * Description: Reads 3 grades for each of 5 students, calculates
 * their individual averages, determines pass/fail status (threshold: 70),
 * and reports the general average, total approved, total failed,
 * and the highest individual average.
 *
 * Author: Christopher
 * Course: Algorithms — PUCMM
 */

#include <stdio.h>

void Calculo_1(float promedio[])
{
    float n1, n2, n3;
    
    for (int i = 0; i < 5; i++) 
    {   
        printf("-- ESTUDIANTE %i --\n", i+1);
        printf("Ingrese las calificaciones del estudiante %i \n", i+1);  

        printf("Calificacion 1:");
        scanf("%f", &n1);
        printf("Calificacion 2:");
        scanf("%f", &n2);
        printf("Calificacion 3:");
        scanf("%f", &n3);
        promedio[i] =(n1 + n2 + n3) / 3;
    }
}

void Estado(float promedio[],float max_nota, float promedio_gen)
{   
    max_nota = promedio[0];
    int reprobados = 0;
    int aprobados = 0;

    for (int i = 0; i < 5; i++) 
    {
        printf(" --- Estudiante %i ---\n", i+1);

        if (promedio[i] >= 70) 
        {
            printf("Promedio: %.2f - Aprobado\n", promedio[i]);
            aprobados+= 1;
        }
        else
        {
            printf("Promedio: %.2f - Desaprobado\n", promedio[i]);
            reprobados+= 1;
        }

        if (promedio[i] > max_nota) 
        {
            max_nota = promedio[i];   
        }
    }

    
    promedio_gen = (promedio[0] + promedio[1] + promedio[2] + promedio[3] + promedio[4]) /5;

    printf("El promedio general es de: %.2f\n", promedio_gen);
    printf("Aprobados: %i\n", aprobados);
    printf("Reprobados: %i\n", reprobados);
    printf("Mejor promedio: %.2f\n", max_nota);

}

int main() 
{   
    float promedio[5];
    float max_nota = 0;
    float promedio_gen = 0;
    
    
    Calculo_1(promedio);
    Estado(promedio, max_nota, promedio_gen);

    return 0;
}
