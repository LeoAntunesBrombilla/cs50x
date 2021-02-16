#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// define the max size of str_size
#define str_size 1000000

int main(void)
{
// define the needed variables
    int let = 0;
    char str[str_size];
    int i = 0; // number of letter
    int j = 0;
    int k = 0; // number of sentences
    int count = 0; // number of words
    int countw = 0; // number of sentences

// ask the user input
    printf("Text: ");
    fgets(str, sizeof str, stdin); // get the information to count words, letters and sentences
    for (i = 0; str[i] != '\0'; i++) // will count the number of letters until space
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) // condition to count a letter
        {
            let++; // add to the variable let
        }
    }

    for (j = 1; str[j] != '\0'; j++) // condition to count words
    {
        if (str[j - 1] == ' ' && str[j] != ' ')
        {
            count++; //words counter
        }
    }

    for (k = 0; str[k] != '\0'; k++)
    {
        if (str[k] == '.' || str[k] == '?' || str[k] == '!') // condition to count sentence
        {    
            countw++;
        }    
            
    }



    //printf("%d letter(s)\n", let); // print the number of letters
    //printf("%d word(s)\n", count + 1); // print the number of words + 1
    //printf("%d sentences(s)\n", countw);

    float L = (float) let / (count + 1) * 100;
    float S = (float) countw / (count + 1) * 100;
    float index = (float) 0.0588 * L - 0.296 * S - 15.8;
    index = round(index);
    
    // if to add before grad 1 and 16+
    
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index <= 16)
    {
        printf("Grade %0.f\n", index);
    }
    if (index > 16)
    {
        printf("Grade 16+\n");
    }
   

}