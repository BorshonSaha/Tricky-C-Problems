#include<stdio.h>
int main()
{
    int a=35,b=15,c=25,d,e;
    d=a>c>b;
    e= c-b > a<=d;
    printf("%d %d\n",d,e);
}

/// relational operator have the assosiativity from left to right

/// arithmatic operator has the higher priority than relational operator

/**

   d = 35>25>15
     = 1>1
     = 0
   e = 25-15 > 35<=0
     = 10>35<=0
     = 0<=0
     = 1

**/
