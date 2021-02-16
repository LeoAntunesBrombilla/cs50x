#include <stdio.h>
#include <cs50.h>
#include <math.h>


int main(void)

{   
// creat the variables
    int count = 0;
    float dollars = 0;
    float change = 0;
// make the loop
    do 
    {
        dollars = get_float("Cash: ");          
    }
    while (dollars <= 0);
// has to be a positive integer
    int cents = round(dollars * 100);
// round to cents
// printf("cents = %i\n", cents);
    while (cents >= 25)
    {
        count++;
        cents -= 25;
    }
    while (cents >= 10) 
    {
        count++;
        cents -= 10;
    }
    while (cents >= 5) 
    {
        count++;
        cents -= 5;
    }
    while (cents >= 1) 
    {
        count++;
        cents -= 1;
    }
// print the number o coins
    printf("You get %d coins\n", count);
}






 
