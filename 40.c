#include<stdio.h>
int main()
{
    int i,c=0,n=7;
    for(i=0;i<=10;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
        printf("Prime\n");
    else
        printf("Not prime\n");
}

/// What's wrong with this code ?

/// 7%0 is undefined
