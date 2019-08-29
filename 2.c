/* C program for implementation of linear search */
/* Author : Kautuk Raj */

#include <stdio.h>
#include <ctype.h>
int main()
{

    int num[10];
    int i, c = 0, find = 0, flag = 0;
    scanf("%d", &num[0]);
    for (i = 1; i < 10; i++)
        scanf(", %d", &num[i]);
    scanf("%d", &find);
    for (i = 0; i < 10; i++)
    {
        c++;
        if (find == num[i]) /* test condition */
        {
            flag = 1;
            break;
        }
    }

    printf("%d %d", flag, c);


    return 0;
}
