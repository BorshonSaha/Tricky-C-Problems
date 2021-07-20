#include<stdio.h>
int main()
{
    int x=10,y=15;
    if(++x>10 && ++y>15) /// (++x<10 && ++y>15)
    {
        x++;
    }
    else
    {
        y++;
    }
    printf("X : %d , Y : %d",x,y);
}

/// for logical and if first expression is false then no need to check second expression
