
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

     int i, j, rows, k = 0;

    scanf ("%d", &rows);

    for ( i =1; i <= rows; i++)
    {
        for ( j = 1; j <= rows - i; j++)
        {
            printf (" ");
        }
        // use for loop where k is less than equal to (2 * i -1)
        for ( k = 1; k <= ( 2 * i - 1); k++)
        {
            if(i&1)
            printf ("^"); // print the ^
            else
            printf ("*"); // print the Star
        }
        printf ("\n");
    }

    return 0;
}
