#include<stdio.h>
int main()
{
    int x;
    x=20;

    x*=30+5;/// x*=35 -> x=x*35 -> x=20*35

    printf("%d\n",x);
}
/// first right side expression then left side
