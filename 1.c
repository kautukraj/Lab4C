#include <stdio.h>
#include <ctype.h>
int main()
{

    int num [10];
    int i,c=0;
    scanf("%d",&num[0]);
    for(i = 1; i <10; i++)
	scanf(", %d", &num[i]);
	
    for (i=0;i<10;i++)
    {
       if (isdigit(num[i]) !=0)
       { num[c]=(int)(num[i]-'0') ; c++; }
    }

    for (i=9;i>=0;i--)
    {
        printf("%d ", num[i]);
    }




    return 0;
}