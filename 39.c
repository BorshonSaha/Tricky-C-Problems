#include<stdio.h>
void f(int *p,int *q)
{
    p=q;
    *p=2;
}
int i=0,j=1;
int main()
{
    f(&i,&j);
    printf("%d %d\n",i,j);
}

/// whats the output ?

/**

    address :  100   200   300  400
                i     j     p    q

    Value   :   0     1    100  200

                0     2    200

    *p=2
    *(200)=2

**/
