#include<stdio.h>
int main()
{
    int a=5,b=3;
    printf("%d\n",++(a*b+1));
}

/**
    increment or decrement operator are not applicable on constant value or any expression. It is only applicable in variable

    ++(15+1)
    ++(16)

    16=16+1 ? error
    a++ -> a=a+1
**/
