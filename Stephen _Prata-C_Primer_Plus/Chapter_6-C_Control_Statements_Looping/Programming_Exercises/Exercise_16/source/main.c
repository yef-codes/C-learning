/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.6-ex.16
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Daphne invests $100 at 10% simple interest. (That is, every
               year, the investment earns an interest equal to 10% of the
               original investment.) Deirdre invests $100 at 5% interest
               compounded annually. (That is, interest is 5% of the current
               balance, including previous addition of interest.) Write a
               program that finds how many years it takes for the value of
               Deirdre’s investment to exceed the value of Daphne’s investment.
               Also show the two values at that time.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    const float SIMPLE_INTEREST = 0.1;
    const float COMPOUND_INTEREST = 0.05;

    int years = 0;
    float daphne_balance = 100;
    float deirdre_balance = 100;

    printf("%20s %20s\n", "Daphne's balance:", "Deirdre's balance:");
    printf("%15.2f%20.2f\n", daphne_balance, deirdre_balance);

    while (daphne_balance >= deirdre_balance)
    {
        daphne_balance += 100 * SIMPLE_INTEREST;
        deirdre_balance += deirdre_balance * COMPOUND_INTEREST;

        years++;

        printf("%15.2f%20.2f\n", daphne_balance, deirdre_balance);
    }

    printf("Total years: %d\n", years);

    printf("\n=====> DONE <=====\n");

    return 0;
}