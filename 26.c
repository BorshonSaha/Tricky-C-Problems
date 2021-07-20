#include<stdio.h>
int main()
{
    int i=10;

    i=!i>14; /// not( ! ) is higher precidence than > operator

    printf("%d",i);
}
