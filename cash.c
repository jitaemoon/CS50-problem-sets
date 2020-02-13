#include <stdio.h>
#include <cs50.h>
#include <math.h>


int main(void)
{
    float change;

    int count = 0, dollar;

    // Prompt user
    do
    {
        change = get_float("Change owed: ");
    } while (change < 0);

    // Since float value is imprecise
    change = round(change * 100);

    if (change >= 100)
    {
        dollar = change / 100;
        count = dollar * 100 / 25;
        change = change - (dollar * 100);
    }

    // How many quarters to use
    while (change >= 25)
    {
         change -= 25;
         count++;
    }

    // How many dimes to use
    while (change >= 10)
    {
        change -= 10;
        count++;
    }

    // How many nickels to use
    while (change >= 5)
    {
        change -= 5;
        count++;
    }

    // How many pennies to use
    while (change >= 1)
    {
        change -= 1;
        count++;
    }

    // Print number of coins
    printf("%d\n", count);

    return 0;

}
