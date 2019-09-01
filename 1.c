/* C program to reverse the comma separated numbers */
/* Author : Kautuk Raj */
#include <stdio.h>
#include <ctype.h>
int main()
{

    int num[10];
    int i, c = 0;
    scanf("%d", &num[0]);
    for (i = 1; i < 10; i++)
        scanf(", %d", &num[i]); /* reading formatted input from console */


    for (i = 9; i >= 0; i--) /* printing in reverse order */
    {
        printf("%d ", num[i]);
    }


    return 0;
}

