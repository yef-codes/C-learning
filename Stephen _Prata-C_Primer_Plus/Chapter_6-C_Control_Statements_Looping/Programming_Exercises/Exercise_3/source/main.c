/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.6-ex.3
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Use nested loops to produce the following pattern:
                F
                FE
                FED
                FEDC
                FEDCB
                FEDCBA
               Note: If your system doesn’t use ASCII or some other code that
               encodes letters in numeric order, you can use the following to
               initialize a character array to the letters of the alphabet:
                char lets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
               Then you can use the array index to select individual letters;
               for example, lets[0] is 'A', and so on.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    const int ROWS = 6;

    int row, col;
    char ch;

    for (row = 0; row < ROWS; row++)
    {
        for (ch = 'F', col = 'F' - row; ch >= col; ch--)
        {
            printf("%c", ch);
        }

        printf("\n");
    }

    printf("\n=====> DONE <=====\n");

    return 0;
}