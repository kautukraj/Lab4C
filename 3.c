/* C program to implement binary search */
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

    int l = 0, u = 9, mid = 0;

    while (l < u)
    {
        c++;
        mid = (l + u) / 2;
        if (find == num[mid])
        {
            flag = 1;
            break;
        }
        else if (find < num[mid])
            u = mid - 1;
        else
            l = mid + 1;
    }

    if (flag==1)
        printf("%d %d", flag, c);

    else
        printf("%d %d", flag,(c+1));


    return 0;
}
