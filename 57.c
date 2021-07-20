#include<stdio.h>

void fun(int);

int main()
{
    int x=2;
    fun(x++);
}

void fun(int x)
{
    printf("X = %d\n",x++);
}
