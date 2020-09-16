#include <stdio.h>
#include "hotel.h"

int menu(void)
{
    int code, status;
    printf("\n%s\n", STARS);
    printf("Enter the number of the desired hotel:\n");
    printf("1) Fairfield Arms\t");
    printf("2) Hotel Olympic\n");
    printf("3) Chertworthy Plaza\t");
    printf("4) The Stockton\n");
    printf("5) Quit\n");
    while ((status = scanf("%d", &code)) != 1 || (code < 1 || code > 5))
    {
        if (status != 1)
        {
            scanf("%*d");
            printf("Enter a integer from 1 to 5, please. \n");
        }
    }
    return code;
}

int get_nights(void)
{
    int nights;
    printf("How many nights are needs? ");
    while (scanf("%d", &nights) != 1)
    {
        scanf("%*d");
        printf("Please enter an integer, such as 2.\n");
    }
    return nights;
}

void show_price(double rate, int nights)
{
    int n;
    double total = 0.0;
    double factor = 1.0;
    for (n = 1; n <= nights; n++, factor *= DISCOUNT)
    {
        total += rate * factor;
    }
    printf("The total cost will be $%0.2f.\n", total);
}