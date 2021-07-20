#include<stdio.h>
int main()
{
    int a,b,c=4;
    a=b=c; /// b=4 , a=4  from right to left
    c=a==b;
    printf("%d",c);
}
