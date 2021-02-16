#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do 
    {
// ask the user to put in the Height of the pyramid
        n = get_int("Height: ");          
    }
// must be between 1 and 8
    while (n < 1 || n > 8);
    // loop 
    for (int i = 0; i < n; i++)
    {   
        for (int k = 0; k < n - i - 1; k++)
        {
// space instead of dot
            printf(" ");
        }
        for (int j = 0; j < i + 1; j++)
        {   
            printf("#");
        }
        for (int k = 0; k < 2; k++)
        {
            printf(" ");
        }
        for (int l = 0; l < i + 1; l++)
        {
            printf("#");
        }
// jump the line
        printf("\n");
    }
}
