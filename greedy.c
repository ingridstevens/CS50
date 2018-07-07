#import <stdio.h>
#import <cs50.h>

int main(void)
{
    float c = 0;
    do
    {
        c = get_float("Change owed: ");
    }
    while ( c < 0 );

    int pennies = c * 100;

    printf("%.2i pennies \n", pennies);
    int count = 0;
    while (pennies/200 > 0)
    {
        count++;
        pennies = pennies - 200;
        printf("2-DOLLAR COINS woo!\n");
    }
    while (pennies/100 > 0)
    {
        count++;
        pennies = pennies - 100;
        printf("DOLLAR COINS woo!\n");
    }
    while (pennies/50 > 0)
    {
        count++;
        pennies = pennies - 50;
        printf("FIFTY CENT COINS woo!\n");
    }
    while (pennies/25 > 0)
    {
        count++;
        pennies = pennies - 25;
        printf("QUARTERS woo!\n");
    }
    while (pennies/10 > 0)
    {
        count++;
        pennies = pennies - 10;
        printf("DIMES woo!\n");
    }
    while (pennies/5 > 0)
    {
        count++;
        pennies = pennies - 5;
        printf("NICKLES woo!\n");
    }
    while (pennies/1 > 0)
    {
        count++;
        pennies = pennies - 1;
        printf("PENNIES!! woo!\n");
    }
    printf("%i coins", count);
    printf("\n NUMBER OF PENNIES = %i \n", pennies);
}
