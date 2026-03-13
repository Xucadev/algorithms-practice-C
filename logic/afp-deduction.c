/*
 * Program: AFP Salary Deduction
 * Description: Calculates the final salary after applying AFP (pension fund)
 * deductions based on salary range. Applies a 2.28% deduction for salaries
 * between 20,000–30,000, and additional reductions for higher ranges.
 *
 * Author: Christopher
 * Course: Algorithms — PUCMM
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sueldo, sueldo_final;
    float afp_aplicable;
    float afp = 0.0228;

    printf("Digite la cantidad de su sueldo:\n");
    scanf("%i", &sueldo);

    if ((sueldo >= 20000) && (sueldo <= 30000))
    {
        afp_aplicable = (sueldo * afp);
        sueldo_final = (sueldo - afp_aplicable);
    }
    if ((sueldo >= 30001) && (sueldo <= 40000))
    {
        afp_aplicable = (sueldo * afp);
        sueldo_final = (sueldo_final * 0.5);
    }
    if ((sueldo >= 40001) && (sueldo <= 50000 ))
    {
        afp_aplicable = (sueldo * afp);
        sueldo_final = (sueldo_final * 0.5);
    }
    else
    {
        sueldo_final = sueldo;
    }


    printf("Su sueldo final es de: %f\n", sueldo_final);
    return 0;
}
