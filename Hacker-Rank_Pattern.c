#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void F(n)
{
    int i;
    for(i=0;i<n+n-1;i++)
    {
        printf("%d ",n);
    }
}
int main()
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int r,c,temp_n;
    for(r=0;r<n;r++)
    {
        temp_n=n;
        for(c=0;c<r;c++)
        {
            printf("%d ",temp_n);
            temp_n--;
        }
        F(temp_n);
        for(c=0;c<r;c++)
        {
            temp_n++;
            printf("%d ",temp_n);
        }
        printf("\n");
    }
    for(r=n-2;r>=0;r--)
    {
        temp_n=n;
        for(c=0;c<r;c++)
        {
            printf("%d ",temp_n);
            temp_n--;
        }
        F(temp_n);
        for(c=0;c<r;c++)
        {
            temp_n++;
            printf("%d ",temp_n);
        }
        printf("\n");
    }
    return 0;
}
