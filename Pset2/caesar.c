#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2) // test if there are 2 arguments
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    int c = strlen(argv[1]); // creats a int c equals to the lenght of argv[1]
    for (int i = 0; i < c; i ++) // creats a loop from i = 0 to lenght of argv
    {
        int d = isalpha(argv[1][i]); // creat a variable d to test if all the digits are number: ex 2a; a is not a number and so on
        if (d != 0) // if the argv[1][i] is false return 1 for error
        {
            printf("Usage: ./caesar key \n");
            return 1;
        }
    }

    int a = atoi(argv[1]); // test if is a negative number
    if (a < 0)
    {
        printf("Usage: ./caesar key\n");
    }

    else // now we apply the cypher
    {
        string s = get_string("plaintext: ");
        printf("ciphertext: ");
        for (int i = 0, n = strlen(s); i < n; i++) // iterates trough every character in the string
        {
            char let = s[i]; // takes every individual char of the string
            if (isalpha(let)) // test if is a alphabetic character
            {
                if (isupper(let)) // if it's upper we have to use 'A' 
                {
                    char v = 'A';
                    printf("%c", (let - v + a) % 26 + v);
                }
                if (islower(let)) // if it's lower we have to use 'a'
                {
                    char v = 'a';
                    printf("%c", (let - v + a) % 26 + v);
                }
            }
            else // if it's any other symbol or space just print that 
            {
                printf("%c", s[i]);
            }
        }
    }
    printf("\n");
}