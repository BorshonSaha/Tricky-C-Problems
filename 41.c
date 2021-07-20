#include<stdio.h>
int main()
{
    int x=10,y=15;
    if(++x>10 || ++y>15)
    {
        x++;
    }
    else
        y++;
    printf("X : %d , Y : %d\n",x,y);
}
