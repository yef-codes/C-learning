/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.6-ex.13
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that creates an eight-element array of ints and
               sets the elements to the first eight powers of 2 and then prints
               the values. Use a for loop to set the values, and, for variety,
               use a do while loop to display the values.
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int main(void)
{
    const size_t ARR_LENGTH = 8;

    int array[ARR_LENGTH];
    size_t index;

    for (index = 0; index < ARR_LENGTH; index++)
    {
        array[index] = pow((double)2, (double)index);
    }

    index = 0;

    do
    {
        printf("%d ", array[index]);

        index++;

    } while (index < ARR_LENGTH);

    printf("\n");

    printf("\n=====> DONE <=====\n");

    return 0;
}