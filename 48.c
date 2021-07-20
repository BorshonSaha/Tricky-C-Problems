#include<stdio.h>
int main()
{
    int i=2,j=2;
    while(i+1?--i:--j)
    {
        printf("%d\n",i);
    }
}

/**

    i+1?--i:--j    if  i+1  is true ? will return --i otherwise --j
    3?--i:--j
    3?1

    1 -> return by --i , i=1

    i+1?--i:--j
    2?--i:--j
    2?0

**/
