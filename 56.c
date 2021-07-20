#include<stdio.h>
int main()
{
    int x;
    x= 4%5 == 4%2+3;
    printf("X = %d\n",x);
}

/**

    % is higher precedence than +

    4%2=0+3=3

    4%5=4

    so 4!=5 , the ans is 0

**/
