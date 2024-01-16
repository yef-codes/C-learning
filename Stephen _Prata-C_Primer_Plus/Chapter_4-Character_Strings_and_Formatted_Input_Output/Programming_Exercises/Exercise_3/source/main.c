/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.4-ex.3
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that reads in a floating-point number and prints
               it first in decimal-point notation and then in exponential
               notation. Have the output use the following formats (the number
               of digits shown in the exponent may be different for your
               system):
                a. The input is 21.3 or 2.1e+001.
                b. The input is +21.290 or 2.129E+001.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    float number;

    printf("Enter a floating-point number: ");
    scanf("%f", &number);

    printf("The input is %.1f or %.1e.\n", number, number);
    printf("The input is %+.3f or %.3e.\n", number, number);

    printf("\n=====> DONE <=====\n");

    return 0;
}