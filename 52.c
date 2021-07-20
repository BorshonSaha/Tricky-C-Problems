#include<stdio.h>
int main()
{
    int a=5;
    a=++a + ++a;
    printf("a : %d\n",a);
}

/// addition will perform after final value

/**

    a=5
    a=6
    a=7

    7+7=14

**/
