#include<stdio.h>
int main()
{
    int x=3,y=3;
    while(--x && --y)
    {
        printf("\n%d %d",x,y);
    }
    printf("\n%d %d",x,y);
}


/// what is the final value of x & y ?

/**

    2 && 2 = true
    1 && 1 = true
    0 = false

**/
