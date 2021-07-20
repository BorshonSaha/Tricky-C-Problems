#include<stdio.h>
/**int main()
{
    int a,b;
    a=3+2,b=a,12;
    printf("%d %d\n\n",a,b);
}**/

int main()
{
    int a,b;
    a=(3+2,b=a,12);
    printf("%d %d",a,b);
}

/// when bracket is taken right most number will consider as final value

/**

    a=(5,b=garb,12);
    a=12;

**/

